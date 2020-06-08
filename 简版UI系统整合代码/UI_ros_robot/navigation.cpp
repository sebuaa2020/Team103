#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include<sys/types.h>
#include<signal.h>
#include<cstring>
#include<sstream>
#include<unistd.h>
#define map_png "/home/user/catkin_ws/src/wpb_home/wpb_home_tutorials/maps/map.pgm"
#define map_yaml "/home/user/catkin_ws/src/wpb_home/wpb_home_tutorials/maps/map.yaml"
#define waypoint "/home/user/waypoints.xml"
using namespace std;
//检查map文件
string checkmap();
//检查map地图并开始navigation导航
string selfnavigation();
//自由控制机器人，sign:控制类型(forward:1,back:2,left:3,right:4,顺时针旋转:5,逆时针旋转:6) ang:距离或角度
string selftravel(int sign,float ang);
//添加导航点
string addpoint();
//保存导航点
string save_addpoint();
//修改导航点名称 no:第几个 name:修改成name
string changenameto(int no,string name);
//启动to_aimed_point之前必须启动该函数
string start_aimed_navigation();
//启动to_aimed_point之前必须启动该函数
string start_aimed_navigation();
//前往已标记的导航点，name为导航点名称
string to_aimed_point(string name);


//检查map文件
string checkmap(){
    fstream _file;
    _file.open(map_png,ios::in);
    if(!_file)
    {
        cout<< map_png << "没有被创建!" << endl;
        return "地图文件map.pgm没有被创建!";
    }
    cout<< "map.pgm exist!" << endl;
    ifstream f(map_yaml);
    if(!f.good())
    {
         cout<< map_yaml << "没有被创建!" << endl;
         return "地图文件map.yaml没有被创建!";
    }
    cout<< "map.yaml exist!" << endl;
    return "";
}

//检查map地图并开始navigation导航
string selfnavigation(){    
    string ret = checkmap();
	if(ret.length() != 0) return ret;
    int ret_int;
    ret_int = system("gnome-terminal -x bash -c 'source ~/catkin_ws/devel/setup.bash;roslaunch wpb_home_tutorials nav.launch'");
    if(ret_int != -1 || ret_int != 127) return  "navigation start success!"; else return "命令执行出错！";
}

//自由控制机器人，sign:控制类型(forward:1,back:2,left:3,right:4,顺时针旋转:5,逆时针旋转:6) ang:距离或角度
string selftravel(int sign,float ang){
	if(sign<1 || sign >6) {
		cout<<"There is no such command!"<<endl;
		return "There is no such command!";
	}    
	string s = "0";
    s[0]+=sign;
    ostringstream oss;
    oss << ang;
    s = "gnome-terminal -x bash -c 'source ~/catkin_ws/devel/setup.bash;rosrun my_nav_pavkage simple_goal " + s + " " + oss.str()+"\'";
    char * strc = new char[strlen(s.c_str())+1];
    strcpy(strc, s.c_str());
    int ret_int = system(strc);
    if (ret_int != -1 || ret_int != 127) return  "travel start success!"; else return "命令执行出错！";
}

//添加导航点
string addpoint(){
	string ret = checkmap();
	if(ret.length() != 0) return ret;
    system("rm ~/waypoints.xml");
    int ret_int;
    ret_int = system("gnome-terminal -x bash -c 'source ~/catkin_ws/devel/setup.bash;roslaunch waterplus_map_tools add_waypoint.launch'");
    if (ret_int != -1 || ret_int != 127) return  "addpoint server start success!"; else return "命令执行出错！";
}

//保存导航点
string save_addpoint(){
    int ret_int = system("gnome-terminal -x bash -c 'source ~/catkin_ws/devel/setup.bash;rosrun waterplus_map_tools wp_saver'");
    if (ret_int != -1 || ret_int != 127) return  "savepoint server start success!"; else return "命令执行出错！";
}

//修改导航点名称 no:第几个 name:修改成name
string changenameto(int no,string name){
	string s = "0";
    s[0]+=no;
	s = "sed -i \"s/<Name>"+s+"</<Name>"+name+"</g\" ~/waypoints.xml";
	char * strc = new char[strlen(s.c_str())+1];
    strcpy(strc, s.c_str());
    int ret_int = system(strc);
    if (ret_int != -1 || ret_int != 127) return  "changename success!"; else return "命令执行出错！";
}

//启动to_aimed_point之前必须启动该函数
string start_aimed_navigation(){
    ifstream f(waypoint);
    if(!f.good())
    {
         cout<< waypoint << "没有被创建!" << endl;
         return "目标点文件没有被创建";
    } else{
		cout << waypoint << " exist!"<<endl;	
	}
    int ret_int = system("gnome-terminal -x bash -c 'source ~/catkin_ws/devel/setup.bash;roslaunch waterplus_map_tools wpb_home_nav_test.launch'");
    if (ret_int != -1 || ret_int != 127) return  "aimed_nav server start success!"; else return "命令执行出错!";
}

//前往已标记的导航点，name为导航点名称
string to_aimed_point(string name){
    string s = "bash -c 'source ~/catkin_ws/devel/setup.bash;rosrun waterplus_map_tools to_aimed_point "+name+"\'";
	char * strc = new char[strlen(s.c_str())+1];
    strcpy(strc, s.c_str());
	int ret_int = system(strc);
    if (ret_int != -1 || ret_int != 127) return  "to_point server start success!"; else return "命令执行出错！";
}

//for test the function
//int main(){
//    addpoint();
//	save_addpoint();
//	changenameto(1,"start");
//	changenameto(2,"room");
//	changenameto(3,"hall");
//	changenameto(4,"cool");
//	selfnavigation();
//	start_aimed_navigation();
//	to_aimed_point("nation");
//	//这些是并行的，应该sleep一下
//	to_aimed_point("room");
//	to_aimed_point("cool");
//	to_aimed_point("hall");
//	selftravel(7,90);
//	return 1;
//}

