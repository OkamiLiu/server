// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: testMsg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "testMsg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace test_package {

namespace {

const ::google::protobuf::Descriptor* testMsg_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  testMsg_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_testMsg_2eproto() {
  protobuf_AddDesc_testMsg_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "testMsg.proto");
  GOOGLE_CHECK(file != NULL);
  testMsg_descriptor_ = file->message_type(0);
  static const int testMsg_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(testMsg, sendtime_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(testMsg, msg_),
  };
  testMsg_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      testMsg_descriptor_,
      testMsg::default_instance_,
      testMsg_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(testMsg, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(testMsg, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(testMsg));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_testMsg_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    testMsg_descriptor_, &testMsg::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_testMsg_2eproto() {
  delete testMsg::default_instance_;
  delete testMsg_reflection_;
}

void protobuf_AddDesc_testMsg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rtestMsg.proto\022\014test_package\"(\n\007testMsg"
    "\022\020\n\010sendtime\030\001 \002(\005\022\013\n\003msg\030\002 \002(\t", 71);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "testMsg.proto", &protobuf_RegisterTypes);
  testMsg::default_instance_ = new testMsg();
  testMsg::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_testMsg_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_testMsg_2eproto {
  StaticDescriptorInitializer_testMsg_2eproto() {
    protobuf_AddDesc_testMsg_2eproto();
  }
} static_descriptor_initializer_testMsg_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int testMsg::kSendtimeFieldNumber;
const int testMsg::kMsgFieldNumber;
#endif  // !_MSC_VER

testMsg::testMsg()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:test_package.testMsg)
}

void testMsg::InitAsDefaultInstance() {
}

testMsg::testMsg(const testMsg& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:test_package.testMsg)
}

void testMsg::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  sendtime_ = 0;
  msg_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

testMsg::~testMsg() {
  // @@protoc_insertion_point(destructor:test_package.testMsg)
  SharedDtor();
}

void testMsg::SharedDtor() {
  if (msg_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete msg_;
  }
  if (this != default_instance_) {
  }
}

void testMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* testMsg::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return testMsg_descriptor_;
}

const testMsg& testMsg::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_testMsg_2eproto();
  return *default_instance_;
}

testMsg* testMsg::default_instance_ = NULL;

testMsg* testMsg::New() const {
  return new testMsg;
}

void testMsg::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    sendtime_ = 0;
    if (has_msg()) {
      if (msg_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        msg_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool testMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:test_package.testMsg)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 sendtime = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &sendtime_)));
          set_has_sendtime();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_msg;
        break;
      }

      // required string msg = 2;
      case 2: {
        if (tag == 18) {
         parse_msg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_msg()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->msg().data(), this->msg().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "msg");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:test_package.testMsg)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:test_package.testMsg)
  return false;
#undef DO_
}

void testMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:test_package.testMsg)
  // required int32 sendtime = 1;
  if (has_sendtime()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->sendtime(), output);
  }

  // required string msg = 2;
  if (has_msg()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->msg().data(), this->msg().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "msg");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->msg(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:test_package.testMsg)
}

::google::protobuf::uint8* testMsg::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:test_package.testMsg)
  // required int32 sendtime = 1;
  if (has_sendtime()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->sendtime(), target);
  }

  // required string msg = 2;
  if (has_msg()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->msg().data(), this->msg().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "msg");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->msg(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:test_package.testMsg)
  return target;
}

int testMsg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 sendtime = 1;
    if (has_sendtime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->sendtime());
    }

    // required string msg = 2;
    if (has_msg()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->msg());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void testMsg::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const testMsg* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const testMsg*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void testMsg::MergeFrom(const testMsg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_sendtime()) {
      set_sendtime(from.sendtime());
    }
    if (from.has_msg()) {
      set_msg(from.msg());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void testMsg::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void testMsg::CopyFrom(const testMsg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool testMsg::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void testMsg::Swap(testMsg* other) {
  if (other != this) {
    std::swap(sendtime_, other->sendtime_);
    std::swap(msg_, other->msg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata testMsg::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = testMsg_descriptor_;
  metadata.reflection = testMsg_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace test_package

// @@protoc_insertion_point(global_scope)
