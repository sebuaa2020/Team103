
#include <QApplication>
#include"ui_ros.h"
#include"locate.h"
#include"user_ui.h"
#include"navigation.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UI_ros admin_ui;
    User_ui user_ui;
    locate locate_ui;
    locate_ui.setWindowTitle("助手机器人登陆界面");
    user_ui.setWindowTitle("助手机器人用户界面");
    admin_ui.setWindowTitle("助手机器人管理员系统");
    locate_ui.show();
    QObject::connect(&locate_ui,SIGNAL(emitsignal_usr()),&user_ui,SLOT(acceptedmain_usr()));
    QObject::connect(&locate_ui,SIGNAL(emitsignal_admin()),&admin_ui,SLOT(acceptedmain_admin()));
    return a.exec();
}
