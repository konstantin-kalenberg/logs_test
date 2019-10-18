#include <ros/ros.h>
#include <ros/console.h>
#include <stdlib.h>
 
int main(int argc, char** argv) {
    
    ros::init(argc,argv,"log_demo");
    ros::NodeHandle nh;
    ros::Rate loop_rate(0.5); // We create a Rate object of 2Hz
    
    ros::Time start_time = ros::Time::now();
    while (ros::ok()) //Endless loop until Ctrl+c
    {

        // First part to show functions of rqt to change log levels
        /**
        ROS_DEBUG("This is a DEBUG message");
        ROS_INFO("This is a INFO message");
        ROS_WARN("This is a WARN message");
        ROS_ERROR("This is a ERROR message");
        ROS_FATAL("This is a FATAL message");
        **/

        // Second part, show different styles, be aware that DEBUG level is not shown by default!
        
        /**
        double example_double = 0.3214;
        ROS_INFO("This is printf style. Number is: %0.3f radians", example_double);
        ROS_INFO_STREAM("This is stream style. Number is: "<< example_double << " radians");

        double throttle_time = 10.0;
        ROS_WARN_THROTTLE(throttle_time, "This is THROTTLED printf style and only printed every %0.1f seconds", throttle_time);
        ROS_WARN_STREAM_THROTTLE(throttle_time, "This is THROTTLED printf style and only printed every "<< throttle_time << " seconds");

        ros::Time current_time = ros::Time::now();
        double passed_time = (current_time - start_time).toSec();
        if (passed_time > 20)
        {
            ROS_ERROR_ONCE("This is ONCE printf style and only printed after once %0.1f seconds", passed_time);
            ROS_ERROR_STREAM_ONCE("This is ONCE printf style and only printed once after "<< passed_time << " seconds");
        }
        **/

        loop_rate.sleep();
        ros::spinOnce();
    }
    
    return 0;
}
