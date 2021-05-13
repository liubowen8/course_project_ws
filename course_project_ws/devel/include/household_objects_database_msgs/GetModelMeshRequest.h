// Generated by gencpp from file household_objects_database_msgs/GetModelMeshRequest.msg
// DO NOT EDIT!


#ifndef HOUSEHOLD_OBJECTS_DATABASE_MSGS_MESSAGE_GETMODELMESHREQUEST_H
#define HOUSEHOLD_OBJECTS_DATABASE_MSGS_MESSAGE_GETMODELMESHREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace household_objects_database_msgs
{
template <class ContainerAllocator>
struct GetModelMeshRequest_
{
  typedef GetModelMeshRequest_<ContainerAllocator> Type;

  GetModelMeshRequest_()
    : model_id(0)  {
    }
  GetModelMeshRequest_(const ContainerAllocator& _alloc)
    : model_id(0)  {
  (void)_alloc;
    }



   typedef int32_t _model_id_type;
  _model_id_type model_id;





  typedef boost::shared_ptr< ::household_objects_database_msgs::GetModelMeshRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::household_objects_database_msgs::GetModelMeshRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetModelMeshRequest_

typedef ::household_objects_database_msgs::GetModelMeshRequest_<std::allocator<void> > GetModelMeshRequest;

typedef boost::shared_ptr< ::household_objects_database_msgs::GetModelMeshRequest > GetModelMeshRequestPtr;
typedef boost::shared_ptr< ::household_objects_database_msgs::GetModelMeshRequest const> GetModelMeshRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::household_objects_database_msgs::GetModelMeshRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::household_objects_database_msgs::GetModelMeshRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::household_objects_database_msgs::GetModelMeshRequest_<ContainerAllocator1> & lhs, const ::household_objects_database_msgs::GetModelMeshRequest_<ContainerAllocator2> & rhs)
{
  return lhs.model_id == rhs.model_id;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::household_objects_database_msgs::GetModelMeshRequest_<ContainerAllocator1> & lhs, const ::household_objects_database_msgs::GetModelMeshRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace household_objects_database_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::household_objects_database_msgs::GetModelMeshRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::household_objects_database_msgs::GetModelMeshRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::household_objects_database_msgs::GetModelMeshRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::household_objects_database_msgs::GetModelMeshRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::household_objects_database_msgs::GetModelMeshRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::household_objects_database_msgs::GetModelMeshRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::household_objects_database_msgs::GetModelMeshRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "28cb0598daf3b969068a38cd07aaa9f6";
  }

  static const char* value(const ::household_objects_database_msgs::GetModelMeshRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x28cb0598daf3b969ULL;
  static const uint64_t static_value2 = 0x068a38cd07aaa9f6ULL;
};

template<class ContainerAllocator>
struct DataType< ::household_objects_database_msgs::GetModelMeshRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "household_objects_database_msgs/GetModelMeshRequest";
  }

  static const char* value(const ::household_objects_database_msgs::GetModelMeshRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::household_objects_database_msgs::GetModelMeshRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# retrieves the mesh for a model id\n"
"\n"
"# the id of the model\n"
"int32 model_id\n"
"\n"
;
  }

  static const char* value(const ::household_objects_database_msgs::GetModelMeshRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::household_objects_database_msgs::GetModelMeshRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.model_id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetModelMeshRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::household_objects_database_msgs::GetModelMeshRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::household_objects_database_msgs::GetModelMeshRequest_<ContainerAllocator>& v)
  {
    s << indent << "model_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.model_id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HOUSEHOLD_OBJECTS_DATABASE_MSGS_MESSAGE_GETMODELMESHREQUEST_H
