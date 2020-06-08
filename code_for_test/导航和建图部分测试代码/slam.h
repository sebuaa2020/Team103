#ifndef _SLAMM_H
#define _SLAMM_H

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
//开始slam建图
int slamStart();
//存储slam地图
int getSlam();

#endif
