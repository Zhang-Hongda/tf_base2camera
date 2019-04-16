#include <ros/ros.h>
#include <tf/transform_broadcaster.h>

int main(int argc, char** argv){
  ros::init(argc, argv, "camera_to_base");
  ros::NodeHandle node("~");

  tf::TransformBroadcaster br;
  tf::Transform transform;

  ros::Rate rate(10.0);
  while (node.ok()){
    std::vector<double> position;
    std::vector<double> orientation;
    node.getParam("position",position);
    node.getParam("orientation",orientation);
    transform.setOrigin( tf::Vector3( position[0],position[1],position[2]));
    transform.setRotation( tf::Quaternion(orientation[0],orientation[1],orientation[2],orientation[3]) );
    br.sendTransform(tf::StampedTransform(transform, ros::Time::now(), "base_link", "kinect2_link"));
    rate.sleep();
  }
  return 0;
};
