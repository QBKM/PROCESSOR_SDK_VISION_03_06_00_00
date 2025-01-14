// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/framework/device_attributes.proto

#ifndef PROTOBUF_tensorflow_2fcore_2fframework_2fdevice_5fattributes_2eproto__INCLUDED
#define PROTOBUF_tensorflow_2fcore_2fframework_2fdevice_5fattributes_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3002000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3002000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace tensorflow {
class DeviceAttributes;
class DeviceAttributesDefaultTypeInternal;
extern DeviceAttributesDefaultTypeInternal _DeviceAttributes_default_instance_;
class DeviceLocality;
class DeviceLocalityDefaultTypeInternal;
extern DeviceLocalityDefaultTypeInternal _DeviceLocality_default_instance_;
}  // namespace tensorflow

namespace tensorflow {

namespace protobuf_tensorflow_2fcore_2fframework_2fdevice_5fattributes_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_tensorflow_2fcore_2fframework_2fdevice_5fattributes_2eproto

// ===================================================================

class DeviceLocality : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.DeviceLocality) */ {
 public:
  DeviceLocality();
  virtual ~DeviceLocality();

  DeviceLocality(const DeviceLocality& from);

  inline DeviceLocality& operator=(const DeviceLocality& from) {
    CopyFrom(from);
    return *this;
  }

  inline ::google::protobuf::Arena* GetArena() const PROTOBUF_FINAL {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const PROTOBUF_FINAL {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const DeviceLocality& default_instance();

  static inline const DeviceLocality* internal_default_instance() {
    return reinterpret_cast<const DeviceLocality*>(
               &_DeviceLocality_default_instance_);
  }

  void UnsafeArenaSwap(DeviceLocality* other);
  void Swap(DeviceLocality* other);

  // implements Message ----------------------------------------------

  inline DeviceLocality* New() const PROTOBUF_FINAL { return New(NULL); }

  DeviceLocality* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const DeviceLocality& from);
  void MergeFrom(const DeviceLocality& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(DeviceLocality* other);
  protected:
  explicit DeviceLocality(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 bus_id = 1;
  void clear_bus_id();
  static const int kBusIdFieldNumber = 1;
  ::google::protobuf::int32 bus_id() const;
  void set_bus_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:tensorflow.DeviceLocality)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::int32 bus_id_;
  mutable int _cached_size_;
  friend struct  protobuf_tensorflow_2fcore_2fframework_2fdevice_5fattributes_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class DeviceAttributes : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tensorflow.DeviceAttributes) */ {
 public:
  DeviceAttributes();
  virtual ~DeviceAttributes();

  DeviceAttributes(const DeviceAttributes& from);

  inline DeviceAttributes& operator=(const DeviceAttributes& from) {
    CopyFrom(from);
    return *this;
  }

  inline ::google::protobuf::Arena* GetArena() const PROTOBUF_FINAL {
    return GetArenaNoVirtual();
  }
  inline void* GetMaybeArenaPointer() const PROTOBUF_FINAL {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const DeviceAttributes& default_instance();

  static inline const DeviceAttributes* internal_default_instance() {
    return reinterpret_cast<const DeviceAttributes*>(
               &_DeviceAttributes_default_instance_);
  }

  void UnsafeArenaSwap(DeviceAttributes* other);
  void Swap(DeviceAttributes* other);

  // implements Message ----------------------------------------------

  inline DeviceAttributes* New() const PROTOBUF_FINAL { return New(NULL); }

  DeviceAttributes* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const DeviceAttributes& from);
  void MergeFrom(const DeviceAttributes& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(DeviceAttributes* other);
  protected:
  explicit DeviceAttributes(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);
  ::std::string* unsafe_arena_release_name();
  void unsafe_arena_set_allocated_name(
      ::std::string* name);

  // string device_type = 2;
  void clear_device_type();
  static const int kDeviceTypeFieldNumber = 2;
  const ::std::string& device_type() const;
  void set_device_type(const ::std::string& value);
  void set_device_type(const char* value);
  void set_device_type(const char* value, size_t size);
  ::std::string* mutable_device_type();
  ::std::string* release_device_type();
  void set_allocated_device_type(::std::string* device_type);
  ::std::string* unsafe_arena_release_device_type();
  void unsafe_arena_set_allocated_device_type(
      ::std::string* device_type);

  // string physical_device_desc = 7;
  void clear_physical_device_desc();
  static const int kPhysicalDeviceDescFieldNumber = 7;
  const ::std::string& physical_device_desc() const;
  void set_physical_device_desc(const ::std::string& value);
  void set_physical_device_desc(const char* value);
  void set_physical_device_desc(const char* value, size_t size);
  ::std::string* mutable_physical_device_desc();
  ::std::string* release_physical_device_desc();
  void set_allocated_physical_device_desc(::std::string* physical_device_desc);
  ::std::string* unsafe_arena_release_physical_device_desc();
  void unsafe_arena_set_allocated_physical_device_desc(
      ::std::string* physical_device_desc);

  // .tensorflow.DeviceLocality locality = 5;
  bool has_locality() const;
  void clear_locality();
  static const int kLocalityFieldNumber = 5;
  private:
  void _slow_mutable_locality();
  void _slow_set_allocated_locality(
      ::google::protobuf::Arena* message_arena, ::tensorflow::DeviceLocality** locality);
  ::tensorflow::DeviceLocality* _slow_release_locality();
  public:
  const ::tensorflow::DeviceLocality& locality() const;
  ::tensorflow::DeviceLocality* mutable_locality();
  ::tensorflow::DeviceLocality* release_locality();
  void set_allocated_locality(::tensorflow::DeviceLocality* locality);
  ::tensorflow::DeviceLocality* unsafe_arena_release_locality();
  void unsafe_arena_set_allocated_locality(
      ::tensorflow::DeviceLocality* locality);

  // int64 memory_limit = 4;
  void clear_memory_limit();
  static const int kMemoryLimitFieldNumber = 4;
  ::google::protobuf::int64 memory_limit() const;
  void set_memory_limit(::google::protobuf::int64 value);

  // fixed64 incarnation = 6;
  void clear_incarnation();
  static const int kIncarnationFieldNumber = 6;
  ::google::protobuf::uint64 incarnation() const;
  void set_incarnation(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:tensorflow.DeviceAttributes)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr device_type_;
  ::google::protobuf::internal::ArenaStringPtr physical_device_desc_;
  ::tensorflow::DeviceLocality* locality_;
  ::google::protobuf::int64 memory_limit_;
  ::google::protobuf::uint64 incarnation_;
  mutable int _cached_size_;
  friend struct  protobuf_tensorflow_2fcore_2fframework_2fdevice_5fattributes_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// DeviceLocality

// int32 bus_id = 1;
inline void DeviceLocality::clear_bus_id() {
  bus_id_ = 0;
}
inline ::google::protobuf::int32 DeviceLocality::bus_id() const {
  // @@protoc_insertion_point(field_get:tensorflow.DeviceLocality.bus_id)
  return bus_id_;
}
inline void DeviceLocality::set_bus_id(::google::protobuf::int32 value) {
  
  bus_id_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.DeviceLocality.bus_id)
}

// -------------------------------------------------------------------

// DeviceAttributes

// string name = 1;
inline void DeviceAttributes::clear_name() {
  name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& DeviceAttributes::name() const {
  // @@protoc_insertion_point(field_get:tensorflow.DeviceAttributes.name)
  return name_.Get();
}
inline void DeviceAttributes::set_name(const ::std::string& value) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.DeviceAttributes.name)
}
inline void DeviceAttributes::set_name(const char* value) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.DeviceAttributes.name)
}
inline void DeviceAttributes::set_name(const char* value,
    size_t size) {
  
  name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.DeviceAttributes.name)
}
inline ::std::string* DeviceAttributes::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.DeviceAttributes.name)
  return name_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* DeviceAttributes::release_name() {
  // @@protoc_insertion_point(field_release:tensorflow.DeviceAttributes.name)
  
  return name_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* DeviceAttributes::unsafe_arena_release_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.DeviceAttributes.name)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return name_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void DeviceAttributes::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.DeviceAttributes.name)
}
inline void DeviceAttributes::unsafe_arena_set_allocated_name(
    ::std::string* name) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (name != NULL) {
    
  } else {
    
  }
  name_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      name, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.DeviceAttributes.name)
}

// string device_type = 2;
inline void DeviceAttributes::clear_device_type() {
  device_type_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& DeviceAttributes::device_type() const {
  // @@protoc_insertion_point(field_get:tensorflow.DeviceAttributes.device_type)
  return device_type_.Get();
}
inline void DeviceAttributes::set_device_type(const ::std::string& value) {
  
  device_type_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.DeviceAttributes.device_type)
}
inline void DeviceAttributes::set_device_type(const char* value) {
  
  device_type_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.DeviceAttributes.device_type)
}
inline void DeviceAttributes::set_device_type(const char* value,
    size_t size) {
  
  device_type_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.DeviceAttributes.device_type)
}
inline ::std::string* DeviceAttributes::mutable_device_type() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.DeviceAttributes.device_type)
  return device_type_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* DeviceAttributes::release_device_type() {
  // @@protoc_insertion_point(field_release:tensorflow.DeviceAttributes.device_type)
  
  return device_type_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* DeviceAttributes::unsafe_arena_release_device_type() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.DeviceAttributes.device_type)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return device_type_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void DeviceAttributes::set_allocated_device_type(::std::string* device_type) {
  if (device_type != NULL) {
    
  } else {
    
  }
  device_type_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), device_type,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.DeviceAttributes.device_type)
}
inline void DeviceAttributes::unsafe_arena_set_allocated_device_type(
    ::std::string* device_type) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (device_type != NULL) {
    
  } else {
    
  }
  device_type_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      device_type, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.DeviceAttributes.device_type)
}

// int64 memory_limit = 4;
inline void DeviceAttributes::clear_memory_limit() {
  memory_limit_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 DeviceAttributes::memory_limit() const {
  // @@protoc_insertion_point(field_get:tensorflow.DeviceAttributes.memory_limit)
  return memory_limit_;
}
inline void DeviceAttributes::set_memory_limit(::google::protobuf::int64 value) {
  
  memory_limit_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.DeviceAttributes.memory_limit)
}

// .tensorflow.DeviceLocality locality = 5;
inline bool DeviceAttributes::has_locality() const {
  return this != internal_default_instance() && locality_ != NULL;
}
inline void DeviceAttributes::clear_locality() {
  if (GetArenaNoVirtual() == NULL && locality_ != NULL) delete locality_;
  locality_ = NULL;
}
inline const ::tensorflow::DeviceLocality& DeviceAttributes::locality() const {
  // @@protoc_insertion_point(field_get:tensorflow.DeviceAttributes.locality)
  return locality_ != NULL ? *locality_
                         : *::tensorflow::DeviceLocality::internal_default_instance();
}
inline ::tensorflow::DeviceLocality* DeviceAttributes::mutable_locality() {
  
  if (locality_ == NULL) {
    _slow_mutable_locality();
  }
  // @@protoc_insertion_point(field_mutable:tensorflow.DeviceAttributes.locality)
  return locality_;
}
inline ::tensorflow::DeviceLocality* DeviceAttributes::release_locality() {
  // @@protoc_insertion_point(field_release:tensorflow.DeviceAttributes.locality)
  
  if (GetArenaNoVirtual() != NULL) {
    return _slow_release_locality();
  } else {
    ::tensorflow::DeviceLocality* temp = locality_;
    locality_ = NULL;
    return temp;
  }
}
inline  void DeviceAttributes::set_allocated_locality(::tensorflow::DeviceLocality* locality) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete locality_;
  }
  if (locality != NULL) {
    _slow_set_allocated_locality(message_arena, &locality);
  }
  locality_ = locality;
  if (locality) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:tensorflow.DeviceAttributes.locality)
}

// fixed64 incarnation = 6;
inline void DeviceAttributes::clear_incarnation() {
  incarnation_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 DeviceAttributes::incarnation() const {
  // @@protoc_insertion_point(field_get:tensorflow.DeviceAttributes.incarnation)
  return incarnation_;
}
inline void DeviceAttributes::set_incarnation(::google::protobuf::uint64 value) {
  
  incarnation_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.DeviceAttributes.incarnation)
}

// string physical_device_desc = 7;
inline void DeviceAttributes::clear_physical_device_desc() {
  physical_device_desc_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline const ::std::string& DeviceAttributes::physical_device_desc() const {
  // @@protoc_insertion_point(field_get:tensorflow.DeviceAttributes.physical_device_desc)
  return physical_device_desc_.Get();
}
inline void DeviceAttributes::set_physical_device_desc(const ::std::string& value) {
  
  physical_device_desc_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.DeviceAttributes.physical_device_desc)
}
inline void DeviceAttributes::set_physical_device_desc(const char* value) {
  
  physical_device_desc_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.DeviceAttributes.physical_device_desc)
}
inline void DeviceAttributes::set_physical_device_desc(const char* value,
    size_t size) {
  
  physical_device_desc_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.DeviceAttributes.physical_device_desc)
}
inline ::std::string* DeviceAttributes::mutable_physical_device_desc() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.DeviceAttributes.physical_device_desc)
  return physical_device_desc_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* DeviceAttributes::release_physical_device_desc() {
  // @@protoc_insertion_point(field_release:tensorflow.DeviceAttributes.physical_device_desc)
  
  return physical_device_desc_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
inline ::std::string* DeviceAttributes::unsafe_arena_release_physical_device_desc() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.DeviceAttributes.physical_device_desc)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return physical_device_desc_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
inline void DeviceAttributes::set_allocated_physical_device_desc(::std::string* physical_device_desc) {
  if (physical_device_desc != NULL) {
    
  } else {
    
  }
  physical_device_desc_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), physical_device_desc,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.DeviceAttributes.physical_device_desc)
}
inline void DeviceAttributes::unsafe_arena_set_allocated_physical_device_desc(
    ::std::string* physical_device_desc) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (physical_device_desc != NULL) {
    
  } else {
    
  }
  physical_device_desc_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      physical_device_desc, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.DeviceAttributes.physical_device_desc)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_tensorflow_2fcore_2fframework_2fdevice_5fattributes_2eproto__INCLUDED
