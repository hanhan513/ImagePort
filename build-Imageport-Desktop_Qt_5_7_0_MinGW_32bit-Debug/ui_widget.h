/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *imagelabel;
    QTextEdit *sendTextEdit;
    QLabel *label_15;
    QTextEdit *revTextEdit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *Txlabel;
    QLabel *Rxlabel;
    QLabel *RxSpeedlabel;
    QLabel *FrameSizelabel;
    QLabel *FPSlabel;
    QLabel *ImageWidthlabel;
    QLabel *ImageHightlabel;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *sendButton;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *clearImageButton;
    QPushButton *clearDataButton;
    QPushButton *clearNumButton;
    QCheckBox *saveBox;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *startButton;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *grabButton;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *displayButton;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QComboBox *portBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QComboBox *baudBox;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_9;
    QComboBox *bitBox;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_10;
    QComboBox *parityBox;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_11;
    QComboBox *stopBox;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(647, 479);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        imagelabel = new QLabel(Widget);
        imagelabel->setObjectName(QStringLiteral("imagelabel"));
        imagelabel->setGeometry(QRect(281, 9, 391, 401));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(imagelabel->sizePolicy().hasHeightForWidth());
        imagelabel->setSizePolicy(sizePolicy1);
        imagelabel->setLineWidth(1);
        sendTextEdit = new QTextEdit(Widget);
        sendTextEdit->setObjectName(QStringLiteral("sendTextEdit"));
        sendTextEdit->setGeometry(QRect(11, 169, 256, 81));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(sendTextEdit->sizePolicy().hasHeightForWidth());
        sendTextEdit->setSizePolicy(sizePolicy2);
        label_15 = new QLabel(Widget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 150, 81, 16));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy3);
        revTextEdit = new QTextEdit(Widget);
        revTextEdit->setObjectName(QStringLiteral("revTextEdit"));
        revTextEdit->setGeometry(QRect(10, 280, 256, 171));
        sizePolicy2.setHeightForWidth(revTextEdit->sizePolicy().hasHeightForWidth());
        revTextEdit->setSizePolicy(sizePolicy2);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(11, 458, 608, 14));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget);
        horizontalLayout_6->setSpacing(30);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        Txlabel = new QLabel(layoutWidget);
        Txlabel->setObjectName(QStringLiteral("Txlabel"));
        sizePolicy3.setHeightForWidth(Txlabel->sizePolicy().hasHeightForWidth());
        Txlabel->setSizePolicy(sizePolicy3);

        horizontalLayout_6->addWidget(Txlabel);

        Rxlabel = new QLabel(layoutWidget);
        Rxlabel->setObjectName(QStringLiteral("Rxlabel"));
        sizePolicy3.setHeightForWidth(Rxlabel->sizePolicy().hasHeightForWidth());
        Rxlabel->setSizePolicy(sizePolicy3);

        horizontalLayout_6->addWidget(Rxlabel);

        RxSpeedlabel = new QLabel(layoutWidget);
        RxSpeedlabel->setObjectName(QStringLiteral("RxSpeedlabel"));
        sizePolicy3.setHeightForWidth(RxSpeedlabel->sizePolicy().hasHeightForWidth());
        RxSpeedlabel->setSizePolicy(sizePolicy3);

        horizontalLayout_6->addWidget(RxSpeedlabel);

        FrameSizelabel = new QLabel(layoutWidget);
        FrameSizelabel->setObjectName(QStringLiteral("FrameSizelabel"));
        sizePolicy3.setHeightForWidth(FrameSizelabel->sizePolicy().hasHeightForWidth());
        FrameSizelabel->setSizePolicy(sizePolicy3);

        horizontalLayout_6->addWidget(FrameSizelabel);

        FPSlabel = new QLabel(layoutWidget);
        FPSlabel->setObjectName(QStringLiteral("FPSlabel"));
        sizePolicy3.setHeightForWidth(FPSlabel->sizePolicy().hasHeightForWidth());
        FPSlabel->setSizePolicy(sizePolicy3);

        horizontalLayout_6->addWidget(FPSlabel);

        ImageWidthlabel = new QLabel(layoutWidget);
        ImageWidthlabel->setObjectName(QStringLiteral("ImageWidthlabel"));
        sizePolicy3.setHeightForWidth(ImageWidthlabel->sizePolicy().hasHeightForWidth());
        ImageWidthlabel->setSizePolicy(sizePolicy3);

        horizontalLayout_6->addWidget(ImageWidthlabel);

        ImageHightlabel = new QLabel(layoutWidget);
        ImageHightlabel->setObjectName(QStringLiteral("ImageHightlabel"));
        sizePolicy3.setHeightForWidth(ImageHightlabel->sizePolicy().hasHeightForWidth());
        ImageHightlabel->setSizePolicy(sizePolicy3);

        horizontalLayout_6->addWidget(ImageHightlabel);

        layoutWidget1 = new QWidget(Widget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 250, 251, 25));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);

        horizontalLayout_7->addWidget(label);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        sendButton = new QPushButton(layoutWidget1);
        sendButton->setObjectName(QStringLiteral("sendButton"));

        horizontalLayout_7->addWidget(sendButton);

        layoutWidget2 = new QWidget(Widget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(281, 429, 363, 25));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        clearImageButton = new QPushButton(layoutWidget2);
        clearImageButton->setObjectName(QStringLiteral("clearImageButton"));
        sizePolicy3.setHeightForWidth(clearImageButton->sizePolicy().hasHeightForWidth());
        clearImageButton->setSizePolicy(sizePolicy3);

        horizontalLayout_8->addWidget(clearImageButton);

        clearDataButton = new QPushButton(layoutWidget2);
        clearDataButton->setObjectName(QStringLiteral("clearDataButton"));
        sizePolicy3.setHeightForWidth(clearDataButton->sizePolicy().hasHeightForWidth());
        clearDataButton->setSizePolicy(sizePolicy3);

        horizontalLayout_8->addWidget(clearDataButton);

        clearNumButton = new QPushButton(layoutWidget2);
        clearNumButton->setObjectName(QStringLiteral("clearNumButton"));
        sizePolicy3.setHeightForWidth(clearNumButton->sizePolicy().hasHeightForWidth());
        clearNumButton->setSizePolicy(sizePolicy3);

        horizontalLayout_8->addWidget(clearNumButton);

        saveBox = new QCheckBox(layoutWidget2);
        saveBox->setObjectName(QStringLiteral("saveBox"));
        sizePolicy3.setHeightForWidth(saveBox->sizePolicy().hasHeightForWidth());
        saveBox->setSizePolicy(sizePolicy3);

        horizontalLayout_8->addWidget(saveBox);

        layoutWidget3 = new QWidget(Widget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 10, 238, 138));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        startButton = new QPushButton(layoutWidget3);
        startButton->setObjectName(QStringLiteral("startButton"));
        sizePolicy3.setHeightForWidth(startButton->sizePolicy().hasHeightForWidth());
        startButton->setSizePolicy(sizePolicy3);

        horizontalLayout_3->addWidget(startButton);

        horizontalSpacer_4 = new QSpacerItem(18, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetFixedSize);
        grabButton = new QPushButton(layoutWidget3);
        grabButton->setObjectName(QStringLiteral("grabButton"));
        sizePolicy3.setHeightForWidth(grabButton->sizePolicy().hasHeightForWidth());
        grabButton->setSizePolicy(sizePolicy3);

        horizontalLayout_4->addWidget(grabButton);

        horizontalSpacer_5 = new QSpacerItem(18, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        displayButton = new QPushButton(layoutWidget3);
        displayButton->setObjectName(QStringLiteral("displayButton"));

        horizontalLayout_5->addWidget(displayButton);

        horizontalSpacer_6 = new QSpacerItem(18, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalSpacer_7 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_7);


        horizontalLayout_9->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        label_7 = new QLabel(layoutWidget3);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy3.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(label_7);

        portBox = new QComboBox(layoutWidget3);
        portBox->setObjectName(QStringLiteral("portBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(portBox->sizePolicy().hasHeightForWidth());
        portBox->setSizePolicy(sizePolicy4);

        horizontalLayout_2->addWidget(portBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        label_8 = new QLabel(layoutWidget3);
        label_8->setObjectName(QStringLiteral("label_8"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy5);

        horizontalLayout->addWidget(label_8);

        baudBox = new QComboBox(layoutWidget3);
        baudBox->setObjectName(QStringLiteral("baudBox"));
        sizePolicy4.setHeightForWidth(baudBox->sizePolicy().hasHeightForWidth());
        baudBox->setSizePolicy(sizePolicy4);
        baudBox->setFrame(true);

        horizontalLayout->addWidget(baudBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setSizeConstraint(QLayout::SetFixedSize);
        label_9 = new QLabel(layoutWidget3);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy5.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy5);

        horizontalLayout_10->addWidget(label_9);

        bitBox = new QComboBox(layoutWidget3);
        bitBox->setObjectName(QStringLiteral("bitBox"));
        sizePolicy4.setHeightForWidth(bitBox->sizePolicy().hasHeightForWidth());
        bitBox->setSizePolicy(sizePolicy4);

        horizontalLayout_10->addWidget(bitBox);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setSizeConstraint(QLayout::SetFixedSize);
        label_10 = new QLabel(layoutWidget3);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy5.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy5);

        horizontalLayout_11->addWidget(label_10);

        parityBox = new QComboBox(layoutWidget3);
        parityBox->setObjectName(QStringLiteral("parityBox"));
        sizePolicy4.setHeightForWidth(parityBox->sizePolicy().hasHeightForWidth());
        parityBox->setSizePolicy(sizePolicy4);

        horizontalLayout_11->addWidget(parityBox);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setSizeConstraint(QLayout::SetFixedSize);
        label_11 = new QLabel(layoutWidget3);
        label_11->setObjectName(QStringLiteral("label_11"));
        sizePolicy5.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy5);

        horizontalLayout_12->addWidget(label_11);

        stopBox = new QComboBox(layoutWidget3);
        stopBox->setObjectName(QStringLiteral("stopBox"));
        sizePolicy4.setHeightForWidth(stopBox->sizePolicy().hasHeightForWidth());
        stopBox->setSizePolicy(sizePolicy4);

        horizontalLayout_12->addWidget(stopBox);


        verticalLayout->addLayout(horizontalLayout_12);


        horizontalLayout_9->addLayout(verticalLayout);

        imagelabel->raise();
        sendTextEdit->raise();
        layoutWidget->raise();
        label_15->raise();
        revTextEdit->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        imagelabel->setText(QString());
        label_15->setText(QApplication::translate("Widget", "\346\226\207\346\234\254\345\217\221\351\200\201\345\214\272\357\274\232", 0));
        Txlabel->setText(QApplication::translate("Widget", "TX:0", 0));
        Rxlabel->setText(QApplication::translate("Widget", "RX:0", 0));
        RxSpeedlabel->setText(QApplication::translate("Widget", "RX Speed: 0 B/s", 0));
        FrameSizelabel->setText(QApplication::translate("Widget", "FrameSize:0 B", 0));
        FPSlabel->setText(QApplication::translate("Widget", "FPS:0", 0));
        ImageWidthlabel->setText(QApplication::translate("Widget", "Image Width:240", 0));
        ImageHightlabel->setText(QApplication::translate("Widget", "Image Hight:320", 0));
        label->setText(QApplication::translate("Widget", "\346\226\207\346\234\254\346\216\245\346\224\266\345\214\272\357\274\232", 0));
        sendButton->setText(QApplication::translate("Widget", "\345\217\221\351\200\201\346\225\260\346\215\256", 0));
        clearImageButton->setText(QApplication::translate("Widget", "\346\270\205\351\231\244\345\233\276\345\203\217", 0));
        clearDataButton->setText(QApplication::translate("Widget", "\346\270\205\347\251\272\346\216\245\346\224\266\345\214\272", 0));
        clearNumButton->setText(QApplication::translate("Widget", "\346\270\205\351\231\244\350\256\241\346\225\260", 0));
        saveBox->setText(QApplication::translate("Widget", "\345\233\276\345\203\217\344\277\235\345\255\230\345\210\260\346\226\207\344\273\266", 0));
        startButton->setText(QApplication::translate("Widget", "\346\211\223\345\274\200\344\270\262\345\217\243", 0));
        grabButton->setText(QApplication::translate("Widget", "\346\215\225\350\216\267\345\233\276\347\211\207", 0));
        displayButton->setText(QApplication::translate("Widget", "\346\230\276\347\244\272\345\233\276\347\211\207", 0));
        label_7->setText(QApplication::translate("Widget", "\347\253\257\345\217\243\345\217\267\357\274\232", 0));
        label_8->setText(QApplication::translate("Widget", "\346\263\242\347\211\271\347\216\207\357\274\232", 0));
        baudBox->clear();
        baudBox->insertItems(0, QStringList()
         << QApplication::translate("Widget", "4800", 0)
         << QApplication::translate("Widget", "9600", 0)
         << QApplication::translate("Widget", "14400", 0)
         << QApplication::translate("Widget", "19200", 0)
         << QApplication::translate("Widget", "38400", 0)
         << QApplication::translate("Widget", "57600", 0)
         << QApplication::translate("Widget", "115200", 0)
        );
        label_9->setText(QApplication::translate("Widget", "\346\225\260\346\215\256\344\275\215\357\274\232", 0));
        bitBox->clear();
        bitBox->insertItems(0, QStringList()
         << QApplication::translate("Widget", "8", 0)
        );
        label_10->setText(QApplication::translate("Widget", "\346\240\241\351\252\214\344\275\215\357\274\232", 0));
        parityBox->clear();
        parityBox->insertItems(0, QStringList()
         << QApplication::translate("Widget", "0", 0)
         << QApplication::translate("Widget", "1", 0)
        );
        label_11->setText(QApplication::translate("Widget", "\345\201\234\346\255\242\344\275\215\357\274\232", 0));
        stopBox->clear();
        stopBox->insertItems(0, QStringList()
         << QApplication::translate("Widget", "1", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
