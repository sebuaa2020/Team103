#include "ui_ros.h"
#include "ui_ui_ros.h"
#include "navigation.h"
#include "slam.h"
#include "string.h"
using namespace std;
UI_ros::UI_ros(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UI_ros)
{
    ui->setupUi(this);
    QPalette palette(this->palette());
    palette.setColor(QPalette::Background,Qt::white);
    this->setPalette(palette);
}
UI_ros::~UI_ros()
{
    delete ui;
}

void UI_ros::acceptedmain_admin(){
    this->show();
}

int sign_start = 0;
int sign_map = 1;
void UI_ros::on_beginmap_clicked()
{
    int ret = slamStart();
    if(!ret){
        ui->information->setText("Slam start successfully!");
        sign_start += 1;
    }
    else ui->information->setText("ERROR:指令执行出错");
}

void UI_ros::on_save_map_clicked()
{
    if(sign_start != sign_map ) {
        ui->information->setText("请先使用建图功能");
        return;
    }
    int ret = getSlam();
    if(!ret) {
        ui->information->setText("Map 文件保存成功！");
        sign_map+=1;
    }
    else    ui->information->setText("Map 文件缺失！");
}
int sign_add = 0,sign_save = 1;
void UI_ros::on_adpoint_button_clicked()
{
    QString infor = QString::fromStdString(addpoint());
    sign_add +=1;
    ui->information->setText(infor);
}

void UI_ros::on_save_waypoints_clicked()
{
    if(sign_save == sign_add) sign_save+=1;
    else   {
        ui->information->setText("请先添加导航点");
        return;
    }
    QString infor = QString::fromStdString(save_addpoint());
    ui->information->setText(infor);
}
int one = 0,two = 0;

void UI_ros::on_change_name_button_clicked()
{
    string name[3] = {"start","end","table"};
    QString infor = QString::fromStdString(changenameto(one+1,name[two]));
    ui->information->setText(infor);
}

void UI_ros::on_point_before_change_activated(int index)
{
    one = index;
}

void UI_ros::on_point_after_change_activated(int index)
{
    two = index;
}

