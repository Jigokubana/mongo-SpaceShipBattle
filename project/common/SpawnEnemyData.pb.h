// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SpawnEnemyData.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_SpawnEnemyData_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_SpawnEnemyData_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_SpawnEnemyData_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_SpawnEnemyData_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_SpawnEnemyData_2eproto;
namespace mongo {
class SpawnEnemyData;
class SpawnEnemyDataDefaultTypeInternal;
extern SpawnEnemyDataDefaultTypeInternal _SpawnEnemyData_default_instance_;
}  // namespace mongo
PROTOBUF_NAMESPACE_OPEN
template<> ::mongo::SpawnEnemyData* Arena::CreateMaybeMessage<::mongo::SpawnEnemyData>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace mongo {

// ===================================================================

class SpawnEnemyData :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mongo.SpawnEnemyData) */ {
 public:
  SpawnEnemyData();
  virtual ~SpawnEnemyData();

  SpawnEnemyData(const SpawnEnemyData& from);
  SpawnEnemyData(SpawnEnemyData&& from) noexcept
    : SpawnEnemyData() {
    *this = ::std::move(from);
  }

  inline SpawnEnemyData& operator=(const SpawnEnemyData& from) {
    CopyFrom(from);
    return *this;
  }
  inline SpawnEnemyData& operator=(SpawnEnemyData&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const SpawnEnemyData& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SpawnEnemyData* internal_default_instance() {
    return reinterpret_cast<const SpawnEnemyData*>(
               &_SpawnEnemyData_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SpawnEnemyData& a, SpawnEnemyData& b) {
    a.Swap(&b);
  }
  inline void Swap(SpawnEnemyData* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SpawnEnemyData* New() const final {
    return CreateMaybeMessage<SpawnEnemyData>(nullptr);
  }

  SpawnEnemyData* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SpawnEnemyData>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SpawnEnemyData& from);
  void MergeFrom(const SpawnEnemyData& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SpawnEnemyData* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mongo.SpawnEnemyData";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_SpawnEnemyData_2eproto);
    return ::descriptor_table_SpawnEnemyData_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUsernameFieldNumber = 1,
    kUuidFieldNumber = 2,
    kTimestampFieldNumber = 3,
    kXFieldNumber = 4,
    kYFieldNumber = 5,
    kZFieldNumber = 6,
    kEnemyIdFieldNumber = 7,
  };
  // string username = 1;
  void clear_username();
  const std::string& username() const;
  void set_username(const std::string& value);
  void set_username(std::string&& value);
  void set_username(const char* value);
  void set_username(const char* value, size_t size);
  std::string* mutable_username();
  std::string* release_username();
  void set_allocated_username(std::string* username);
  private:
  const std::string& _internal_username() const;
  void _internal_set_username(const std::string& value);
  std::string* _internal_mutable_username();
  public:

  // string uuid = 2;
  void clear_uuid();
  const std::string& uuid() const;
  void set_uuid(const std::string& value);
  void set_uuid(std::string&& value);
  void set_uuid(const char* value);
  void set_uuid(const char* value, size_t size);
  std::string* mutable_uuid();
  std::string* release_uuid();
  void set_allocated_uuid(std::string* uuid);
  private:
  const std::string& _internal_uuid() const;
  void _internal_set_uuid(const std::string& value);
  std::string* _internal_mutable_uuid();
  public:

  // int64 timestamp = 3;
  void clear_timestamp();
  ::PROTOBUF_NAMESPACE_ID::int64 timestamp() const;
  void set_timestamp(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_timestamp() const;
  void _internal_set_timestamp(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // uint32 x = 4;
  void clear_x();
  ::PROTOBUF_NAMESPACE_ID::uint32 x() const;
  void set_x(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_x() const;
  void _internal_set_x(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 y = 5;
  void clear_y();
  ::PROTOBUF_NAMESPACE_ID::uint32 y() const;
  void set_y(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_y() const;
  void _internal_set_y(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 z = 6;
  void clear_z();
  ::PROTOBUF_NAMESPACE_ID::uint32 z() const;
  void set_z(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_z() const;
  void _internal_set_z(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 enemy_id = 7;
  void clear_enemy_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 enemy_id() const;
  void set_enemy_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_enemy_id() const;
  void _internal_set_enemy_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:mongo.SpawnEnemyData)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr username_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr uuid_;
  ::PROTOBUF_NAMESPACE_ID::int64 timestamp_;
  ::PROTOBUF_NAMESPACE_ID::uint32 x_;
  ::PROTOBUF_NAMESPACE_ID::uint32 y_;
  ::PROTOBUF_NAMESPACE_ID::uint32 z_;
  ::PROTOBUF_NAMESPACE_ID::uint32 enemy_id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_SpawnEnemyData_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SpawnEnemyData

// string username = 1;
inline void SpawnEnemyData::clear_username() {
  username_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& SpawnEnemyData::username() const {
  // @@protoc_insertion_point(field_get:mongo.SpawnEnemyData.username)
  return _internal_username();
}
inline void SpawnEnemyData::set_username(const std::string& value) {
  _internal_set_username(value);
  // @@protoc_insertion_point(field_set:mongo.SpawnEnemyData.username)
}
inline std::string* SpawnEnemyData::mutable_username() {
  // @@protoc_insertion_point(field_mutable:mongo.SpawnEnemyData.username)
  return _internal_mutable_username();
}
inline const std::string& SpawnEnemyData::_internal_username() const {
  return username_.GetNoArena();
}
inline void SpawnEnemyData::_internal_set_username(const std::string& value) {
  
  username_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void SpawnEnemyData::set_username(std::string&& value) {
  
  username_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:mongo.SpawnEnemyData.username)
}
inline void SpawnEnemyData::set_username(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  username_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mongo.SpawnEnemyData.username)
}
inline void SpawnEnemyData::set_username(const char* value, size_t size) {
  
  username_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mongo.SpawnEnemyData.username)
}
inline std::string* SpawnEnemyData::_internal_mutable_username() {
  
  return username_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* SpawnEnemyData::release_username() {
  // @@protoc_insertion_point(field_release:mongo.SpawnEnemyData.username)
  
  return username_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void SpawnEnemyData::set_allocated_username(std::string* username) {
  if (username != nullptr) {
    
  } else {
    
  }
  username_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), username);
  // @@protoc_insertion_point(field_set_allocated:mongo.SpawnEnemyData.username)
}

// string uuid = 2;
inline void SpawnEnemyData::clear_uuid() {
  uuid_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& SpawnEnemyData::uuid() const {
  // @@protoc_insertion_point(field_get:mongo.SpawnEnemyData.uuid)
  return _internal_uuid();
}
inline void SpawnEnemyData::set_uuid(const std::string& value) {
  _internal_set_uuid(value);
  // @@protoc_insertion_point(field_set:mongo.SpawnEnemyData.uuid)
}
inline std::string* SpawnEnemyData::mutable_uuid() {
  // @@protoc_insertion_point(field_mutable:mongo.SpawnEnemyData.uuid)
  return _internal_mutable_uuid();
}
inline const std::string& SpawnEnemyData::_internal_uuid() const {
  return uuid_.GetNoArena();
}
inline void SpawnEnemyData::_internal_set_uuid(const std::string& value) {
  
  uuid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void SpawnEnemyData::set_uuid(std::string&& value) {
  
  uuid_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:mongo.SpawnEnemyData.uuid)
}
inline void SpawnEnemyData::set_uuid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  uuid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mongo.SpawnEnemyData.uuid)
}
inline void SpawnEnemyData::set_uuid(const char* value, size_t size) {
  
  uuid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mongo.SpawnEnemyData.uuid)
}
inline std::string* SpawnEnemyData::_internal_mutable_uuid() {
  
  return uuid_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* SpawnEnemyData::release_uuid() {
  // @@protoc_insertion_point(field_release:mongo.SpawnEnemyData.uuid)
  
  return uuid_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void SpawnEnemyData::set_allocated_uuid(std::string* uuid) {
  if (uuid != nullptr) {
    
  } else {
    
  }
  uuid_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), uuid);
  // @@protoc_insertion_point(field_set_allocated:mongo.SpawnEnemyData.uuid)
}

// int64 timestamp = 3;
inline void SpawnEnemyData::clear_timestamp() {
  timestamp_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 SpawnEnemyData::_internal_timestamp() const {
  return timestamp_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 SpawnEnemyData::timestamp() const {
  // @@protoc_insertion_point(field_get:mongo.SpawnEnemyData.timestamp)
  return _internal_timestamp();
}
inline void SpawnEnemyData::_internal_set_timestamp(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  timestamp_ = value;
}
inline void SpawnEnemyData::set_timestamp(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_timestamp(value);
  // @@protoc_insertion_point(field_set:mongo.SpawnEnemyData.timestamp)
}

// uint32 x = 4;
inline void SpawnEnemyData::clear_x() {
  x_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 SpawnEnemyData::_internal_x() const {
  return x_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 SpawnEnemyData::x() const {
  // @@protoc_insertion_point(field_get:mongo.SpawnEnemyData.x)
  return _internal_x();
}
inline void SpawnEnemyData::_internal_set_x(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  x_ = value;
}
inline void SpawnEnemyData::set_x(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:mongo.SpawnEnemyData.x)
}

// uint32 y = 5;
inline void SpawnEnemyData::clear_y() {
  y_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 SpawnEnemyData::_internal_y() const {
  return y_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 SpawnEnemyData::y() const {
  // @@protoc_insertion_point(field_get:mongo.SpawnEnemyData.y)
  return _internal_y();
}
inline void SpawnEnemyData::_internal_set_y(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  y_ = value;
}
inline void SpawnEnemyData::set_y(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:mongo.SpawnEnemyData.y)
}

// uint32 z = 6;
inline void SpawnEnemyData::clear_z() {
  z_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 SpawnEnemyData::_internal_z() const {
  return z_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 SpawnEnemyData::z() const {
  // @@protoc_insertion_point(field_get:mongo.SpawnEnemyData.z)
  return _internal_z();
}
inline void SpawnEnemyData::_internal_set_z(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  z_ = value;
}
inline void SpawnEnemyData::set_z(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_z(value);
  // @@protoc_insertion_point(field_set:mongo.SpawnEnemyData.z)
}

// uint32 enemy_id = 7;
inline void SpawnEnemyData::clear_enemy_id() {
  enemy_id_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 SpawnEnemyData::_internal_enemy_id() const {
  return enemy_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 SpawnEnemyData::enemy_id() const {
  // @@protoc_insertion_point(field_get:mongo.SpawnEnemyData.enemy_id)
  return _internal_enemy_id();
}
inline void SpawnEnemyData::_internal_set_enemy_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  enemy_id_ = value;
}
inline void SpawnEnemyData::set_enemy_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_enemy_id(value);
  // @@protoc_insertion_point(field_set:mongo.SpawnEnemyData.enemy_id)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace mongo

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_SpawnEnemyData_2eproto
