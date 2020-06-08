

gcc navigation.cpp nav_add_save_change_point.cpp -o nav_add_save_change_point -lstdc++ 
gcc navigation.cpp nav_self_control.cpp -o nav_self_control -lstdc++
gcc navigation.cpp nav_selfnav.cpp -o nav_selfnav -lstdc++ 
gcc navigation.cpp nav_to_aimed_point.cpp -o nav_to_aimed_point -lstdc++ 
gcc slam.cpp slam_test.cpp -o slam_test -lstdc++

echo "nav_add_save_change_point ———— 导航点添加、保存、修改名称测试"
echo "nav_self_control ———— 自主控制机器人测试，请先启动nav_selfnav"
echo "nav_selfnav ———— 导航启动测试"
echo "nav_to_aimed_point ———— 前往目标导航点测试"
echo "slam_tes ———— 建图保存地图测试"
