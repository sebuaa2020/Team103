#include "locate.h"
#include "ui_locate.h"
#include "string.h"
#include "ui_ros.h"
#include "user_ui.h"
#include <QMessageBox>
using namespace std;

locate::locate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::locate)
{
    ui->setupUi(this);
    ui->password_text->setEchoMode(QLineEdit::Password);

}

locate::~locate()
{
    delete ui;
}


void locate::on_locate_2_clicked()
{
    QString user_name = ui->user_text->text();
    QString password = ui->password_text->text();
    if(user_name == "user" && password == "000000") {
        this->hide();
        emit emitsignal_usr();
    }else if(user_name == "admin" && password=="666666"){
        this->hide();
        emit emitsignal_admin();
    } else{
        QMessageBox::warning(this, tr("警告！"),tr("用户名或密码错误！"),QMessageBox::Yes);
    }
}
