#include "user_ui.h"
#include "ui_user_ui.h"
#include "navigation.h"
#include "voice_cmd.h"
User_ui::User_ui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::User_ui)
{
    ui->setupUi(this);
}

User_ui::~User_ui()
{
    delete ui;
}

void User_ui::acceptedmain_usr(){
    this->show();
}

bool sign_nav = false;
void User_ui::on_init_nav_clicked()
{
    QString infor = QString::fromStdString(start_aimed_navigation());
    sign_nav = true;
    ui->information->setText(infor);
}
void User_ui::on_to_aimed_point_clicked()
{
    if(!sign_nav){
        ui->information->setText("请先初始化导航!");
        return;
    }
    string name[3] = {"start","end","table"};
    int no = ui->point_after_change->currentIndex();
    QString infor = QString::fromStdString(to_aimed_point(name[no]));
    ui->information->setText(infor);
}

void User_ui::on_command_do_clicked()
{
    if(!sign_nav){
        ui->information->setText("请先初始化导航!");
        return;
    }
    int no = ui->command_list->currentIndex();
    int ang = ui->ang->text().toFloat();
    QString infor = QString::fromStdString(selftravel(no+1,ang));
    ui->information->setText(infor);
}

void User_ui::on_news_weather_clicked()
{
    QString weather = QString::fromStdString(broadCastWeather());
    ui->information->setText(weather);
}

void User_ui::on_voice_input_clicked()
{
    QString cmd = QString::fromStdString(getVoiceInstr());
    if(cmd=="CMD_FORWARD"){
        selftravel(1,0.3);
    } else if (cmd == "CMD_BACKWARD"){
        selftravel(2,0.3);
    }else if (cmd == "CMD_RIGHT"){
        selftravel(5,90);
    }else if (cmd == "CMD_LEFT"){
        selftravel(6,90);
    }
    ui->information->setText(cmd);
}

void User_ui::on_grab_button_clicked()
{
    system("bash -c 'source ~/catkin_ws/devel/setup.bash;/home/user/catkin_ws/src/move 0.0 0.0 0.0 0.0'");
    ui->information->setText("模拟机械臂移动");
}
