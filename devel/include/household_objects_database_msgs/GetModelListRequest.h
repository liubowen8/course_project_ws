// Generated by gencpp from file household_objects_database_msgs/GetModelListRequest.msg
// DO NOT EDIT!


#ifndef HOUSEHOLD_OBJECTS_DATABASE_MSGS_MESSAGE_GETMODELLISTREQUEST_H
#define HOUSEHOLD_OBJECTS_DATABASE_MSGS_MESSAGE_GETMODELLISTREQUEST_H


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
struct GetModelListRequest_
{
  typedef GetModelListRequest_<ContainerAllocator> Type;

  GetModelListRequest_()
    : model_set()  {
    }
  GetModelListRequest_(const ContainerAllocator& _alloc)
    : model_set(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _model_set_type;
  _model_set_type model_set;





  typedef boost::shared_ptr< ::household_objects_database_msgs::GetModelListRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::household_objects_database_msgs::GetModelListRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetModelListRequest_

typedef ::household_objects_database_msgs::GetModelListRequest_<std::allocator<void> > GetModelListRequest;

typedef boost::shared_ptr< ::household_objects_database_msgs::GetModelListRequest > GetModelListRequestPtr;
typedef boost::shared_ptr< ::household_objects_database_msgs::GetModelListRequest const> GetModelListRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::household_objects_database_msgs::GetModelListRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::household_objects_database_msgs::GetModelListRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::household_objects_database_msgs::GetModelListRequest_<ContainerAllocator1> & lhs, const ::household_objects_database_msgs::GetModelListRequest_<ContainerAllocator2> & rhs)
{
  return lhs.model_set == rhs.model_set;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::household_objects_database_msgs::GetModelListRequest_<ContainerAllocator1> & lhs, const ::household_objects_database_msgs::GetModelListRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace household_objects_database_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::household_objects_database_msgs::GetModelListRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::household_objects_database_msgs::GetModelListRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::household_objects_database_msgs::GetModelListRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::household_objects_database_msgs::GetModelListRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::household_objects_database_msgs::GetModelListRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::household_objects_database_msgs::GetModelListRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::household_objects_database_msgs::GetModelListRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6bdf0a866151f41b8876e73800929933";
  }

  static const char* value(const ::household_objects_database_msgs::GetModelListRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6bdf0a866151f41bULL;
  static const uint64_t static_value2 = 0x8876e73800929933ULL;
};

template<class ContainerAllocator>
struct DataType< ::household_objects_database_msgs::GetModelListRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "household_objects_database_msgs/GetModelListRequest";
  }

  static const char* value(const ::household_objects_database_msgs::GetModelListRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::household_objects_database_msgs::GetModelListRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# retrieves model id's from the database\n"
"\n"
"# optional: the name of a model set that the id's should belong to;\n"
"# used to only retrieve a subset of models, pre-specified in the database\n"
"# leave empty to get all available models\n"
"string model_set\n"
"\n"
;
  }

  static const char* value(const ::household_objects_database_msgs::GetModelListRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::household_objects_database_msgs::GetModelListRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.model_set);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetModelListRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::household_objects_database_msgs::GetModelListRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::household_objects_database_msgs::GetModelListRequest_<ContainerAllocator>& v)
  {
    s << indent << "model_set: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.model_set);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HOUSEHOLD_OBJECTS_DATABASE_MSGS_MESSAGE_GETMODELLISTREQUEST_H
