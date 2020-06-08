#include"navigation.h"

int main(int argc,char** argv[]) {
    cout <<"请先启动navigation服务!"<<endl;
    cout << "指令格式为 no ang.no为指令标记，ang为米或者度数"<<endl;
    cout <<"1:前进，2：后退，3：右转，4：左转，5：顺时针旋转，6：逆时针旋转"<<endl;
    while(1){
        cout <<"请使用ctrl + c结束循环"<<endl;
        cout <<"请输入指令："<<endl;
        int sign;float ang;
        cin>>sign>>ang;
        cout<<selftravel(sign,ang)<<endl;
    }
    return 1;
}
