/********************************************************************************
** Form generated from reading UI file 'user_ui.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_UI_H
#define UI_USER_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_User_ui
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *voice_input;
    QPushButton *news_weather;
    QLabel *label;
    QLabel *label_3;
    QComboBox *point_after_change;
    QLabel *label_2;
    QPushButton *to_aimed_point;
    QLabel *label_4;
    QTextEdit *information;
    QLabel *label_5;
    QComboBox *command_list;
    QLabel *label_6;
    QLineEdit *ang;
    QPushButton *init_nav;
    QPushButton *command_do;
    QPushButton *grab_button;

    void setupUi(QDialog *User_ui)
    {
        if (User_ui->objectName().isEmpty())
            User_ui->setObjectName(QStringLiteral("User_ui"));
        User_ui->resize(702, 506);
        buttonBox = new QDialogButtonBox(User_ui);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 440, 621, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel);
        voice_input = new QPushButton(User_ui);
        voice_input->setObjectName(QStringLiteral("voice_input"));
        voice_input->setGeometry(QRect(100, 220, 141, 31));
        news_weather = new QPushButton(User_ui);
        news_weather->setObjectName(QStringLiteral("news_weather"));
        news_weather->setGeometry(QRect(270, 220, 91, 31));
        label = new QLabel(User_ui);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 270, 161, 31));
        label_3 = new QLabel(User_ui);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 0, 141, 111));
        label_3->setStyleSheet(QStringLiteral(""));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/resource/logo.jpg")));
        label_3->setScaledContents(true);
        point_after_change = new QComboBox(User_ui);
        point_after_change->setObjectName(QStringLiteral("point_after_change"));
        point_after_change->setGeometry(QRect(230, 270, 71, 31));
        label_2 = new QLabel(User_ui);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(490, 20, 201, 171));
        label_2->setStyleSheet(QStringLiteral(""));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/resource/ji.jpg")));
        label_2->setScaledContents(true);
        to_aimed_point = new QPushButton(User_ui);
        to_aimed_point->setObjectName(QStringLiteral("to_aimed_point"));
        to_aimed_point->setGeometry(QRect(310, 270, 91, 31));
        label_4 = new QLabel(User_ui);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(190, 40, 261, 101));
        information = new QTextEdit(User_ui);
        information->setObjectName(QStringLiteral("information"));
        information->setGeometry(QRect(100, 400, 411, 61));
        label_5 = new QLabel(User_ui);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(140, 320, 161, 31));
        command_list = new QComboBox(User_ui);
        command_list->setObjectName(QStringLiteral("command_list"));
        command_list->setGeometry(QRect(230, 320, 71, 31));
        label_6 = new QLabel(User_ui);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(380, 320, 161, 31));
        ang = new QLineEdit(User_ui);
        ang->setObjectName(QStringLiteral("ang"));
        ang->setGeometry(QRect(310, 320, 61, 31));
        init_nav = new QPushButton(User_ui);
        init_nav->setObjectName(QStringLiteral("init_nav"));
        init_nav->setGeometry(QRect(390, 220, 91, 31));
        command_do = new QPushButton(User_ui);
        command_do->setObjectName(QStringLiteral("command_do"));
        command_do->setGeometry(QRect(410, 320, 81, 31));
        grab_button = new QPushButton(User_ui);
        grab_button->setObjectName(QStringLiteral("grab_button"));
        grab_button->setGeometry(QRect(540, 270, 101, 41));

        retranslateUi(User_ui);
        QObject::connect(buttonBox, SIGNAL(accepted()), User_ui, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), User_ui, SLOT(reject()));

        QMetaObject::connectSlotsByName(User_ui);
    } // setupUi

    void retranslateUi(QDialog *User_ui)
    {
        User_ui->setWindowTitle(QApplication::translate("User_ui", "Dialog", Q_NULLPTR));
        voice_input->setText(QApplication::translate("User_ui", "\345\274\200\345\247\213\350\276\223\345\205\245\350\257\255\351\237\263\346\214\207\344\273\244", Q_NULLPTR));
        news_weather->setText(QApplication::translate("User_ui", "\344\273\212\346\227\245\345\244\251\346\260\224", Q_NULLPTR));
        label->setText(QApplication::translate("User_ui", "<html><head/><body><p><span style=\" font-size:14pt;\">\347\233\256\346\240\207\345\257\274\350\210\252\347\202\271\350\256\276\347\275\256</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QString());
        point_after_change->clear();
        point_after_change->insertItems(0, QStringList()
         << QApplication::translate("User_ui", "\345\207\272\345\217\221\347\202\271", Q_NULLPTR)
         << QApplication::translate("User_ui", "\347\273\210\347\202\271", Q_NULLPTR)
         << QApplication::translate("User_ui", "\346\241\214\345\255\220\344\275\215\347\275\256", Q_NULLPTR)
        );
        label_2->setText(QString());
        to_aimed_point->setText(QApplication::translate("User_ui", "\345\211\215\345\276\200\345\257\274\350\210\252\347\202\271", Q_NULLPTR));
        label_4->setText(QApplication::translate("User_ui", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\345\212\251\346\211\213\346\234\272\345\231\250\344\272\272\347\224\250\346\210\267\347\225\214\351\235\242</span></p></body></html>", Q_NULLPTR));
        label_5->setText(QApplication::translate("User_ui", "<html><head/><body><p><span style=\" font-size:14pt;\">\350\207\252\344\270\273\345\257\274\350\210\252</span></p></body></html>", Q_NULLPTR));
        command_list->clear();
        command_list->insertItems(0, QStringList()
         << QApplication::translate("User_ui", "\345\211\215\350\277\233", Q_NULLPTR)
         << QApplication::translate("User_ui", "\345\220\216\351\200\200", Q_NULLPTR)
         << QApplication::translate("User_ui", "\345\267\246\347\247\273", Q_NULLPTR)
         << QApplication::translate("User_ui", "\345\217\263\347\247\273", Q_NULLPTR)
         << QApplication::translate("User_ui", "\345\217\263\350\275\254", Q_NULLPTR)
         << QApplication::translate("User_ui", "\345\267\246\350\275\254", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("User_ui", "<html><head/><body><p>m/<span style=\" font-family:'arial'; font-size:14px; color:#333333; background-color:#ffffff;\">\302\260</span></p></body></html>", Q_NULLPTR));
        init_nav->setText(QApplication::translate("User_ui", "\345\210\235\345\247\213\345\214\226\345\257\274\350\210\252", Q_NULLPTR));
        command_do->setText(QApplication::translate("User_ui", "\346\211\247\350\241\214\346\214\207\344\273\244", Q_NULLPTR));
        grab_button->setText(QApplication::translate("User_ui", "\346\212\223\345\217\226\347\211\251\345\223\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class User_ui: public Ui_User_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_UI_H
