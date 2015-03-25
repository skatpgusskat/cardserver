// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protocol.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "protocol.pb.h"

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

namespace protocol {

namespace {

const ::google::protobuf::Descriptor* Card_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Card_reflection_ = NULL;
const ::google::protobuf::Descriptor* Card_CardTarget_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Card_CardTarget_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Card_CardType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* Card_HandsIndex_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* Card_FieldType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* Card_FieldFrontOrBack_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* Card_FieldIndex_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* MessageType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_protocol_2eproto() {
  protobuf_AddDesc_protocol_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "protocol.proto");
  GOOGLE_CHECK(file != NULL);
  Card_descriptor_ = file->message_type(0);
  static const int Card_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Card, playerid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Card, gameid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Card, cardtype_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Card, handsindex_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Card, cardtarget_),
  };
  Card_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Card_descriptor_,
      Card::default_instance_,
      Card_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Card, _has_bits_[0]),
      -1,
      -1,
      sizeof(Card),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Card, _internal_metadata_),
      -1);
  Card_CardTarget_descriptor_ = Card_descriptor_->nested_type(0);
  static const int Card_CardTarget_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Card_CardTarget, fieldtype_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Card_CardTarget, fieldfrontorback_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Card_CardTarget, fieldindex_),
  };
  Card_CardTarget_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Card_CardTarget_descriptor_,
      Card_CardTarget::default_instance_,
      Card_CardTarget_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Card_CardTarget, _has_bits_[0]),
      -1,
      -1,
      sizeof(Card_CardTarget),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Card_CardTarget, _internal_metadata_),
      -1);
  Card_CardType_descriptor_ = Card_descriptor_->enum_type(0);
  Card_HandsIndex_descriptor_ = Card_descriptor_->enum_type(1);
  Card_FieldType_descriptor_ = Card_descriptor_->enum_type(2);
  Card_FieldFrontOrBack_descriptor_ = Card_descriptor_->enum_type(3);
  Card_FieldIndex_descriptor_ = Card_descriptor_->enum_type(4);
  MessageType_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_protocol_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Card_descriptor_, &Card::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Card_CardTarget_descriptor_, &Card_CardTarget::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_protocol_2eproto() {
  delete Card::default_instance_;
  delete Card_reflection_;
  delete Card_CardTarget::default_instance_;
  delete Card_CardTarget_reflection_;
}

void protobuf_AddDesc_protocol_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016protocol.proto\022\010protocol\"\336\004\n\004Card\022\020\n\010p"
    "layerID\030\001 \002(\007\022\016\n\006gameID\030\002 \002(\007\022)\n\010cardTyp"
    "e\030\003 \002(\0162\027.protocol.Card.CardType\022-\n\nhand"
    "sIndex\030\004 \001(\0162\031.protocol.Card.HandsIndex\022"
    "-\n\ncardTarget\030\005 \003(\0132\031.protocol.Card.Card"
    "Target\032\243\001\n\nCardTarget\022+\n\tfieldType\030\001 \002(\016"
    "2\030.protocol.Card.FieldType\0229\n\020fieldFront"
    "OrBack\030\002 \002(\0162\037.protocol.Card.FieldFrontO"
    "rBack\022-\n\nfieldIndex\030\003 \002(\0162\031.protocol.Car"
    "d.FieldIndex\"&\n\010CardType\022\013\n\007CT_UNIT\020\000\022\r\n"
    "\tCT_ARCANE\020\001\"F\n\nHandsIndex\022\014\n\010HI_FIRST\020\000"
    "\022\r\n\tHI_SECOND\020\001\022\014\n\010HI_THIRD\020\002\022\r\n\tHI_FOUR"
    "TH\020\003\")\n\tFieldType\022\013\n\007FT_MINE\020\000\022\017\n\013FT_OPP"
    "OSITE\020\001\"1\n\020FieldFrontOrBack\022\016\n\nFFOB_FRON"
    "T\020\000\022\r\n\tFFOB_BACK\020\001\"7\n\nFieldIndex\022\014\n\010FI_F"
    "IRST\020\000\022\r\n\tFI_SECOND\020\001\022\014\n\010FI_THIRD\020\002*+\n\013M"
    "essageType\022\017\n\013PKT_CS_CARD\020\000\022\013\n\007PKT_MAX\020\001", 680);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "protocol.proto", &protobuf_RegisterTypes);
  Card::default_instance_ = new Card();
  Card_CardTarget::default_instance_ = new Card_CardTarget();
  Card::default_instance_->InitAsDefaultInstance();
  Card_CardTarget::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_protocol_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_protocol_2eproto {
  StaticDescriptorInitializer_protocol_2eproto() {
    protobuf_AddDesc_protocol_2eproto();
  }
} static_descriptor_initializer_protocol_2eproto_;
const ::google::protobuf::EnumDescriptor* MessageType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MessageType_descriptor_;
}
bool MessageType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}


namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

const ::google::protobuf::EnumDescriptor* Card_CardType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Card_CardType_descriptor_;
}
bool Card_CardType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Card_CardType Card::CT_UNIT;
const Card_CardType Card::CT_ARCANE;
const Card_CardType Card::CardType_MIN;
const Card_CardType Card::CardType_MAX;
const int Card::CardType_ARRAYSIZE;
#endif  // _MSC_VER
const ::google::protobuf::EnumDescriptor* Card_HandsIndex_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Card_HandsIndex_descriptor_;
}
bool Card_HandsIndex_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Card_HandsIndex Card::HI_FIRST;
const Card_HandsIndex Card::HI_SECOND;
const Card_HandsIndex Card::HI_THIRD;
const Card_HandsIndex Card::HI_FOURTH;
const Card_HandsIndex Card::HandsIndex_MIN;
const Card_HandsIndex Card::HandsIndex_MAX;
const int Card::HandsIndex_ARRAYSIZE;
#endif  // _MSC_VER
const ::google::protobuf::EnumDescriptor* Card_FieldType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Card_FieldType_descriptor_;
}
bool Card_FieldType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Card_FieldType Card::FT_MINE;
const Card_FieldType Card::FT_OPPOSITE;
const Card_FieldType Card::FieldType_MIN;
const Card_FieldType Card::FieldType_MAX;
const int Card::FieldType_ARRAYSIZE;
#endif  // _MSC_VER
const ::google::protobuf::EnumDescriptor* Card_FieldFrontOrBack_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Card_FieldFrontOrBack_descriptor_;
}
bool Card_FieldFrontOrBack_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Card_FieldFrontOrBack Card::FFOB_FRONT;
const Card_FieldFrontOrBack Card::FFOB_BACK;
const Card_FieldFrontOrBack Card::FieldFrontOrBack_MIN;
const Card_FieldFrontOrBack Card::FieldFrontOrBack_MAX;
const int Card::FieldFrontOrBack_ARRAYSIZE;
#endif  // _MSC_VER
const ::google::protobuf::EnumDescriptor* Card_FieldIndex_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Card_FieldIndex_descriptor_;
}
bool Card_FieldIndex_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Card_FieldIndex Card::FI_FIRST;
const Card_FieldIndex Card::FI_SECOND;
const Card_FieldIndex Card::FI_THIRD;
const Card_FieldIndex Card::FieldIndex_MIN;
const Card_FieldIndex Card::FieldIndex_MAX;
const int Card::FieldIndex_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int Card_CardTarget::kFieldTypeFieldNumber;
const int Card_CardTarget::kFieldFrontOrBackFieldNumber;
const int Card_CardTarget::kFieldIndexFieldNumber;
#endif  // !_MSC_VER

Card_CardTarget::Card_CardTarget()
  : ::google::protobuf::Message() , _internal_metadata_(NULL)  {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.Card.CardTarget)
}

void Card_CardTarget::InitAsDefaultInstance() {
}

Card_CardTarget::Card_CardTarget(const Card_CardTarget& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.Card.CardTarget)
}

void Card_CardTarget::SharedCtor() {
  _cached_size_ = 0;
  fieldtype_ = 0;
  fieldfrontorback_ = 0;
  fieldindex_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Card_CardTarget::~Card_CardTarget() {
  // @@protoc_insertion_point(destructor:protocol.Card.CardTarget)
  SharedDtor();
}

void Card_CardTarget::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Card_CardTarget::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Card_CardTarget::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Card_CardTarget_descriptor_;
}

const Card_CardTarget& Card_CardTarget::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_protocol_2eproto();
  return *default_instance_;
}

Card_CardTarget* Card_CardTarget::default_instance_ = NULL;

Card_CardTarget* Card_CardTarget::New(::google::protobuf::Arena* arena) const {
  Card_CardTarget* n = new Card_CardTarget;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Card_CardTarget::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<Card_CardTarget*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  ZR_(fieldtype_, fieldindex_);

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool Card_CardTarget::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.Card.CardTarget)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .protocol.Card.FieldType fieldType = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::protocol::Card_FieldType_IsValid(value)) {
            set_fieldtype(static_cast< ::protocol::Card_FieldType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_fieldFrontOrBack;
        break;
      }

      // required .protocol.Card.FieldFrontOrBack fieldFrontOrBack = 2;
      case 2: {
        if (tag == 16) {
         parse_fieldFrontOrBack:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::protocol::Card_FieldFrontOrBack_IsValid(value)) {
            set_fieldfrontorback(static_cast< ::protocol::Card_FieldFrontOrBack >(value));
          } else {
            mutable_unknown_fields()->AddVarint(2, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_fieldIndex;
        break;
      }

      // required .protocol.Card.FieldIndex fieldIndex = 3;
      case 3: {
        if (tag == 24) {
         parse_fieldIndex:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::protocol::Card_FieldIndex_IsValid(value)) {
            set_fieldindex(static_cast< ::protocol::Card_FieldIndex >(value));
          } else {
            mutable_unknown_fields()->AddVarint(3, value);
          }
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
  // @@protoc_insertion_point(parse_success:protocol.Card.CardTarget)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.Card.CardTarget)
  return false;
#undef DO_
}

void Card_CardTarget::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.Card.CardTarget)
  // required .protocol.Card.FieldType fieldType = 1;
  if (has_fieldtype()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->fieldtype(), output);
  }

  // required .protocol.Card.FieldFrontOrBack fieldFrontOrBack = 2;
  if (has_fieldfrontorback()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->fieldfrontorback(), output);
  }

  // required .protocol.Card.FieldIndex fieldIndex = 3;
  if (has_fieldindex()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->fieldindex(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:protocol.Card.CardTarget)
}

::google::protobuf::uint8* Card_CardTarget::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.Card.CardTarget)
  // required .protocol.Card.FieldType fieldType = 1;
  if (has_fieldtype()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->fieldtype(), target);
  }

  // required .protocol.Card.FieldFrontOrBack fieldFrontOrBack = 2;
  if (has_fieldfrontorback()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->fieldfrontorback(), target);
  }

  // required .protocol.Card.FieldIndex fieldIndex = 3;
  if (has_fieldindex()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->fieldindex(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protocol.Card.CardTarget)
  return target;
}

int Card_CardTarget::RequiredFieldsByteSizeFallback() const {
  int total_size = 0;

  if (has_fieldtype()) {
    // required .protocol.Card.FieldType fieldType = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->fieldtype());
  }

  if (has_fieldfrontorback()) {
    // required .protocol.Card.FieldFrontOrBack fieldFrontOrBack = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->fieldfrontorback());
  }

  if (has_fieldindex()) {
    // required .protocol.Card.FieldIndex fieldIndex = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->fieldindex());
  }

  return total_size;
}
int Card_CardTarget::ByteSize() const {
  int total_size = 0;

  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required .protocol.Card.FieldType fieldType = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->fieldtype());

    // required .protocol.Card.FieldFrontOrBack fieldFrontOrBack = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->fieldfrontorback());

    // required .protocol.Card.FieldIndex fieldIndex = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->fieldindex());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Card_CardTarget::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Card_CardTarget* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Card_CardTarget*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Card_CardTarget::MergeFrom(const Card_CardTarget& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_fieldtype()) {
      set_fieldtype(from.fieldtype());
    }
    if (from.has_fieldfrontorback()) {
      set_fieldfrontorback(from.fieldfrontorback());
    }
    if (from.has_fieldindex()) {
      set_fieldindex(from.fieldindex());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void Card_CardTarget::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Card_CardTarget::CopyFrom(const Card_CardTarget& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Card_CardTarget::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void Card_CardTarget::Swap(Card_CardTarget* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Card_CardTarget::InternalSwap(Card_CardTarget* other) {
  std::swap(fieldtype_, other->fieldtype_);
  std::swap(fieldfrontorback_, other->fieldfrontorback_);
  std::swap(fieldindex_, other->fieldindex_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Card_CardTarget::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Card_CardTarget_descriptor_;
  metadata.reflection = Card_CardTarget_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#ifndef _MSC_VER
const int Card::kPlayerIDFieldNumber;
const int Card::kGameIDFieldNumber;
const int Card::kCardTypeFieldNumber;
const int Card::kHandsIndexFieldNumber;
const int Card::kCardTargetFieldNumber;
#endif  // !_MSC_VER

Card::Card()
  : ::google::protobuf::Message() , _internal_metadata_(NULL)  {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.Card)
}

void Card::InitAsDefaultInstance() {
}

Card::Card(const Card& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protocol.Card)
}

void Card::SharedCtor() {
  _cached_size_ = 0;
  playerid_ = 0u;
  gameid_ = 0u;
  cardtype_ = 0;
  handsindex_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Card::~Card() {
  // @@protoc_insertion_point(destructor:protocol.Card)
  SharedDtor();
}

void Card::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Card::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Card::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Card_descriptor_;
}

const Card& Card::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_protocol_2eproto();
  return *default_instance_;
}

Card* Card::default_instance_ = NULL;

Card* Card::New(::google::protobuf::Arena* arena) const {
  Card* n = new Card;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Card::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<Card*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  ZR_(playerid_, handsindex_);

#undef OFFSET_OF_FIELD_
#undef ZR_

  cardtarget_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool Card::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.Card)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required fixed32 playerID = 1;
      case 1: {
        if (tag == 13) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED32>(
                 input, &playerid_)));
          set_has_playerid();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(21)) goto parse_gameID;
        break;
      }

      // required fixed32 gameID = 2;
      case 2: {
        if (tag == 21) {
         parse_gameID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED32>(
                 input, &gameid_)));
          set_has_gameid();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_cardType;
        break;
      }

      // required .protocol.Card.CardType cardType = 3;
      case 3: {
        if (tag == 24) {
         parse_cardType:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::protocol::Card_CardType_IsValid(value)) {
            set_cardtype(static_cast< ::protocol::Card_CardType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(3, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_handsIndex;
        break;
      }

      // optional .protocol.Card.HandsIndex handsIndex = 4;
      case 4: {
        if (tag == 32) {
         parse_handsIndex:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::protocol::Card_HandsIndex_IsValid(value)) {
            set_handsindex(static_cast< ::protocol::Card_HandsIndex >(value));
          } else {
            mutable_unknown_fields()->AddVarint(4, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_cardTarget;
        break;
      }

      // repeated .protocol.Card.CardTarget cardTarget = 5;
      case 5: {
        if (tag == 42) {
         parse_cardTarget:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_cardtarget()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_cardTarget;
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
  // @@protoc_insertion_point(parse_success:protocol.Card)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.Card)
  return false;
#undef DO_
}

void Card::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.Card)
  // required fixed32 playerID = 1;
  if (has_playerid()) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed32(1, this->playerid(), output);
  }

  // required fixed32 gameID = 2;
  if (has_gameid()) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed32(2, this->gameid(), output);
  }

  // required .protocol.Card.CardType cardType = 3;
  if (has_cardtype()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->cardtype(), output);
  }

  // optional .protocol.Card.HandsIndex handsIndex = 4;
  if (has_handsindex()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      4, this->handsindex(), output);
  }

  // repeated .protocol.Card.CardTarget cardTarget = 5;
  for (unsigned int i = 0, n = this->cardtarget_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->cardtarget(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:protocol.Card)
}

::google::protobuf::uint8* Card::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.Card)
  // required fixed32 playerID = 1;
  if (has_playerid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed32ToArray(1, this->playerid(), target);
  }

  // required fixed32 gameID = 2;
  if (has_gameid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed32ToArray(2, this->gameid(), target);
  }

  // required .protocol.Card.CardType cardType = 3;
  if (has_cardtype()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->cardtype(), target);
  }

  // optional .protocol.Card.HandsIndex handsIndex = 4;
  if (has_handsindex()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      4, this->handsindex(), target);
  }

  // repeated .protocol.Card.CardTarget cardTarget = 5;
  for (unsigned int i = 0, n = this->cardtarget_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        5, this->cardtarget(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protocol.Card)
  return target;
}

int Card::RequiredFieldsByteSizeFallback() const {
  int total_size = 0;

  if (has_playerid()) {
    // required fixed32 playerID = 1;
    total_size += 1 + 4;
  }

  if (has_gameid()) {
    // required fixed32 gameID = 2;
    total_size += 1 + 4;
  }

  if (has_cardtype()) {
    // required .protocol.Card.CardType cardType = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->cardtype());
  }

  return total_size;
}
int Card::ByteSize() const {
  int total_size = 0;

  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required fixed32 playerID = 1;
    total_size += 1 + 4;

    // required fixed32 gameID = 2;
    total_size += 1 + 4;

    // required .protocol.Card.CardType cardType = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->cardtype());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  // optional .protocol.Card.HandsIndex handsIndex = 4;
  if (has_handsindex()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->handsindex());
  }

  // repeated .protocol.Card.CardTarget cardTarget = 5;
  total_size += 1 * this->cardtarget_size();
  for (int i = 0; i < this->cardtarget_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->cardtarget(i));
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Card::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Card* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Card*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Card::MergeFrom(const Card& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  cardtarget_.MergeFrom(from.cardtarget_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_playerid()) {
      set_playerid(from.playerid());
    }
    if (from.has_gameid()) {
      set_gameid(from.gameid());
    }
    if (from.has_cardtype()) {
      set_cardtype(from.cardtype());
    }
    if (from.has_handsindex()) {
      set_handsindex(from.handsindex());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void Card::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Card::CopyFrom(const Card& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Card::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  if (!::google::protobuf::internal::AllAreInitialized(this->cardtarget())) return false;
  return true;
}

void Card::Swap(Card* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Card::InternalSwap(Card* other) {
  std::swap(playerid_, other->playerid_);
  std::swap(gameid_, other->gameid_);
  std::swap(cardtype_, other->cardtype_);
  std::swap(handsindex_, other->handsindex_);
  cardtarget_.UnsafeArenaSwap(&other->cardtarget_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Card::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Card_descriptor_;
  metadata.reflection = Card_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protocol

// @@protoc_insertion_point(global_scope)
