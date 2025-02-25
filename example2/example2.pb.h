// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: example2.proto

#ifndef PROTOBUF_INCLUDED_example2_2eproto
#define PROTOBUF_INCLUDED_example2_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_example2_2eproto 

namespace protobuf_example2_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_example2_2eproto
class Employee;
class EmployeeDefaultTypeInternal;
extern EmployeeDefaultTypeInternal _Employee_default_instance_;
namespace google {
namespace protobuf {
template<> ::Employee* Arena::CreateMaybeMessage<::Employee>(Arena*);
}  // namespace protobuf
}  // namespace google

// ===================================================================

class Employee : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Employee) */ {
 public:
  Employee();
  virtual ~Employee();

  Employee(const Employee& from);

  inline Employee& operator=(const Employee& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Employee(Employee&& from) noexcept
    : Employee() {
    *this = ::std::move(from);
  }

  inline Employee& operator=(Employee&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Employee& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Employee* internal_default_instance() {
    return reinterpret_cast<const Employee*>(
               &_Employee_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Employee* other);
  friend void swap(Employee& a, Employee& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Employee* New() const final {
    return CreateMaybeMessage<Employee>(NULL);
  }

  Employee* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Employee>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Employee& from);
  void MergeFrom(const Employee& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Employee* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // string company = 2;
  void clear_company();
  static const int kCompanyFieldNumber = 2;
  const ::std::string& company() const;
  void set_company(const ::std::string& value);
  #if LANG_CXX11
  void set_company(::std::string&& value);
  #endif
  void set_company(const char* value);
  void set_company(const char* value, size_t size);
  ::std::string* mutable_company();
  ::std::string* release_company();
  void set_allocated_company(::std::string* company);

  // int32 age = 3;
  void clear_age();
  static const int kAgeFieldNumber = 3;
  ::google::protobuf::int32 age() const;
  void set_age(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Employee)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr company_;
  ::google::protobuf::int32 age_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_example2_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Employee

// string name = 1;
inline void Employee::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Employee::name() const {
  // @@protoc_insertion_point(field_get:Employee.name)
  return name_.GetNoArena();
}
inline void Employee::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Employee.name)
}
#if LANG_CXX11
inline void Employee::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Employee.name)
}
#endif
inline void Employee::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Employee.name)
}
inline void Employee::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Employee.name)
}
inline ::std::string* Employee::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:Employee.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Employee::release_name() {
  // @@protoc_insertion_point(field_release:Employee.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Employee::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:Employee.name)
}

// string company = 2;
inline void Employee::clear_company() {
  company_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Employee::company() const {
  // @@protoc_insertion_point(field_get:Employee.company)
  return company_.GetNoArena();
}
inline void Employee::set_company(const ::std::string& value) {
  
  company_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Employee.company)
}
#if LANG_CXX11
inline void Employee::set_company(::std::string&& value) {
  
  company_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Employee.company)
}
#endif
inline void Employee::set_company(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  company_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Employee.company)
}
inline void Employee::set_company(const char* value, size_t size) {
  
  company_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Employee.company)
}
inline ::std::string* Employee::mutable_company() {
  
  // @@protoc_insertion_point(field_mutable:Employee.company)
  return company_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Employee::release_company() {
  // @@protoc_insertion_point(field_release:Employee.company)
  
  return company_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Employee::set_allocated_company(::std::string* company) {
  if (company != NULL) {
    
  } else {
    
  }
  company_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), company);
  // @@protoc_insertion_point(field_set_allocated:Employee.company)
}

// int32 age = 3;
inline void Employee::clear_age() {
  age_ = 0;
}
inline ::google::protobuf::int32 Employee::age() const {
  // @@protoc_insertion_point(field_get:Employee.age)
  return age_;
}
inline void Employee::set_age(::google::protobuf::int32 value) {
  
  age_ = value;
  // @@protoc_insertion_point(field_set:Employee.age)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_example2_2eproto
