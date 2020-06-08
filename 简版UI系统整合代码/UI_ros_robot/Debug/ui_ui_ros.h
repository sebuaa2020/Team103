/********************************************************************************
** Form generated from reading UI file 'ui_ros.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_ROS_H
#define UI_UI_ROS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_UI_ros
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *change_name_button;
    QComboBox *point_before_change;
    QPushButton *beginmap;
    QComboBox *point_after_change;
    QPushButton *save_map;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *adpoint_button;
    QTextEdit *information;
    QPushButton *save_waypoints;

    void setupUi(QDialog *UI_ros)
    {
        if (UI_ros->objectName().isEmpty())
            UI_ros->setObjectName(QStringLiteral("UI_ros"));
        UI_ros->resize(702, 506);
        UI_ros->setSizeGripEnabled(false);
        UI_ros->setModal(false);
        buttonBox = new QDialogButtonBox(UI_ros);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 440, 621, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);
        change_name_button = new QPushButton(UI_ros);
        change_name_button->setObjectName(QStringLiteral("change_name_button"));
        change_name_button->setGeometry(QRect(430, 300, 141, 31));
        point_before_change = new QComboBox(UI_ros);
        point_before_change->setObjectName(QStringLiteral("point_before_change"));
        point_before_change->setGeometry(QRect(170, 290, 81, 41));
        beginmap = new QPushButton(UI_ros);
        beginmap->setObjectName(QStringLiteral("beginmap"));
        beginmap->setGeometry(QRect(170, 190, 91, 31));
        point_after_change = new QComboBox(UI_ros);
        point_after_change->setObjectName(QStringLiteral("point_after_change"));
        point_after_change->setGeometry(QRect(340, 290, 71, 41));
        save_map = new QPushButton(UI_ros);
        save_map->setObjectName(QStringLiteral("save_map"));
        save_map->setGeometry(QRect(330, 190, 91, 31));
        label = new QLabel(UI_ros);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 300, 67, 17));
        label_2 = new QLabel(UI_ros);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(500, 30, 201, 171));
        label_2->setStyleSheet(QStringLiteral(""));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/resource/ji.jpg")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(UI_ros);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 10, 141, 111));
        label_3->setStyleSheet(QStringLiteral(""));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/resource/logo.jpg")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(UI_ros);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(200, 50, 261, 101));
        adpoint_button = new QPushButton(UI_ros);
        adpoint_button->setObjectName(QStringLiteral("adpoint_button"));
        adpoint_button->setGeometry(QRect(170, 240, 141, 31));
        information = new QTextEdit(UI_ros);
        information->setObjectName(QStringLiteral("information"));
        information->setGeometry(QRect(110, 390, 381, 81));
        save_waypoints = new QPushButton(UI_ros);
        save_waypoints->setObjectName(QStringLiteral("save_waypoints"));
        save_waypoints->setGeometry(QRect(330, 240, 101, 31));

        retranslateUi(UI_ros);
        QObject::connect(buttonBox, SIGNAL(accepted()), UI_ros, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), UI_ros, SLOT(reject()));

        QMetaObject::connectSlotsByName(UI_ros);
    } // setupUi

    void retranslateUi(QDialog *UI_ros)
    {
        UI_ros->setWindowTitle(QApplication::translate("UI_ros", "Dialog", Q_NULLPTR));
        change_name_button->setText(QApplication::translate("UI_ros", "\347\241\256\350\256\244\344\277\256\346\224\271\345\257\274\350\210\252\347\202\271\345\220\215\347\247\260", Q_NULLPTR));
        point_before_change->clear();
        point_before_change->insertItems(0, QStringList()
         << QApplication::translate("UI_ros", "\345\257\274\350\210\252\347\202\2711", Q_NULLPTR)
         << QApplication::translate("UI_ros", "\345\257\274\350\210\252\347\202\2712", Q_NULLPTR)
         << QApplication::translate("UI_ros", "\345\257\274\350\210\252\347\202\2713", Q_NULLPTR)
        );
        beginmap->setText(QApplication::translate("UI_ros", "\345\274\200\345\247\213\345\273\272\345\233\276", Q_NULLPTR));
        point_after_change->clear();
        point_after_change->insertItems(0, QStringList()
         << QApplication::translate("UI_ros", "\345\207\272\345\217\221\347\202\271", Q_NULLPTR)
         << QApplication::translate("UI_ros", "\347\273\210\347\202\271", Q_NULLPTR)
         << QApplication::translate("UI_ros", "\346\241\214\345\255\220\344\275\215\347\275\256", Q_NULLPTR)
        );
        save_map->setText(QApplication::translate("UI_ros", "\344\277\235\345\255\230\345\234\260\345\233\276", Q_NULLPTR));
        label->setText(QApplication::translate("UI_ros", "\344\277\256\346\224\271\344\270\272", Q_NULLPTR));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QApplication::translate("UI_ros", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\345\212\251\346\211\213\346\234\272\345\231\250\344\272\272\347\256\241\347\220\206\345\221\230\347\263\273\347\273\237</span></p></body></html>", Q_NULLPTR));
        adpoint_button->setText(QApplication::translate("UI_ros", "\345\234\260\345\233\276\346\267\273\345\212\240\351\273\230\350\256\244\345\257\274\350\210\252\347\202\271", Q_NULLPTR));
        save_waypoints->setText(QApplication::translate("UI_ros", "\344\277\235\345\255\230\345\257\274\350\210\252\347\202\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UI_ros: public Ui_UI_ros {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_ROS_H
