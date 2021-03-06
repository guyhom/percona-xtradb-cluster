// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: mysqlx_sql.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "mysqlx_sql.pb.h"

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

namespace Mysqlx {
namespace Sql {

namespace {

const ::google::protobuf::Descriptor* StmtExecute_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  StmtExecute_reflection_ = NULL;
const ::google::protobuf::Descriptor* StmtExecuteOk_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  StmtExecuteOk_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_mysqlx_5fsql_2eproto() {
  protobuf_AddDesc_mysqlx_5fsql_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "mysqlx_sql.proto");
  GOOGLE_CHECK(file != NULL);
  StmtExecute_descriptor_ = file->message_type(0);
  static const int StmtExecute_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StmtExecute, namespace__),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StmtExecute, stmt_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StmtExecute, args_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StmtExecute, compact_metadata_),
  };
  StmtExecute_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      StmtExecute_descriptor_,
      StmtExecute::default_instance_,
      StmtExecute_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StmtExecute, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StmtExecute, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(StmtExecute));
  StmtExecuteOk_descriptor_ = file->message_type(1);
  static const int StmtExecuteOk_offsets_[1] = {
  };
  StmtExecuteOk_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      StmtExecuteOk_descriptor_,
      StmtExecuteOk::default_instance_,
      StmtExecuteOk_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StmtExecuteOk, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(StmtExecuteOk, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(StmtExecuteOk));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_mysqlx_5fsql_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    StmtExecute_descriptor_, &StmtExecute::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    StmtExecuteOk_descriptor_, &StmtExecuteOk::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_mysqlx_5fsql_2eproto() {
  delete StmtExecute::default_instance_;
  delete StmtExecute_reflection_;
  delete StmtExecute::_default_namespace__;
  delete StmtExecuteOk::default_instance_;
  delete StmtExecuteOk_reflection_;
}

void protobuf_AddDesc_mysqlx_5fsql_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::Mysqlx::Datatypes::protobuf_AddDesc_mysqlx_5fdatatypes_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020mysqlx_sql.proto\022\nMysqlx.Sql\032\026mysqlx_d"
    "atatypes.proto\"y\n\013StmtExecute\022\026\n\tnamespa"
    "ce\030\003 \001(\t:\003sql\022\014\n\004stmt\030\001 \002(\014\022#\n\004args\030\002 \003("
    "\0132\025.Mysqlx.Datatypes.Any\022\037\n\020compact_meta"
    "data\030\004 \001(\010:\005false\"\017\n\rStmtExecuteOkB\036\n\034co"
    "m.mysql.cj.mysqlx.protobuf", 226);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "mysqlx_sql.proto", &protobuf_RegisterTypes);
  StmtExecute::_default_namespace__ =
      new ::std::string("sql", 3);
  StmtExecute::default_instance_ = new StmtExecute();
  StmtExecuteOk::default_instance_ = new StmtExecuteOk();
  StmtExecute::default_instance_->InitAsDefaultInstance();
  StmtExecuteOk::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_mysqlx_5fsql_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_mysqlx_5fsql_2eproto {
  StaticDescriptorInitializer_mysqlx_5fsql_2eproto() {
    protobuf_AddDesc_mysqlx_5fsql_2eproto();
  }
} static_descriptor_initializer_mysqlx_5fsql_2eproto_;

// ===================================================================

::std::string* StmtExecute::_default_namespace__ = NULL;
#ifndef _MSC_VER
const int StmtExecute::kNamespaceFieldNumber;
const int StmtExecute::kStmtFieldNumber;
const int StmtExecute::kArgsFieldNumber;
const int StmtExecute::kCompactMetadataFieldNumber;
#endif  // !_MSC_VER

StmtExecute::StmtExecute()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Mysqlx.Sql.StmtExecute)
}

void StmtExecute::InitAsDefaultInstance() {
}

StmtExecute::StmtExecute(const StmtExecute& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Mysqlx.Sql.StmtExecute)
}

void StmtExecute::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  namespace__ = const_cast< ::std::string*>(_default_namespace__);
  stmt_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  compact_metadata_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

StmtExecute::~StmtExecute() {
  // @@protoc_insertion_point(destructor:Mysqlx.Sql.StmtExecute)
  SharedDtor();
}

void StmtExecute::SharedDtor() {
  if (namespace__ != _default_namespace__) {
    delete namespace__;
  }
  if (stmt_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete stmt_;
  }
  if (this != default_instance_) {
  }
}

void StmtExecute::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* StmtExecute::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return StmtExecute_descriptor_;
}

const StmtExecute& StmtExecute::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_mysqlx_5fsql_2eproto();
  return *default_instance_;
}

StmtExecute* StmtExecute::default_instance_ = NULL;

StmtExecute* StmtExecute::New() const {
  return new StmtExecute;
}

void StmtExecute::Clear() {
  if (_has_bits_[0 / 32] & 11) {
    if (has_namespace_()) {
      if (namespace__ != _default_namespace__) {
        namespace__->assign(*_default_namespace__);
      }
    }
    if (has_stmt()) {
      if (stmt_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        stmt_->clear();
      }
    }
    compact_metadata_ = false;
  }
  args_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool StmtExecute::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Mysqlx.Sql.StmtExecute)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required bytes stmt = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_stmt()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_args;
        break;
      }

      // repeated .Mysqlx.Datatypes.Any args = 2;
      case 2: {
        if (tag == 18) {
         parse_args:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_args()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_args;
        if (input->ExpectTag(26)) goto parse_namespace;
        break;
      }

      // optional string namespace = 3 [default = "sql"];
      case 3: {
        if (tag == 26) {
         parse_namespace:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_namespace_()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->namespace_().data(), this->namespace_().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "namespace_");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_compact_metadata;
        break;
      }

      // optional bool compact_metadata = 4 [default = false];
      case 4: {
        if (tag == 32) {
         parse_compact_metadata:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &compact_metadata_)));
          set_has_compact_metadata();
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
  // @@protoc_insertion_point(parse_success:Mysqlx.Sql.StmtExecute)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Mysqlx.Sql.StmtExecute)
  return false;
#undef DO_
}

void StmtExecute::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Mysqlx.Sql.StmtExecute)
  // required bytes stmt = 1;
  if (has_stmt()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->stmt(), output);
  }

  // repeated .Mysqlx.Datatypes.Any args = 2;
  for (int i = 0; i < this->args_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->args(i), output);
  }

  // optional string namespace = 3 [default = "sql"];
  if (has_namespace_()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->namespace_().data(), this->namespace_().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "namespace_");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->namespace_(), output);
  }

  // optional bool compact_metadata = 4 [default = false];
  if (has_compact_metadata()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->compact_metadata(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Mysqlx.Sql.StmtExecute)
}

::google::protobuf::uint8* StmtExecute::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Mysqlx.Sql.StmtExecute)
  // required bytes stmt = 1;
  if (has_stmt()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->stmt(), target);
  }

  // repeated .Mysqlx.Datatypes.Any args = 2;
  for (int i = 0; i < this->args_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->args(i), target);
  }

  // optional string namespace = 3 [default = "sql"];
  if (has_namespace_()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->namespace_().data(), this->namespace_().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "namespace_");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->namespace_(), target);
  }

  // optional bool compact_metadata = 4 [default = false];
  if (has_compact_metadata()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->compact_metadata(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Mysqlx.Sql.StmtExecute)
  return target;
}

int StmtExecute::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string namespace = 3 [default = "sql"];
    if (has_namespace_()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->namespace_());
    }

    // required bytes stmt = 1;
    if (has_stmt()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->stmt());
    }

    // optional bool compact_metadata = 4 [default = false];
    if (has_compact_metadata()) {
      total_size += 1 + 1;
    }

  }
  // repeated .Mysqlx.Datatypes.Any args = 2;
  total_size += 1 * this->args_size();
  for (int i = 0; i < this->args_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->args(i));
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

void StmtExecute::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const StmtExecute* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const StmtExecute*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void StmtExecute::MergeFrom(const StmtExecute& from) {
  GOOGLE_CHECK_NE(&from, this);
  args_.MergeFrom(from.args_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_namespace_()) {
      set_namespace_(from.namespace_());
    }
    if (from.has_stmt()) {
      set_stmt(from.stmt());
    }
    if (from.has_compact_metadata()) {
      set_compact_metadata(from.compact_metadata());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void StmtExecute::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void StmtExecute::CopyFrom(const StmtExecute& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StmtExecute::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000002) != 0x00000002) return false;

  if (!::google::protobuf::internal::AllAreInitialized(this->args())) return false;
  return true;
}

void StmtExecute::Swap(StmtExecute* other) {
  if (other != this) {
    std::swap(namespace__, other->namespace__);
    std::swap(stmt_, other->stmt_);
    args_.Swap(&other->args_);
    std::swap(compact_metadata_, other->compact_metadata_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata StmtExecute::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = StmtExecute_descriptor_;
  metadata.reflection = StmtExecute_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

StmtExecuteOk::StmtExecuteOk()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Mysqlx.Sql.StmtExecuteOk)
}

void StmtExecuteOk::InitAsDefaultInstance() {
}

StmtExecuteOk::StmtExecuteOk(const StmtExecuteOk& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Mysqlx.Sql.StmtExecuteOk)
}

void StmtExecuteOk::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

StmtExecuteOk::~StmtExecuteOk() {
  // @@protoc_insertion_point(destructor:Mysqlx.Sql.StmtExecuteOk)
  SharedDtor();
}

void StmtExecuteOk::SharedDtor() {
  if (this != default_instance_) {
  }
}

void StmtExecuteOk::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* StmtExecuteOk::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return StmtExecuteOk_descriptor_;
}

const StmtExecuteOk& StmtExecuteOk::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_mysqlx_5fsql_2eproto();
  return *default_instance_;
}

StmtExecuteOk* StmtExecuteOk::default_instance_ = NULL;

StmtExecuteOk* StmtExecuteOk::New() const {
  return new StmtExecuteOk;
}

void StmtExecuteOk::Clear() {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool StmtExecuteOk::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Mysqlx.Sql.StmtExecuteOk)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0 ||
        ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, mutable_unknown_fields()));
  }
success:
  // @@protoc_insertion_point(parse_success:Mysqlx.Sql.StmtExecuteOk)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Mysqlx.Sql.StmtExecuteOk)
  return false;
#undef DO_
}

void StmtExecuteOk::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Mysqlx.Sql.StmtExecuteOk)
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Mysqlx.Sql.StmtExecuteOk)
}

::google::protobuf::uint8* StmtExecuteOk::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Mysqlx.Sql.StmtExecuteOk)
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Mysqlx.Sql.StmtExecuteOk)
  return target;
}

int StmtExecuteOk::ByteSize() const {
  int total_size = 0;

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

void StmtExecuteOk::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const StmtExecuteOk* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const StmtExecuteOk*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void StmtExecuteOk::MergeFrom(const StmtExecuteOk& from) {
  GOOGLE_CHECK_NE(&from, this);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void StmtExecuteOk::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void StmtExecuteOk::CopyFrom(const StmtExecuteOk& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StmtExecuteOk::IsInitialized() const {

  return true;
}

void StmtExecuteOk::Swap(StmtExecuteOk* other) {
  if (other != this) {
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata StmtExecuteOk::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = StmtExecuteOk_descriptor_;
  metadata.reflection = StmtExecuteOk_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Sql
}  // namespace Mysqlx

// @@protoc_insertion_point(global_scope)
