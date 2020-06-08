
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fstream>
#include <iostream>
#include<sys/types.h>
#include<signal.h>
#include<sstream>
#include<string.h>

#define map_png "/home/user/catkin_ws/src/wpb_home/wpb_home_tutorials/maps/map.pgm"
#define map_yaml "/home/user/catkin_ws/src/wpb_home/wpb_home_tutorials/maps/map.yaml"
using namespace std;
int slamStart () {
    int ret = 0;
    ret = system("gnome-terminal -x bash -c 'source ~/catkin_ws/devel/setup.bash;roslaunch wpb_home_tutorials hector_mapping.launch'");
    return ret;
}

int getSlam() {
    system("bash -c 'source ~/catkin_ws/devel/setup.bash;rosrun map_server map_saver -f map'");
    system("cp ./map.pgm ~/catkin_ws/src/wpb_home/wpb_home_tutorials/maps/");
    system("cp ./map.yaml ~/catkin_ws/src/wpb_home/wpb_home_tutorials/maps/");
    fstream _file;
    _file.open(map_png,ios::in);
    if(!_file)
    {
        cout<< map_png << "没有被创建!" << endl;
        return -3;
    }
    cout<< "map.pgm exist!" << endl;
    ifstream f(map_yaml);
    if(!f.good())
    {
         cout<< map_yaml << "没有被创建!" << endl;
         return -2;
    }
    return 0;
}
//int main(){
	//slamStart();
//	getSlam();
//}


