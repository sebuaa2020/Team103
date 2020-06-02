/********************************************************************************
** Form generated from reading UI file 'locate.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOCATE_H
#define UI_LOCATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_locate
{
public:
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_5;
    QPushButton *locate_2;
    QPushButton *cancel;
    QLineEdit *user_text;
    QLineEdit *password_text;

    void setupUi(QDialog *locate)
    {
        if (locate->objectName().isEmpty())
            locate->setObjectName(QStringLiteral("locate"));
        locate->resize(702, 506);
        label_3 = new QLabel(locate);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 0, 141, 111));
        label_3->setStyleSheet(QStringLiteral(""));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/resource/logo.jpg")));
        label_3->setScaledContents(true);
        label_2 = new QLabel(locate);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(490, 20, 201, 171));
        label_2->setStyleSheet(QStringLiteral(""));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/resource/ji.jpg")));
        label_2->setScaledContents(true);
        label_4 = new QLabel(locate);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(190, 40, 261, 101));
        label = new QLabel(locate);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 200, 71, 31));
        label_5 = new QLabel(locate);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(150, 250, 71, 31));
        locate_2 = new QPushButton(locate);
        locate_2->setObjectName(QStringLiteral("locate_2"));
        locate_2->setGeometry(QRect(360, 330, 89, 25));
        cancel = new QPushButton(locate);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(470, 330, 89, 25));
        user_text = new QLineEdit(locate);
        user_text->setObjectName(QStringLiteral("user_text"));
        user_text->setGeometry(QRect(220, 200, 181, 31));
        password_text = new QLineEdit(locate);
        password_text->setObjectName(QStringLiteral("password_text"));
        password_text->setGeometry(QRect(220, 250, 181, 31));

        retranslateUi(locate);
        QObject::connect(cancel, SIGNAL(clicked()), locate, SLOT(close()));

        QMetaObject::connectSlotsByName(locate);
    } // setupUi

    void retranslateUi(QDialog *locate)
    {
        locate->setWindowTitle(QApplication::translate("locate", "Dialog", Q_NULLPTR));
        label_3->setText(QString());
        label_2->setText(QString());
        label_4->setText(QApplication::translate("locate", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\345\212\251\346\211\213\346\234\272\345\231\250\344\272\272\347\231\273\351\231\206\347\225\214\351\235\242</span></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("locate", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\347\224\250\346\210\267\345\220\215:</span></p></body></html>", Q_NULLPTR));
        label_5->setText(QApplication::translate("locate", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\345\257\206\347\240\201:</span></p></body></html>", Q_NULLPTR));
        locate_2->setText(QApplication::translate("locate", "\347\231\273\351\231\206", Q_NULLPTR));
        cancel->setText(QApplication::translate("locate", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class locate: public Ui_locate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOCATE_H
