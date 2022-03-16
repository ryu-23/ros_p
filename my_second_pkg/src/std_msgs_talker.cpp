#include <ros/ros.h>
#include <ros/xmlrpc_manager.h>
#include <std_msgs/Bool.h>
#include <std_msgs/Byte.h>
#include <std_msgs/Char.h>
#include <std_msgs/Duration.h>
#include <std_msgs/Header.h>
#include <std_msgs/Int16.h>
#include <std_msgs/Int32.h>
#include <std_msgs/Int64.h>
#include <std_msgs/Int8.h>
#include <std_msgs/Time.h>
#include <std_msgs/UInt16.h>
#include <std_msgs/UInt32.h>
#include <std_msgs/UInt64.h>
#include <std_msgs/UInt8.h>
#include <std_msgs/Float32.h>
#include <std_msgs/Float64.h>

#include <sstream>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "std_msgs_talker");
  ros::NodeHandle n;

  ros::Publisher chatter5 = n.advertise<std_msgs::Int32>("int1", 1000);
  ros::Publisher chatter6 = n.advertise<std_msgs::Int32>("int2", 1000);
  ros::Publisher chatter7 = n.advertise<std_msgs::Int32>("int32", 1000);
  ros::Publisher chatter8 = n.advertise<std_msgs::Int32>("int64", 1000);
  ros::Publisher chatter9 = n.advertise<std_msgs::Int32>("int8", 1000);
  ros::Publisher chatter11 = n.advertise<std_msgs::UInt16>("uint16", 1000);
  
  ros::Rate loop_rate(1);
  std::cout<<ros::XMLRPCManager::instance()->getServerURI()<<std::endl;

  int count = 0;
  while (ros::ok())
  {
	std_msgs::Int32 msg5;
    msg5.data = 20;
    chatter5.publish(msg5);

	  
	std_msgs::Int32 msg6;
    msg6.data = 10;
    chatter6.publish(msg6);


    std_msgs::Int32 msg7;
    msg7.data = 30;
    chatter7.publish(msg7);

    std_msgs::Int32 msg8;
    msg8.data = 10;
    chatter8.publish(msg8);

    std_msgs::Int32 msg9;
    msg9.data = 200;
    chatter9.publish(msg9);


    std_msgs::UInt16 msg11;
    msg11.data = 2;
    chatter11.publish(msg11);

  
    ros::spinOnce();

    loop_rate.sleep();
    ++count;
  }


  return 0;
}
