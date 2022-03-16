#include <ros/ros.h>
#include <std_msgs/Bool.h>
#include <std_msgs/Byte.h>
#include <std_msgs/Char.h>
#include <std_msgs/Duration.h>
#include <std_msgs/Time.h>
#include <std_msgs/Int16.h>
#include <std_msgs/Int32.h>
#include <std_msgs/Int64.h>
#include <std_msgs/Int8.h>
#include <std_msgs/Header.h>
#include <std_msgs/UInt16.h>
#include <std_msgs/UInt32.h>
#include <std_msgs/UInt64.h>
#include <std_msgs/UInt8.h>
#include <std_msgs/Float32.h>
#include <std_msgs/Float64.h>

void chatter5(const std_msgs::Int32::ConstPtr& msg)
{
  ROS_INFO("==================");
  ROS_INFO("insert integer1 : [%i]", msg->data);
}

void chatter6(const std_msgs::Int32::ConstPtr& msg)
{
  
  ROS_INFO("insert integer2 : [%i]", msg->data);
}

void chatter7(const std_msgs::Int32::ConstPtr& msg)
{
  ROS_INFO("==================");
  ROS_INFO("20 + 10 = [%i]", msg->data);
}

void chatter8(const std_msgs::Int32::ConstPtr& msg)
{
  ROS_INFO("20 - 10 = [%i]", msg->data);
}

void chatter9(const std_msgs::Int32::ConstPtr& msg)
{
  ROS_INFO("20 * 10 = [%i]", msg->data);
}


void chatter11(const std_msgs::UInt16::ConstPtr& msg)
{
  ROS_INFO("20 / 10 = [%i]", msg->data);
}



int main(int argc, char **argv)
{
  ros::init(argc, argv, "std_msgs_listener");

  ros::NodeHandle n;
 
  ros::Subscriber sub5 = n.subscribe("/int1", 1000, chatter5);
  ros::Subscriber sub6 = n.subscribe("/int2", 1000, chatter6);
  ros::Subscriber sub7 = n.subscribe("/int32", 1000, chatter7);
  ros::Subscriber sub8 = n.subscribe("/int64", 1000, chatter8);
  ros::Subscriber sub9 = n.subscribe("/int8", 1000, chatter9);
  
  ros::Subscriber sub11 = n.subscribe("/uint16", 1000, chatter11);
  

  ros::spin();

  return 0;
}
