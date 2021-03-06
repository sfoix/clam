/* Auto-generated by genmsg_cpp for file /home/shenas/rave_experimental/msg/CameraPosition.msg */
#ifndef RAVE_EXPERIMENTAL_MESSAGE_CAMERAPOSITION_H
#define RAVE_EXPERIMENTAL_MESSAGE_CAMERAPOSITION_H
#include <string>
#include <vector>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/message.h"
#include "ros/time.h"


namespace rave_experimental
{
template <class ContainerAllocator>
struct CameraPosition_ : public ros::Message
{
  typedef CameraPosition_<ContainerAllocator> Type;

  CameraPosition_()
  : x(0.0)
  , y(0.0)
  , z(0.0)
  , roll(0.0)
  , pitch(0.0)
  , yaw(0.0)
  {
  }

  CameraPosition_(const ContainerAllocator& _alloc)
  : x(0.0)
  , y(0.0)
  , z(0.0)
  , roll(0.0)
  , pitch(0.0)
  , yaw(0.0)
  {
  }

  typedef float _x_type;
  float x;

  typedef float _y_type;
  float y;

  typedef float _z_type;
  float z;

  typedef float _roll_type;
  float roll;

  typedef float _pitch_type;
  float pitch;

  typedef float _yaw_type;
  float yaw;


private:
  static const char* __s_getDataType_() { return "rave_experimental/CameraPosition"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "3d5697f0c9e8859325238b57521f8f4e"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "float32 x\n\
float32 y\n\
float32 z\n\
float32 roll\n\
float32 pitch\n\
float32 yaw\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, x);
    ros::serialization::serialize(stream, y);
    ros::serialization::serialize(stream, z);
    ros::serialization::serialize(stream, roll);
    ros::serialization::serialize(stream, pitch);
    ros::serialization::serialize(stream, yaw);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, x);
    ros::serialization::deserialize(stream, y);
    ros::serialization::deserialize(stream, z);
    ros::serialization::deserialize(stream, roll);
    ros::serialization::deserialize(stream, pitch);
    ros::serialization::deserialize(stream, yaw);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(x);
    size += ros::serialization::serializationLength(y);
    size += ros::serialization::serializationLength(z);
    size += ros::serialization::serializationLength(roll);
    size += ros::serialization::serializationLength(pitch);
    size += ros::serialization::serializationLength(yaw);
    return size;
  }

  typedef boost::shared_ptr< ::rave_experimental::CameraPosition_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rave_experimental::CameraPosition_<ContainerAllocator>  const> ConstPtr;
}; // struct CameraPosition
typedef  ::rave_experimental::CameraPosition_<std::allocator<void> > CameraPosition;

typedef boost::shared_ptr< ::rave_experimental::CameraPosition> CameraPositionPtr;
typedef boost::shared_ptr< ::rave_experimental::CameraPosition const> CameraPositionConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::rave_experimental::CameraPosition_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::rave_experimental::CameraPosition_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace rave_experimental

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::rave_experimental::CameraPosition_<ContainerAllocator> > {
  static const char* value() 
  {
    return "3d5697f0c9e8859325238b57521f8f4e";
  }

  static const char* value(const  ::rave_experimental::CameraPosition_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x3d5697f0c9e88593ULL;
  static const uint64_t static_value2 = 0x25238b57521f8f4eULL;
};

template<class ContainerAllocator>
struct DataType< ::rave_experimental::CameraPosition_<ContainerAllocator> > {
  static const char* value() 
  {
    return "rave_experimental/CameraPosition";
  }

  static const char* value(const  ::rave_experimental::CameraPosition_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::rave_experimental::CameraPosition_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float32 x\n\
float32 y\n\
float32 z\n\
float32 roll\n\
float32 pitch\n\
float32 yaw\n\
\n\
";
  }

  static const char* value(const  ::rave_experimental::CameraPosition_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::rave_experimental::CameraPosition_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::rave_experimental::CameraPosition_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.x);
    stream.next(m.y);
    stream.next(m.z);
    stream.next(m.roll);
    stream.next(m.pitch);
    stream.next(m.yaw);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct CameraPosition_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rave_experimental::CameraPosition_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::rave_experimental::CameraPosition_<ContainerAllocator> & v) 
  {
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<float>::stream(s, indent + "  ", v.z);
    s << indent << "roll: ";
    Printer<float>::stream(s, indent + "  ", v.roll);
    s << indent << "pitch: ";
    Printer<float>::stream(s, indent + "  ", v.pitch);
    s << indent << "yaw: ";
    Printer<float>::stream(s, indent + "  ", v.yaw);
  }
};


} // namespace message_operations
} // namespace ros

#endif // RAVE_EXPERIMENTAL_MESSAGE_CAMERAPOSITION_H

