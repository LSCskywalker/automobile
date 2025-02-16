// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from interfaces_pkg:msg/KeyPoint2D.idl
// generated code does not contain a copyright notice
#include "interfaces_pkg/msg/detail/key_point2_d__rosidl_typesupport_fastrtps_cpp.hpp"
#include "interfaces_pkg/msg/detail/key_point2_d__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace interfaces_pkg
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const interfaces_pkg::msg::Point2D &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  interfaces_pkg::msg::Point2D &);
size_t get_serialized_size(
  const interfaces_pkg::msg::Point2D &,
  size_t current_alignment);
size_t
max_serialized_size_Point2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace interfaces_pkg


namespace interfaces_pkg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_pkg
cdr_serialize(
  const interfaces_pkg::msg::KeyPoint2D & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: id
  cdr << ros_message.id;
  // Member: point
  interfaces_pkg::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.point,
    cdr);
  // Member: score
  cdr << ros_message.score;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_pkg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  interfaces_pkg::msg::KeyPoint2D & ros_message)
{
  // Member: id
  cdr >> ros_message.id;

  // Member: point
  interfaces_pkg::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.point);

  // Member: score
  cdr >> ros_message.score;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_pkg
get_serialized_size(
  const interfaces_pkg::msg::KeyPoint2D & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: id
  {
    size_t item_size = sizeof(ros_message.id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: point

  current_alignment +=
    interfaces_pkg::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.point, current_alignment);
  // Member: score
  {
    size_t item_size = sizeof(ros_message.score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_pkg
max_serialized_size_KeyPoint2D(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: point
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        interfaces_pkg::msg::typesupport_fastrtps_cpp::max_serialized_size_Point2D(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: score
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = interfaces_pkg::msg::KeyPoint2D;
    is_plain =
      (
      offsetof(DataType, score) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _KeyPoint2D__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const interfaces_pkg::msg::KeyPoint2D *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _KeyPoint2D__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<interfaces_pkg::msg::KeyPoint2D *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _KeyPoint2D__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const interfaces_pkg::msg::KeyPoint2D *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _KeyPoint2D__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_KeyPoint2D(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _KeyPoint2D__callbacks = {
  "interfaces_pkg::msg",
  "KeyPoint2D",
  _KeyPoint2D__cdr_serialize,
  _KeyPoint2D__cdr_deserialize,
  _KeyPoint2D__get_serialized_size,
  _KeyPoint2D__max_serialized_size
};

static rosidl_message_type_support_t _KeyPoint2D__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_KeyPoint2D__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace interfaces_pkg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_interfaces_pkg
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces_pkg::msg::KeyPoint2D>()
{
  return &interfaces_pkg::msg::typesupport_fastrtps_cpp::_KeyPoint2D__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces_pkg, msg, KeyPoint2D)() {
  return &interfaces_pkg::msg::typesupport_fastrtps_cpp::_KeyPoint2D__handle;
}

#ifdef __cplusplus
}
#endif
