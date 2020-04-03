/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: proto.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "proto.pb-c.h"
void   proto__question__init
                     (Proto__Question         *message)
{
  static const Proto__Question init_value = PROTO__QUESTION__INIT;
  *message = init_value;
}
size_t proto__question__get_packed_size
                     (const Proto__Question *message)
{
  assert(message->base.descriptor == &proto__question__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t proto__question__pack
                     (const Proto__Question *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &proto__question__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t proto__question__pack_to_buffer
                     (const Proto__Question *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &proto__question__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Proto__Question *
       proto__question__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Proto__Question *)
     protobuf_c_message_unpack (&proto__question__descriptor,
                                allocator, len, data);
}
void   proto__question__free_unpacked
                     (Proto__Question *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &proto__question__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   proto__answer__init
                     (Proto__Answer         *message)
{
  static const Proto__Answer init_value = PROTO__ANSWER__INIT;
  *message = init_value;
}
size_t proto__answer__get_packed_size
                     (const Proto__Answer *message)
{
  assert(message->base.descriptor == &proto__answer__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t proto__answer__pack
                     (const Proto__Answer *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &proto__answer__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t proto__answer__pack_to_buffer
                     (const Proto__Answer *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &proto__answer__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Proto__Answer *
       proto__answer__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Proto__Answer *)
     protobuf_c_message_unpack (&proto__answer__descriptor,
                                allocator, len, data);
}
void   proto__answer__free_unpacked
                     (Proto__Answer *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &proto__answer__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor proto__question__field_descriptors[2] =
{
  {
    "topic",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Proto__Question, topic),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tips",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Proto__Question, tips),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned proto__question__field_indices_by_name[] = {
  1,   /* field[1] = tips */
  0,   /* field[0] = topic */
};
static const ProtobufCIntRange proto__question__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor proto__question__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "proto.question",
  "Question",
  "Proto__Question",
  "proto",
  sizeof(Proto__Question),
  2,
  proto__question__field_descriptors,
  proto__question__field_indices_by_name,
  1,  proto__question__number_ranges,
  (ProtobufCMessageInit) proto__question__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor proto__answer__field_descriptors[2] =
{
  {
    "result",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Proto__Answer, result),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "times",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Proto__Answer, times),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned proto__answer__field_indices_by_name[] = {
  0,   /* field[0] = result */
  1,   /* field[1] = times */
};
static const ProtobufCIntRange proto__answer__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor proto__answer__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "proto.answer",
  "Answer",
  "Proto__Answer",
  "proto",
  sizeof(Proto__Answer),
  2,
  proto__answer__field_descriptors,
  proto__answer__field_indices_by_name,
  1,  proto__answer__number_ranges,
  (ProtobufCMessageInit) proto__answer__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCMethodDescriptor proto__proto__method_descriptors[1] =
{
  { "learn", &proto__question__descriptor, &proto__answer__descriptor },
};
const unsigned proto__proto__method_indices_by_name[] = {
  0         /* learn */
};
const ProtobufCServiceDescriptor proto__proto__descriptor =
{
  PROTOBUF_C__SERVICE_DESCRIPTOR_MAGIC,
  "proto.proto",
  "proto",
  "Proto__Proto",
  "proto",
  1,
  proto__proto__method_descriptors,
  proto__proto__method_indices_by_name
};
void proto__proto__learn(ProtobufCService *service,
                         const Proto__Question *input,
                         Proto__Answer_Closure closure,
                         void *closure_data)
{
  assert(service->descriptor == &proto__proto__descriptor);
  service->invoke(service, 0, (const ProtobufCMessage *) input, (ProtobufCClosure) closure, closure_data);
}
void proto__proto__init (Proto__Proto_Service *service,
                         Proto__Proto_ServiceDestroy destroy)
{
  protobuf_c_service_generated_init (&service->base,
                                     &proto__proto__descriptor,
                                     (ProtobufCServiceDestroy) destroy);
}
