#include"slam.h"

int main(int argc,char** argv[]) {
    cout <<"slam建图和保存！"<<endl;
    cout << "请先开始建图！"<<endl;
    cout <<"1:启动建图，2：保存地图"<<endl;
    while(1){
        cout <<"请使用ctrl + c结束循环"<<endl;
        cout <<"请输入要使用的功能序号:";
        int sign = 0;
        cin >> sign;
        switch (sign) {
            case 1:{
                cout <<slamStart()<<endl;
                cout <<"开启机器人控制！！！"<<endl;
                system("gnome-terminal -x bash -c 'source ~/catkin_ws/devel/setup.bash;source ~/demo2_ws/devel/setup.bash;rosrun wpr_simulation keyboard_vel_ctrl'");
                break;
            }
            case 2:{
                cout << "保存地图！"<<endl;
                cout<<getSlam<<endl;
                break;
            }
            default:{
                cout <<"请输入正确的指令序号！"<<endl;
            }
        }
    }
    return 1;
}
