#include <ros/ros.h> 
#include <sound_play/SoundRequest.h>
#include <string>
#include <python2.7/Python.h>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {     
    ros::init(argc, argv, "speak_node"); 
    ROS_INFO_STREAM("start program");
    ros::NodeHandle n;    
    ros::Publisher tts_pub = n.advertise<sound_play::SoundRequest>("/robotsound", 20);    
    ros::Rate r(0.2);     
    while(n.ok()) {         
        sound_play::SoundRequest sp;         
        sp.sound = sound_play::SoundRequest::SAY;         
        sp.command = sound_play::SoundRequest::PLAY_ONCE; 
        sp.volume = 1.0;  
        Py_Initialize();
        PyRun_SimpleString("import sys");
        PyRun_SimpleString("sys.path.append('./')");
        PyObject * pModule = NULL;
        PyObject * pFunc = NULL;

        pModule = PyImport_ImportModule("getWeather");
        if (pModule == NULL)
        {
            ROS_INFO_STREAM("python module not found");
        }

        pFunc = PyObject_GetAttrString(pModule, "getweather");
        PyObject* pRet = PyObject_CallObject(pFunc, NULL);
        char *temp1;
        char *temp2;
        PyArg_ParseTuple(pRet, "ss", &temp1, &temp2);
        Py_Finalize();
        string ltemp = temp1;
        string htemp = temp2;
        ROS_INFO_STREAM(ltemp);

        sp.arg = "low temperature"; 
        tts_pub.publish(sp);          
        ros::spinOnce();        
        r.sleep();    
    }     
    
    return 0; 
} 