// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PlayerMoveData.proto

#include "PlayerMoveData.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace mongo {
class PlayerMoveDataDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<PlayerMoveData> _instance;
} _PlayerMoveData_default_instance_;
}  // namespace mongo
static void InitDefaultsscc_info_PlayerMoveData_PlayerMoveData_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mongo::_PlayerMoveData_default_instance_;
    new (ptr) ::mongo::PlayerMoveData();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mongo::PlayerMoveData::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_PlayerMoveData_PlayerMoveData_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_PlayerMoveData_PlayerMoveData_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_PlayerMoveData_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_PlayerMoveData_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_PlayerMoveData_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_PlayerMoveData_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::mongo::PlayerMoveData, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::mongo::PlayerMoveData, username_),
  PROTOBUF_FIELD_OFFSET(::mongo::PlayerMoveData, uuid_),
  PROTOBUF_FIELD_OFFSET(::mongo::PlayerMoveData, timestamp_),
  PROTOBUF_FIELD_OFFSET(::mongo::PlayerMoveData, move_forward_),
  PROTOBUF_FIELD_OFFSET(::mongo::PlayerMoveData, move_right_),
  PROTOBUF_FIELD_OFFSET(::mongo::PlayerMoveData, angle_),
  PROTOBUF_FIELD_OFFSET(::mongo::PlayerMoveData, fireing_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::mongo::PlayerMoveData)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mongo::_PlayerMoveData_default_instance_),
};

const char descriptor_table_protodef_PlayerMoveData_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\024PlayerMoveData.proto\022\005mongo\"\215\001\n\016Player"
  "MoveData\022\020\n\010username\030\001 \001(\t\022\014\n\004uuid\030\002 \001(\t"
  "\022\021\n\ttimestamp\030\003 \001(\003\022\024\n\014move_forward\030\004 \003("
  "\r\022\022\n\nmove_right\030\005 \003(\r\022\r\n\005angle\030\006 \003(\005\022\017\n\007"
  "fireing\030\007 \003(\010b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_PlayerMoveData_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_PlayerMoveData_2eproto_sccs[1] = {
  &scc_info_PlayerMoveData_PlayerMoveData_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_PlayerMoveData_2eproto_once;
static bool descriptor_table_PlayerMoveData_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_PlayerMoveData_2eproto = {
  &descriptor_table_PlayerMoveData_2eproto_initialized, descriptor_table_protodef_PlayerMoveData_2eproto, "PlayerMoveData.proto", 181,
  &descriptor_table_PlayerMoveData_2eproto_once, descriptor_table_PlayerMoveData_2eproto_sccs, descriptor_table_PlayerMoveData_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_PlayerMoveData_2eproto::offsets,
  file_level_metadata_PlayerMoveData_2eproto, 1, file_level_enum_descriptors_PlayerMoveData_2eproto, file_level_service_descriptors_PlayerMoveData_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_PlayerMoveData_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_PlayerMoveData_2eproto), true);
namespace mongo {

// ===================================================================

void PlayerMoveData::InitAsDefaultInstance() {
}
class PlayerMoveData::_Internal {
 public:
};

PlayerMoveData::PlayerMoveData()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:mongo.PlayerMoveData)
}
PlayerMoveData::PlayerMoveData(const PlayerMoveData& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      move_forward_(from.move_forward_),
      move_right_(from.move_right_),
      angle_(from.angle_),
      fireing_(from.fireing_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  username_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_username().empty()) {
    username_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.username_);
  }
  uuid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_uuid().empty()) {
    uuid_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.uuid_);
  }
  timestamp_ = from.timestamp_;
  // @@protoc_insertion_point(copy_constructor:mongo.PlayerMoveData)
}

void PlayerMoveData::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_PlayerMoveData_PlayerMoveData_2eproto.base);
  username_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  uuid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  timestamp_ = PROTOBUF_LONGLONG(0);
}

PlayerMoveData::~PlayerMoveData() {
  // @@protoc_insertion_point(destructor:mongo.PlayerMoveData)
  SharedDtor();
}

void PlayerMoveData::SharedDtor() {
  username_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  uuid_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void PlayerMoveData::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const PlayerMoveData& PlayerMoveData::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_PlayerMoveData_PlayerMoveData_2eproto.base);
  return *internal_default_instance();
}


void PlayerMoveData::Clear() {
// @@protoc_insertion_point(message_clear_start:mongo.PlayerMoveData)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  move_forward_.Clear();
  move_right_.Clear();
  angle_.Clear();
  fireing_.Clear();
  username_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  uuid_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  timestamp_ = PROTOBUF_LONGLONG(0);
  _internal_metadata_.Clear();
}

const char* PlayerMoveData::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string username = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_username();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "mongo.PlayerMoveData.username"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string uuid = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_uuid();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "mongo.PlayerMoveData.uuid"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int64 timestamp = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          timestamp_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated uint32 move_forward = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedUInt32Parser(_internal_mutable_move_forward(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32) {
          _internal_add_move_forward(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated uint32 move_right = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedUInt32Parser(_internal_mutable_move_right(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40) {
          _internal_add_move_right(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated int32 angle = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt32Parser(_internal_mutable_angle(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48) {
          _internal_add_angle(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated bool fireing = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedBoolParser(_internal_mutable_fireing(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 56) {
          _internal_add_fireing(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* PlayerMoveData::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mongo.PlayerMoveData)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string username = 1;
  if (this->username().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_username().data(), static_cast<int>(this->_internal_username().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "mongo.PlayerMoveData.username");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_username(), target);
  }

  // string uuid = 2;
  if (this->uuid().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_uuid().data(), static_cast<int>(this->_internal_uuid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "mongo.PlayerMoveData.uuid");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_uuid(), target);
  }

  // int64 timestamp = 3;
  if (this->timestamp() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(3, this->_internal_timestamp(), target);
  }

  // repeated uint32 move_forward = 4;
  {
    int byte_size = _move_forward_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteUInt32Packed(
          4, _internal_move_forward(), byte_size, target);
    }
  }

  // repeated uint32 move_right = 5;
  {
    int byte_size = _move_right_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteUInt32Packed(
          5, _internal_move_right(), byte_size, target);
    }
  }

  // repeated int32 angle = 6;
  {
    int byte_size = _angle_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteInt32Packed(
          6, _internal_angle(), byte_size, target);
    }
  }

  // repeated bool fireing = 7;
  if (this->_internal_fireing_size() > 0) {
    target = stream->WriteFixedPacked(7, _internal_fireing(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mongo.PlayerMoveData)
  return target;
}

size_t PlayerMoveData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mongo.PlayerMoveData)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated uint32 move_forward = 4;
  {
    size_t data_size = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      UInt32Size(this->move_forward_);
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _move_forward_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // repeated uint32 move_right = 5;
  {
    size_t data_size = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      UInt32Size(this->move_right_);
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _move_right_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // repeated int32 angle = 6;
  {
    size_t data_size = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      Int32Size(this->angle_);
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _angle_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // repeated bool fireing = 7;
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_fireing_size());
    size_t data_size = 1UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _fireing_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // string username = 1;
  if (this->username().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_username());
  }

  // string uuid = 2;
  if (this->uuid().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_uuid());
  }

  // int64 timestamp = 3;
  if (this->timestamp() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_timestamp());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PlayerMoveData::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mongo.PlayerMoveData)
  GOOGLE_DCHECK_NE(&from, this);
  const PlayerMoveData* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<PlayerMoveData>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mongo.PlayerMoveData)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mongo.PlayerMoveData)
    MergeFrom(*source);
  }
}

void PlayerMoveData::MergeFrom(const PlayerMoveData& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mongo.PlayerMoveData)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  move_forward_.MergeFrom(from.move_forward_);
  move_right_.MergeFrom(from.move_right_);
  angle_.MergeFrom(from.angle_);
  fireing_.MergeFrom(from.fireing_);
  if (from.username().size() > 0) {

    username_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.username_);
  }
  if (from.uuid().size() > 0) {

    uuid_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.uuid_);
  }
  if (from.timestamp() != 0) {
    _internal_set_timestamp(from._internal_timestamp());
  }
}

void PlayerMoveData::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mongo.PlayerMoveData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PlayerMoveData::CopyFrom(const PlayerMoveData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mongo.PlayerMoveData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PlayerMoveData::IsInitialized() const {
  return true;
}

void PlayerMoveData::InternalSwap(PlayerMoveData* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  move_forward_.InternalSwap(&other->move_forward_);
  move_right_.InternalSwap(&other->move_right_);
  angle_.InternalSwap(&other->angle_);
  fireing_.InternalSwap(&other->fireing_);
  username_.Swap(&other->username_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  uuid_.Swap(&other->uuid_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(timestamp_, other->timestamp_);
}

::PROTOBUF_NAMESPACE_ID::Metadata PlayerMoveData::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace mongo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::mongo::PlayerMoveData* Arena::CreateMaybeMessage< ::mongo::PlayerMoveData >(Arena* arena) {
  return Arena::CreateInternal< ::mongo::PlayerMoveData >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
