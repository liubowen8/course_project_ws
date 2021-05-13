// Generated by gencpp from file manipulation_msgs/ClusterBoundingBox.msg
// DO NOT EDIT!


#ifndef MANIPULATION_MSGS_MESSAGE_CLUSTERBOUNDINGBOX_H
#define MANIPULATION_MSGS_MESSAGE_CLUSTERBOUNDINGBOX_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/Vector3.h>

namespace manipulation_msgs
{
template <class ContainerAllocator>
struct ClusterBoundingBox_
{
  typedef ClusterBoundingBox_<ContainerAllocator> Type;

  ClusterBoundingBox_()
    : pose_stamped()
    , dimensions()  {
    }
  ClusterBoundingBox_(const ContainerAllocator& _alloc)
    : pose_stamped(_alloc)
    , dimensions(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _pose_stamped_type;
  _pose_stamped_type pose_stamped;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _dimensions_type;
  _dimensions_type dimensions;





  typedef boost::shared_ptr< ::manipulation_msgs::ClusterBoundingBox_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::manipulation_msgs::ClusterBoundingBox_<ContainerAllocator> const> ConstPtr;

}; // struct ClusterBoundingBox_

typedef ::manipulation_msgs::ClusterBoundingBox_<std::allocator<void> > ClusterBoundingBox;

typedef boost::shared_ptr< ::manipulation_msgs::ClusterBoundingBox > ClusterBoundingBoxPtr;
typedef boost::shared_ptr< ::manipulation_msgs::ClusterBoundingBox const> ClusterBoundingBoxConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::manipulation_msgs::ClusterBoundingBox_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::manipulation_msgs::ClusterBoundingBox_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::manipulation_msgs::ClusterBoundingBox_<ContainerAllocator1> & lhs, const ::manipulation_msgs::ClusterBoundingBox_<ContainerAllocator2> & rhs)
{
  return lhs.pose_stamped == rhs.pose_stamped &&
    lhs.dimensions == rhs.dimensions;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::manipulation_msgs::ClusterBoundingBox_<ContainerAllocator1> & lhs, const ::manipulation_msgs::ClusterBoundingBox_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace manipulation_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::manipulation_msgs::ClusterBoundingBox_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::manipulation_msgs::ClusterBoundingBox_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::manipulation_msgs::ClusterBoundingBox_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::manipulation_msgs::ClusterBoundingBox_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::manipulation_msgs::ClusterBoundingBox_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::manipulation_msgs::ClusterBoundingBox_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::manipulation_msgs::ClusterBoundingBox_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9bf2b7a44ad666dc3a6a2bbc21782dad";
  }

  static const char* value(const ::manipulation_msgs::ClusterBoundingBox_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9bf2b7a44ad666dcULL;
  static const uint64_t static_value2 = 0x3a6a2bbc21782dadULL;
};

template<class ContainerAllocator>
struct DataType< ::manipulation_msgs::ClusterBoundingBox_<ContainerAllocator> >
{
  static const char* value()
  {
    return "manipulation_msgs/ClusterBoundingBox";
  }

  static const char* value(const ::manipulation_msgs::ClusterBoundingBox_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::manipulation_msgs::ClusterBoundingBox_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# contains a bounding box, which is essentially a box somewhere in space\n"
"# used here ususally for the outlier-invariant bounding box of a cluster of points\n"
"\n"
"#the pose of the box frame\n"
"geometry_msgs/PoseStamped pose_stamped\n"
"\n"
"#the dimensions of the box\n"
"geometry_msgs/Vector3 dimensions\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseStamped\n"
"# A Pose with reference coordinate frame and timestamp\n"
"Header header\n"
"Pose pose\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::manipulation_msgs::ClusterBoundingBox_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::manipulation_msgs::ClusterBoundingBox_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pose_stamped);
      stream.next(m.dimensions);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ClusterBoundingBox_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::manipulation_msgs::ClusterBoundingBox_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::manipulation_msgs::ClusterBoundingBox_<ContainerAllocator>& v)
  {
    s << indent << "pose_stamped: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.pose_stamped);
    s << indent << "dimensions: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.dimensions);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MANIPULATION_MSGS_MESSAGE_CLUSTERBOUNDINGBOX_H
