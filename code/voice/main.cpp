#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <cstring>
#include <fstream>

using namespace std;

void broadCastWeather();
void broadCastAny(string word);
string getVoiceInstr();

int main()
{
    getVoiceInstr();
    return 0;
}

void broadCastWeather(){
    cout<<"Start broadcasting weather..."<<endl;
    int err = system("gnome-terminal -x bash -c 'source ~/catkin_ws/devel/setup.bash; roslaunch my_speak_package speak.launch'");
    if (err == -1) {
        cout<<"roslaunch error"<<endl;
    }
}

void broadCastAny(string word){
    cout<<"Start speaking..."<<endl;
    string lineData = "<param name = \"speak_word\" type = \"string\" value = \""+ word + "\" />";
    ifstream in;
	in.open("/home/daohaotaitaoyan/catkin_ws/src/my_speak_package/launch/speakany.launch");
    string strFileData = "";
	int line = 1;
	char tmpLineData[1024] = {0};
	while(in.getline(tmpLineData, sizeof(tmpLineData)))
	{
		if (line == 7)
		{
			strFileData += lineData;
			strFileData += "\n";
		}
		else
		{
			strFileData += tmpLineData;
			strFileData += "\n";
		}
		line++;
	}
	in.close();

	ofstream out;
	out.open("/home/daohaotaitaoyan/catkin_ws/src/my_speak_package/launch/speakany.launch");
	out.flush();
	out<<strFileData;
	out.close();


    int err = system("gnome-terminal -x bash -c 'source ~/catkin_ws/devel/setup.bash; roslaunch my_speak_package speakany.launch'");
    if (err == -1) {
        cout<<"roslaunch error"<<endl;
    }

}

string getVoiceInstr(){
    int err = system("gnome-terminal -x bash -c 'source ~/catkin_ws/devel/setup.bash; roslaunch xfyun_waterplus voice_recon.launch'");
    if (err == -1) {
        cout<<"rolaunch error"<<endl;
    }
    cout<<"wait for the robot answer then continue"<<endl;
    //system("bash -c 'pause'");
    ifstream keyword;
    keyword.open("/home/daohaotaitaoyan/catkin_ws/keyword.txt");
    char linedata[1024];
    keyword.getline(linedata, sizeof(linedata));
    string result = linedata;
    cout<<result<<endl;
    return result;

}
