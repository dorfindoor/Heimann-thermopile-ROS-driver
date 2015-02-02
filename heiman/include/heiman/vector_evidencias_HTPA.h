/* Auto-generated by genmsg_cpp for file /home/bee/development/heiman/msg/vector_evidencias_HTPA.msg */
#ifndef HTPADRIVERS_MESSAGE_VECTOR_EVIDENCIAS_HTPA_H
#define HTPADRIVERS_MESSAGE_VECTOR_EVIDENCIAS_HTPA_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace heiman
{
template <class ContainerAllocator>
struct vector_evidencias_HTPA_ {
  typedef vector_evidencias_HTPA_<ContainerAllocator> Type;

  vector_evidencias_HTPA_()
  : vector_evidencia()
  , vector_angulos_grados()
  , vector_angulos_radianes()
  , valor_maximo_evidencia(0.0)
  , indice_maximo_evidencia(0)
  , grados_maximo_evidencia(0.0)
  , radianes_maximo_evidencia(0.0)
  , temperatura_maximo_evidencia(0.0)
  , gaussian_temperatura_maximo_evidencia(0.0)
  {
    vector_evidencia.assign(0.0);
    vector_angulos_grados.assign(0.0);
    vector_angulos_radianes.assign(0.0);
  }

  vector_evidencias_HTPA_(const ContainerAllocator& _alloc)
  : vector_evidencia()
  , vector_angulos_grados()
  , vector_angulos_radianes()
  , valor_maximo_evidencia(0.0)
  , indice_maximo_evidencia(0)
  , grados_maximo_evidencia(0.0)
  , radianes_maximo_evidencia(0.0)
  , temperatura_maximo_evidencia(0.0)
  , gaussian_temperatura_maximo_evidencia(0.0)
  {
    vector_evidencia.assign(0.0);
    vector_angulos_grados.assign(0.0);
    vector_angulos_radianes.assign(0.0);
  }

  typedef boost::array<float, 32>  _vector_evidencia_type;
  boost::array<float, 32>  vector_evidencia;

  typedef boost::array<float, 32>  _vector_angulos_grados_type;
  boost::array<float, 32>  vector_angulos_grados;

  typedef boost::array<float, 32>  _vector_angulos_radianes_type;
  boost::array<float, 32>  vector_angulos_radianes;

  typedef float _valor_maximo_evidencia_type;
  float valor_maximo_evidencia;

  typedef int32_t _indice_maximo_evidencia_type;
  int32_t indice_maximo_evidencia;

  typedef float _grados_maximo_evidencia_type;
  float grados_maximo_evidencia;

  typedef float _radianes_maximo_evidencia_type;
  float radianes_maximo_evidencia;

  typedef float _temperatura_maximo_evidencia_type;
  float temperatura_maximo_evidencia;

  typedef float _gaussian_temperatura_maximo_evidencia_type;
  float gaussian_temperatura_maximo_evidencia;


  typedef boost::shared_ptr< ::heiman::vector_evidencias_HTPA_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::heiman::vector_evidencias_HTPA_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct vector_evidencias_HTPA
typedef  ::heiman::vector_evidencias_HTPA_<std::allocator<void> > vector_evidencias_HTPA;

typedef boost::shared_ptr< ::heiman::vector_evidencias_HTPA> vector_evidencias_HTPAPtr;
typedef boost::shared_ptr< ::heiman::vector_evidencias_HTPA const> vector_evidencias_HTPAConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::heiman::vector_evidencias_HTPA_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::heiman::vector_evidencias_HTPA_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace heiman

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::heiman::vector_evidencias_HTPA_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::heiman::vector_evidencias_HTPA_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::heiman::vector_evidencias_HTPA_<ContainerAllocator> > {
  static const char* value() 
  {
    return "03d9b864d7f2333230006380f421ed68";
  }

  static const char* value(const  ::heiman::vector_evidencias_HTPA_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x03d9b864d7f23332ULL;
  static const uint64_t static_value2 = 0x30006380f421ed68ULL;
};

template<class ContainerAllocator>
struct DataType< ::heiman::vector_evidencias_HTPA_<ContainerAllocator> > {
  static const char* value() 
  {
    return "heiman/vector_evidencias_HTPA";
  }

  static const char* value(const  ::heiman::vector_evidencias_HTPA_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::heiman::vector_evidencias_HTPA_<ContainerAllocator> > {
  static const char* value() 
  {
    return "float32[32] vector_evidencia\n\
float32[32] vector_angulos_grados\n\
float32[32] vector_angulos_radianes\n\
float32 valor_maximo_evidencia\n\
int32 indice_maximo_evidencia\n\
float32 grados_maximo_evidencia\n\
float32 radianes_maximo_evidencia\n\
float32 temperatura_maximo_evidencia\n\
float32 gaussian_temperatura_maximo_evidencia\n\
\n\
";
  }

  static const char* value(const  ::heiman::vector_evidencias_HTPA_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::heiman::vector_evidencias_HTPA_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::heiman::vector_evidencias_HTPA_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.vector_evidencia);
    stream.next(m.vector_angulos_grados);
    stream.next(m.vector_angulos_radianes);
    stream.next(m.valor_maximo_evidencia);
    stream.next(m.indice_maximo_evidencia);
    stream.next(m.grados_maximo_evidencia);
    stream.next(m.radianes_maximo_evidencia);
    stream.next(m.temperatura_maximo_evidencia);
    stream.next(m.gaussian_temperatura_maximo_evidencia);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct vector_evidencias_HTPA_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::heiman::vector_evidencias_HTPA_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::heiman::vector_evidencias_HTPA_<ContainerAllocator> & v) 
  {
    s << indent << "vector_evidencia[]" << std::endl;
    for (size_t i = 0; i < v.vector_evidencia.size(); ++i)
    {
      s << indent << "  vector_evidencia[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.vector_evidencia[i]);
    }
    s << indent << "vector_angulos_grados[]" << std::endl;
    for (size_t i = 0; i < v.vector_angulos_grados.size(); ++i)
    {
      s << indent << "  vector_angulos_grados[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.vector_angulos_grados[i]);
    }
    s << indent << "vector_angulos_radianes[]" << std::endl;
    for (size_t i = 0; i < v.vector_angulos_radianes.size(); ++i)
    {
      s << indent << "  vector_angulos_radianes[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.vector_angulos_radianes[i]);
    }
    s << indent << "valor_maximo_evidencia: ";
    Printer<float>::stream(s, indent + "  ", v.valor_maximo_evidencia);
    s << indent << "indice_maximo_evidencia: ";
    Printer<int32_t>::stream(s, indent + "  ", v.indice_maximo_evidencia);
    s << indent << "grados_maximo_evidencia: ";
    Printer<float>::stream(s, indent + "  ", v.grados_maximo_evidencia);
    s << indent << "radianes_maximo_evidencia: ";
    Printer<float>::stream(s, indent + "  ", v.radianes_maximo_evidencia);
    s << indent << "temperatura_maximo_evidencia: ";
    Printer<float>::stream(s, indent + "  ", v.temperatura_maximo_evidencia);
    s << indent << "gaussian_temperatura_maximo_evidencia: ";
    Printer<float>::stream(s, indent + "  ", v.gaussian_temperatura_maximo_evidencia);
  }
};


} // namespace message_operations
} // namespace ros

#endif // HTPADRIVERS_MESSAGE_VECTOR_EVIDENCIAS_HTPA_H

