#include"navigation.h"

int main(int argc,char** argv[]) {
    cout <<"启动导航和前往目标点！"<<endl;
    cout << "请先启动目标导航测试！"<<endl;
    cout <<"1:启动目标导航，2：前往目标点"<<endl;
    while(1){
        cout <<"请使用ctrl + c结束循环"<<endl;
        cout <<"请输入要使用的功能序号:";
        int sign = 0;
        cin >> sign;
        switch (sign) {
            case 1:{
                cout <<start_aimed_navigation()<<endl;
                break;
            }
            case 2:{
                cout << "请输入要前往的导航点名称：";
                string name;
                cin >> name;
                cout<<to_aimed_point(name)<<endl;
                break;
            }
            default:{
                cout <<"请输入正确的指令序号！"<<endl;
            }
        }
    }
    return 1;
}