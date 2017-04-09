#include "widget.h"
#include "ui_widget.h"
//#include <string.h>
//#include <QColorDialog.h>       //颜色
//#include <qfiledialog.h>    //文件
#include <QDebug>
//#include <qfontdialog.h>        //字体
#include <QPixmap>          //label 图片
//#include <QHBoxLayout>       //
//#include <QTextEdit>        //中心部件
//#include <QMdiSubWindow>
#include <QString>
#include <qtextedit.h>
#include <QImage>
#include <qpainter.h>
#include "qfile.h"
#include "qtextstream.h"
#include "QTextStream"
#include "qbuffer.h"


//数据
unsigned int rxData=0;
unsigned int txData=0;

QByteArray buf;
//QByteArray bytebuf((const char*)0,2*240*320+1);
QByteArray bytebuf;
char *rgbBuf;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->imagelabel->setPixmap(QPixmap("G:/photo/2start.jpg"));

    //查找可用的串口
    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        QSerialPort serial;
        serial.setPort(info);
        if(serial.open(QIODevice::ReadWrite))
        {
            ui->portBox->addItem(serial.portName());
            serial.close();
        }
    }
    //设置波特率下拉菜单默认显示第三项
    ui->baudBox->setCurrentIndex(6);
    //关闭发送按钮的使能
    ui->sendButton->setEnabled(false);
    qDebug() << tr("界面设定成功！");
    ui->grabButton->setEnabled(false);
    ui->displayButton->setEnabled(false);
}

Widget::~Widget()
{
    delete ui;
}


//读取接收到的数据
void Widget::Read_Data()
{
  //  QPainter painter(this);
    buf = serial->readAll();
    if(!buf.isEmpty())
    {
        rxData += buf.size(); //计算接收字节
        QString rxStr="RX:"+QString::number(rxData,10);
        ui->Rxlabel->setText(rxStr);
        ui->revTextEdit->append(buf.toHex());

    }

    bytebuf.append(buf);

    qDebug() << buf.size()<<" :" <<bytebuf.size();
//------------------
    buf.clear();
}

//打开串口
void Widget::on_startButton_clicked()
{
        if(ui->startButton->text()==tr("打开串口"))
           {
            if(ui->portBox->count()==0)
                {
                    ui->revTextEdit->append(tr("端口打开错误"));
                }

           serial = new QSerialPort;
           //设置串口名
           serial->setPortName(ui->portBox->currentText());
           //打开串口
           serial->open(QIODevice::ReadWrite);
           //设置波特率
           serial->setBaudRate(ui->baudBox->currentText().toInt());
           //设置数据位数
           switch(ui->bitBox->currentIndex())
           {
           case 8: serial->setDataBits(QSerialPort::Data8); break;
           default: break;
           }
           //设置奇偶校验
           switch(ui->parityBox->currentIndex())
           {
           case 0: serial->setParity(QSerialPort::NoParity); break;
           default: break;
           }
           //设置停止位
           switch(ui->stopBox->currentIndex())
           {
           case 1: serial->setStopBits(QSerialPort::OneStop); break;
           case 2: serial->setStopBits(QSerialPort::TwoStop); break;
           default: break;
           }
           //设置流控制
           serial->setFlowControl(QSerialPort::NoFlowControl);

           //关闭设置菜单使能
           ui->portBox->setEnabled(false);
           ui->baudBox->setEnabled(false);
           ui->bitBox->setEnabled(false);
           ui->parityBox->setEnabled(false);
           ui->stopBox->setEnabled(false);
           ui->startButton->setText(tr("关闭串口"));
           ui->sendButton->setEnabled(true);
           ui->grabButton->setEnabled(true);
           ui->displayButton->setEnabled(true);

           //连接信号槽
           QObject::connect(serial, &QSerialPort::readyRead, this, &Widget::Read_Data);
       }
       else
       {
           //关闭串口
           serial->clear();
           serial->close();
           serial->deleteLater();

           //恢复设置使能
           ui->portBox->setEnabled(true);
           ui->baudBox->setEnabled(true);
           ui->bitBox->setEnabled(true);
           ui->parityBox->setEnabled(true);
           ui->stopBox->setEnabled(true);
           ui->startButton->setText(tr("打开串口"));
           ui->sendButton->setEnabled(false);
           ui->grabButton->setEnabled(false);
           ui->displayButton->setEnabled(false);
       }
}

void Widget::on_clearDataButton_clicked()
{

    ui->revTextEdit->clear();
}

void Widget::on_sendButton_clicked()
{
    QString txStr=ui->sendTextEdit->toPlainText().toLatin1();

    txData +=txStr.length();
    txStr="TX:"+QString::number(txData,10);
    ui->Txlabel->setText(txStr);

    serial->write(ui->sendTextEdit->toPlainText().toLatin1());

}

void Widget::on_clearImageButton_clicked()
{
    ui->imagelabel->clear();
}

void Widget::on_clearNumButton_clicked()
{
    rxData=0;
    txData=0;
    char str[10];
    sprintf(str,"RX: %d",0);
    ui->Rxlabel->setText(str);
    sprintf(str,"TX: %d",0);
    ui->Txlabel->setText(str);
}

void Widget::on_saveBox_stateChanged(int arg1)
{

}


void Widget::on_grabButton_clicked()
{
    //清空原有接收区
    bytebuf.clear();

    char* commnd="1";
    serial->write(commnd);
}

void Widget::on_displayButton_clicked()
{
    //将接收到的图片保存为文件
       QFile file("F:/NEW/qt/ImagePort/Imageport/rgb565.bin");
       if(!file.open(QIODevice::ReadWrite))
       {
           ui->revTextEdit->append("read a.txt failed");
       }
       QDataStream in(&file);
       qDebug() <<"this:"<< buf.size()<<" :" <<bytebuf.size();
       in.writeRawData(bytebuf,bytebuf.size());
       ui->revTextEdit->append("保存结束");
       file.close();


       //图片转换565to888
       TransBMP();
       ui->imagelabel->setPixmap(QPixmap("F:/NEW/qt/ImagePort/Imageport/rgb565_240_320_woman_0x7f.bmp"));

}
