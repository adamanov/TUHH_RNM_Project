// Generated by gencpp from file messages/ImageCapture.msg
// DO NOT EDIT!


#ifndef MESSAGES_MESSAGE_IMAGECAPTURE_H
#define MESSAGES_MESSAGE_IMAGECAPTURE_H

#include <ros/service_traits.h>


#include <messages/ImageCaptureRequest.h>
#include <messages/ImageCaptureResponse.h>


namespace messages
{

struct ImageCapture
{

typedef ImageCaptureRequest Request;
typedef ImageCaptureResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ImageCapture
} // namespace messages


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::messages::ImageCapture > {
  static const char* value()
  {
    return "049e540a757cae7de9e26696e82f8da7";
  }

  static const char* value(const ::messages::ImageCapture&) { return value(); }
};

template<>
struct DataType< ::messages::ImageCapture > {
  static const char* value()
  {
    return "messages/ImageCapture";
  }

  static const char* value(const ::messages::ImageCapture&) { return value(); }
};


// service_traits::MD5Sum< ::messages::ImageCaptureRequest> should match
// service_traits::MD5Sum< ::messages::ImageCapture >
template<>
struct MD5Sum< ::messages::ImageCaptureRequest>
{
  static const char* value()
  {
    return MD5Sum< ::messages::ImageCapture >::value();
  }
  static const char* value(const ::messages::ImageCaptureRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::messages::ImageCaptureRequest> should match
// service_traits::DataType< ::messages::ImageCapture >
template<>
struct DataType< ::messages::ImageCaptureRequest>
{
  static const char* value()
  {
    return DataType< ::messages::ImageCapture >::value();
  }
  static const char* value(const ::messages::ImageCaptureRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::messages::ImageCaptureResponse> should match
// service_traits::MD5Sum< ::messages::ImageCapture >
template<>
struct MD5Sum< ::messages::ImageCaptureResponse>
{
  static const char* value()
  {
    return MD5Sum< ::messages::ImageCapture >::value();
  }
  static const char* value(const ::messages::ImageCaptureResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::messages::ImageCaptureResponse> should match
// service_traits::DataType< ::messages::ImageCapture >
template<>
struct DataType< ::messages::ImageCaptureResponse>
{
  static const char* value()
  {
    return DataType< ::messages::ImageCapture >::value();
  }
  static const char* value(const ::messages::ImageCaptureResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MESSAGES_MESSAGE_IMAGECAPTURE_H
