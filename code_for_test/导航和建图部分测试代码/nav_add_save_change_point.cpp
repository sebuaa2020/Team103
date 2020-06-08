#include"navigation.h"

int main(int argc,char** argv[]) {
    cout <<"建立导航点、保存导航点和修改导航点名称！"<<endl;
    cout << "请按照建立导航点、保存导航点和修改导航点名称的顺序执行！"<<endl;
    cout <<"1:建立导航点，2：保存导航点，3：修改功能点名称"<<endl;
    while(1){
        cout <<"请使用ctrl + c结束循环"<<endl;
        cout <<"请输入要使用的功能序号:";
        int sign = 0;
        cin >> sign;
        switch (sign) {
            case 1:{
                cout <<addpoint()<<endl;
                break;
            }
            case 2:{
                cout << save_addpoint()<<endl;
                break;
            }
            case 3:{
                system("killall rviz");
                cout << "请输入要修改的导航点序号(如1,2,3等)：";
                int no;
                cin >> no;
                cout << "请输入修改后的导航点名称：";
                string name;
                cin >> name;
                cout<<changenameto(no,name)<<endl;
                break;
            }
            default:{
                cout <<"请输入正确的指令序号！"<<endl;
            }
        }
    }
    return 1;
}
