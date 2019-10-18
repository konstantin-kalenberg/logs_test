#include <ros/ros.h>
#include <ros/console.h>
#include <stdlib.h>
 
int main(int argc, char** argv) {
    if (ros::console::set_logger_level(ROSCONSOLE_DEFAULT_NAME, ros::console::levels::Debug))
    {
        ros::console::notifyLoggerLevelsChanged();
    }
    
    ros::init(argc,argv,"log_demo");
    ros::NodeHandle nh;
    ros::Rate loop_rate(0.5); // We create a Rate object of 2Hz
    
    while (ros::ok()) //Endless loop until Ctrl+c
    {
        ROS_DEBUG("This is a DEBUG message");
        ROS_INFO("This is a INFO message");
        ROS_WARN("This is a WARN message");
        ROS_ERROR("This is a ERROR message");
        ROS_FATAL("This is a FATAL message");
        
        loop_rate.sleep();
        ros::spinOnce();
    }
    
    return 0;
}
