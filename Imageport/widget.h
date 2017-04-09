#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDebug>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
//#include <rgb565.h>
#include <rgb2bmp.h>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
     void on_startButton_clicked();

     void Read_Data();

     void on_clearDataButton_clicked();

     void on_sendButton_clicked();

     void on_clearImageButton_clicked();

     void on_clearNumButton_clicked();

     void on_saveBox_stateChanged(int arg1);

     void on_grabButton_clicked();

     void on_displayButton_clicked();

private:
    Ui::Widget *ui;
    QSerialPort *serial;

};

#endif // WIDGET_H
