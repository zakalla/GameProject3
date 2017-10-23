// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Msg_Bag.proto

#ifndef PROTOBUF_Msg_5fBag_2eproto__INCLUDED
#define PROTOBUF_Msg_5fBag_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_Msg_5fBag_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[8];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsSetupEquipReqImpl();
void InitDefaultsSetupEquipReq();
void InitDefaultsSetupEquipAckImpl();
void InitDefaultsSetupEquipAck();
void InitDefaultsSetupPetReqImpl();
void InitDefaultsSetupPetReq();
void InitDefaultsSetupPetAckImpl();
void InitDefaultsSetupPetAck();
void InitDefaultsSetupPartnerReqImpl();
void InitDefaultsSetupPartnerReq();
void InitDefaultsSetupPartnerAckImpl();
void InitDefaultsSetupPartnerAck();
void InitDefaultsSetupMountReqImpl();
void InitDefaultsSetupMountReq();
void InitDefaultsSetupMountAckImpl();
void InitDefaultsSetupMountAck();
inline void InitDefaults() {
  InitDefaultsSetupEquipReq();
  InitDefaultsSetupEquipAck();
  InitDefaultsSetupPetReq();
  InitDefaultsSetupPetAck();
  InitDefaultsSetupPartnerReq();
  InitDefaultsSetupPartnerAck();
  InitDefaultsSetupMountReq();
  InitDefaultsSetupMountAck();
}
}  // namespace protobuf_Msg_5fBag_2eproto
class SetupEquipAck;
class SetupEquipAckDefaultTypeInternal;
extern SetupEquipAckDefaultTypeInternal _SetupEquipAck_default_instance_;
class SetupEquipReq;
class SetupEquipReqDefaultTypeInternal;
extern SetupEquipReqDefaultTypeInternal _SetupEquipReq_default_instance_;
class SetupMountAck;
class SetupMountAckDefaultTypeInternal;
extern SetupMountAckDefaultTypeInternal _SetupMountAck_default_instance_;
class SetupMountReq;
class SetupMountReqDefaultTypeInternal;
extern SetupMountReqDefaultTypeInternal _SetupMountReq_default_instance_;
class SetupPartnerAck;
class SetupPartnerAckDefaultTypeInternal;
extern SetupPartnerAckDefaultTypeInternal _SetupPartnerAck_default_instance_;
class SetupPartnerReq;
class SetupPartnerReqDefaultTypeInternal;
extern SetupPartnerReqDefaultTypeInternal _SetupPartnerReq_default_instance_;
class SetupPetAck;
class SetupPetAckDefaultTypeInternal;
extern SetupPetAckDefaultTypeInternal _SetupPetAck_default_instance_;
class SetupPetReq;
class SetupPetReqDefaultTypeInternal;
extern SetupPetReqDefaultTypeInternal _SetupPetReq_default_instance_;

// ===================================================================

class SetupEquipReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SetupEquipReq) */ {
 public:
  SetupEquipReq();
  virtual ~SetupEquipReq();

  SetupEquipReq(const SetupEquipReq& from);

  inline SetupEquipReq& operator=(const SetupEquipReq& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SetupEquipReq(SetupEquipReq&& from) noexcept
    : SetupEquipReq() {
    *this = ::std::move(from);
  }

  inline SetupEquipReq& operator=(SetupEquipReq&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SetupEquipReq& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SetupEquipReq* internal_default_instance() {
    return reinterpret_cast<const SetupEquipReq*>(
               &_SetupEquipReq_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(SetupEquipReq* other);
  friend void swap(SetupEquipReq& a, SetupEquipReq& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SetupEquipReq* New() const PROTOBUF_FINAL { return New(NULL); }

  SetupEquipReq* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SetupEquipReq& from);
  void MergeFrom(const SetupEquipReq& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(SetupEquipReq* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // uint64 upguid = 1;
  void clear_upguid();
  static const int kUpguidFieldNumber = 1;
  ::google::protobuf::uint64 upguid() const;
  void set_upguid(::google::protobuf::uint64 value);

  // uint64 downguid = 2;
  void clear_downguid();
  static const int kDownguidFieldNumber = 2;
  ::google::protobuf::uint64 downguid() const;
  void set_downguid(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:SetupEquipReq)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint64 upguid_;
  ::google::protobuf::uint64 downguid_;
  mutable int _cached_size_;
  friend struct ::protobuf_Msg_5fBag_2eproto::TableStruct;
  friend void ::protobuf_Msg_5fBag_2eproto::InitDefaultsSetupEquipReqImpl();
};
// -------------------------------------------------------------------

class SetupEquipAck : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SetupEquipAck) */ {
 public:
  SetupEquipAck();
  virtual ~SetupEquipAck();

  SetupEquipAck(const SetupEquipAck& from);

  inline SetupEquipAck& operator=(const SetupEquipAck& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SetupEquipAck(SetupEquipAck&& from) noexcept
    : SetupEquipAck() {
    *this = ::std::move(from);
  }

  inline SetupEquipAck& operator=(SetupEquipAck&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SetupEquipAck& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SetupEquipAck* internal_default_instance() {
    return reinterpret_cast<const SetupEquipAck*>(
               &_SetupEquipAck_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(SetupEquipAck* other);
  friend void swap(SetupEquipAck& a, SetupEquipAck& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SetupEquipAck* New() const PROTOBUF_FINAL { return New(NULL); }

  SetupEquipAck* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SetupEquipAck& from);
  void MergeFrom(const SetupEquipAck& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(SetupEquipAck* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // uint32 RetCode = 1;
  void clear_retcode();
  static const int kRetCodeFieldNumber = 1;
  ::google::protobuf::uint32 retcode() const;
  void set_retcode(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:SetupEquipAck)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 retcode_;
  mutable int _cached_size_;
  friend struct ::protobuf_Msg_5fBag_2eproto::TableStruct;
  friend void ::protobuf_Msg_5fBag_2eproto::InitDefaultsSetupEquipAckImpl();
};
// -------------------------------------------------------------------

class SetupPetReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SetupPetReq) */ {
 public:
  SetupPetReq();
  virtual ~SetupPetReq();

  SetupPetReq(const SetupPetReq& from);

  inline SetupPetReq& operator=(const SetupPetReq& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SetupPetReq(SetupPetReq&& from) noexcept
    : SetupPetReq() {
    *this = ::std::move(from);
  }

  inline SetupPetReq& operator=(SetupPetReq&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SetupPetReq& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SetupPetReq* internal_default_instance() {
    return reinterpret_cast<const SetupPetReq*>(
               &_SetupPetReq_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(SetupPetReq* other);
  friend void swap(SetupPetReq& a, SetupPetReq& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SetupPetReq* New() const PROTOBUF_FINAL { return New(NULL); }

  SetupPetReq* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SetupPetReq& from);
  void MergeFrom(const SetupPetReq& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(SetupPetReq* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // uint64 upguid = 1;
  void clear_upguid();
  static const int kUpguidFieldNumber = 1;
  ::google::protobuf::uint64 upguid() const;
  void set_upguid(::google::protobuf::uint64 value);

  // uint64 downguid = 2;
  void clear_downguid();
  static const int kDownguidFieldNumber = 2;
  ::google::protobuf::uint64 downguid() const;
  void set_downguid(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:SetupPetReq)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint64 upguid_;
  ::google::protobuf::uint64 downguid_;
  mutable int _cached_size_;
  friend struct ::protobuf_Msg_5fBag_2eproto::TableStruct;
  friend void ::protobuf_Msg_5fBag_2eproto::InitDefaultsSetupPetReqImpl();
};
// -------------------------------------------------------------------

class SetupPetAck : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SetupPetAck) */ {
 public:
  SetupPetAck();
  virtual ~SetupPetAck();

  SetupPetAck(const SetupPetAck& from);

  inline SetupPetAck& operator=(const SetupPetAck& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SetupPetAck(SetupPetAck&& from) noexcept
    : SetupPetAck() {
    *this = ::std::move(from);
  }

  inline SetupPetAck& operator=(SetupPetAck&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SetupPetAck& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SetupPetAck* internal_default_instance() {
    return reinterpret_cast<const SetupPetAck*>(
               &_SetupPetAck_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(SetupPetAck* other);
  friend void swap(SetupPetAck& a, SetupPetAck& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SetupPetAck* New() const PROTOBUF_FINAL { return New(NULL); }

  SetupPetAck* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SetupPetAck& from);
  void MergeFrom(const SetupPetAck& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(SetupPetAck* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // uint32 RetCode = 1;
  void clear_retcode();
  static const int kRetCodeFieldNumber = 1;
  ::google::protobuf::uint32 retcode() const;
  void set_retcode(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:SetupPetAck)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 retcode_;
  mutable int _cached_size_;
  friend struct ::protobuf_Msg_5fBag_2eproto::TableStruct;
  friend void ::protobuf_Msg_5fBag_2eproto::InitDefaultsSetupPetAckImpl();
};
// -------------------------------------------------------------------

class SetupPartnerReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SetupPartnerReq) */ {
 public:
  SetupPartnerReq();
  virtual ~SetupPartnerReq();

  SetupPartnerReq(const SetupPartnerReq& from);

  inline SetupPartnerReq& operator=(const SetupPartnerReq& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SetupPartnerReq(SetupPartnerReq&& from) noexcept
    : SetupPartnerReq() {
    *this = ::std::move(from);
  }

  inline SetupPartnerReq& operator=(SetupPartnerReq&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SetupPartnerReq& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SetupPartnerReq* internal_default_instance() {
    return reinterpret_cast<const SetupPartnerReq*>(
               &_SetupPartnerReq_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    4;

  void Swap(SetupPartnerReq* other);
  friend void swap(SetupPartnerReq& a, SetupPartnerReq& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SetupPartnerReq* New() const PROTOBUF_FINAL { return New(NULL); }

  SetupPartnerReq* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SetupPartnerReq& from);
  void MergeFrom(const SetupPartnerReq& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(SetupPartnerReq* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // uint64 upguid = 1;
  void clear_upguid();
  static const int kUpguidFieldNumber = 1;
  ::google::protobuf::uint64 upguid() const;
  void set_upguid(::google::protobuf::uint64 value);

  // uint64 downguid = 2;
  void clear_downguid();
  static const int kDownguidFieldNumber = 2;
  ::google::protobuf::uint64 downguid() const;
  void set_downguid(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:SetupPartnerReq)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint64 upguid_;
  ::google::protobuf::uint64 downguid_;
  mutable int _cached_size_;
  friend struct ::protobuf_Msg_5fBag_2eproto::TableStruct;
  friend void ::protobuf_Msg_5fBag_2eproto::InitDefaultsSetupPartnerReqImpl();
};
// -------------------------------------------------------------------

class SetupPartnerAck : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SetupPartnerAck) */ {
 public:
  SetupPartnerAck();
  virtual ~SetupPartnerAck();

  SetupPartnerAck(const SetupPartnerAck& from);

  inline SetupPartnerAck& operator=(const SetupPartnerAck& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SetupPartnerAck(SetupPartnerAck&& from) noexcept
    : SetupPartnerAck() {
    *this = ::std::move(from);
  }

  inline SetupPartnerAck& operator=(SetupPartnerAck&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SetupPartnerAck& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SetupPartnerAck* internal_default_instance() {
    return reinterpret_cast<const SetupPartnerAck*>(
               &_SetupPartnerAck_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    5;

  void Swap(SetupPartnerAck* other);
  friend void swap(SetupPartnerAck& a, SetupPartnerAck& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SetupPartnerAck* New() const PROTOBUF_FINAL { return New(NULL); }

  SetupPartnerAck* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SetupPartnerAck& from);
  void MergeFrom(const SetupPartnerAck& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(SetupPartnerAck* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // uint32 RetCode = 1;
  void clear_retcode();
  static const int kRetCodeFieldNumber = 1;
  ::google::protobuf::uint32 retcode() const;
  void set_retcode(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:SetupPartnerAck)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 retcode_;
  mutable int _cached_size_;
  friend struct ::protobuf_Msg_5fBag_2eproto::TableStruct;
  friend void ::protobuf_Msg_5fBag_2eproto::InitDefaultsSetupPartnerAckImpl();
};
// -------------------------------------------------------------------

class SetupMountReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SetupMountReq) */ {
 public:
  SetupMountReq();
  virtual ~SetupMountReq();

  SetupMountReq(const SetupMountReq& from);

  inline SetupMountReq& operator=(const SetupMountReq& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SetupMountReq(SetupMountReq&& from) noexcept
    : SetupMountReq() {
    *this = ::std::move(from);
  }

  inline SetupMountReq& operator=(SetupMountReq&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SetupMountReq& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SetupMountReq* internal_default_instance() {
    return reinterpret_cast<const SetupMountReq*>(
               &_SetupMountReq_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    6;

  void Swap(SetupMountReq* other);
  friend void swap(SetupMountReq& a, SetupMountReq& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SetupMountReq* New() const PROTOBUF_FINAL { return New(NULL); }

  SetupMountReq* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SetupMountReq& from);
  void MergeFrom(const SetupMountReq& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(SetupMountReq* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // uint64 upguid = 1;
  void clear_upguid();
  static const int kUpguidFieldNumber = 1;
  ::google::protobuf::uint64 upguid() const;
  void set_upguid(::google::protobuf::uint64 value);

  // uint64 downguid = 2;
  void clear_downguid();
  static const int kDownguidFieldNumber = 2;
  ::google::protobuf::uint64 downguid() const;
  void set_downguid(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:SetupMountReq)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint64 upguid_;
  ::google::protobuf::uint64 downguid_;
  mutable int _cached_size_;
  friend struct ::protobuf_Msg_5fBag_2eproto::TableStruct;
  friend void ::protobuf_Msg_5fBag_2eproto::InitDefaultsSetupMountReqImpl();
};
// -------------------------------------------------------------------

class SetupMountAck : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SetupMountAck) */ {
 public:
  SetupMountAck();
  virtual ~SetupMountAck();

  SetupMountAck(const SetupMountAck& from);

  inline SetupMountAck& operator=(const SetupMountAck& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SetupMountAck(SetupMountAck&& from) noexcept
    : SetupMountAck() {
    *this = ::std::move(from);
  }

  inline SetupMountAck& operator=(SetupMountAck&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SetupMountAck& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SetupMountAck* internal_default_instance() {
    return reinterpret_cast<const SetupMountAck*>(
               &_SetupMountAck_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    7;

  void Swap(SetupMountAck* other);
  friend void swap(SetupMountAck& a, SetupMountAck& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SetupMountAck* New() const PROTOBUF_FINAL { return New(NULL); }

  SetupMountAck* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SetupMountAck& from);
  void MergeFrom(const SetupMountAck& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(SetupMountAck* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // uint32 RetCode = 1;
  void clear_retcode();
  static const int kRetCodeFieldNumber = 1;
  ::google::protobuf::uint32 retcode() const;
  void set_retcode(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:SetupMountAck)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 retcode_;
  mutable int _cached_size_;
  friend struct ::protobuf_Msg_5fBag_2eproto::TableStruct;
  friend void ::protobuf_Msg_5fBag_2eproto::InitDefaultsSetupMountAckImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SetupEquipReq

// uint64 upguid = 1;
inline void SetupEquipReq::clear_upguid() {
  upguid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 SetupEquipReq::upguid() const {
  // @@protoc_insertion_point(field_get:SetupEquipReq.upguid)
  return upguid_;
}
inline void SetupEquipReq::set_upguid(::google::protobuf::uint64 value) {
  
  upguid_ = value;
  // @@protoc_insertion_point(field_set:SetupEquipReq.upguid)
}

// uint64 downguid = 2;
inline void SetupEquipReq::clear_downguid() {
  downguid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 SetupEquipReq::downguid() const {
  // @@protoc_insertion_point(field_get:SetupEquipReq.downguid)
  return downguid_;
}
inline void SetupEquipReq::set_downguid(::google::protobuf::uint64 value) {
  
  downguid_ = value;
  // @@protoc_insertion_point(field_set:SetupEquipReq.downguid)
}

// -------------------------------------------------------------------

// SetupEquipAck

// uint32 RetCode = 1;
inline void SetupEquipAck::clear_retcode() {
  retcode_ = 0u;
}
inline ::google::protobuf::uint32 SetupEquipAck::retcode() const {
  // @@protoc_insertion_point(field_get:SetupEquipAck.RetCode)
  return retcode_;
}
inline void SetupEquipAck::set_retcode(::google::protobuf::uint32 value) {
  
  retcode_ = value;
  // @@protoc_insertion_point(field_set:SetupEquipAck.RetCode)
}

// -------------------------------------------------------------------

// SetupPetReq

// uint64 upguid = 1;
inline void SetupPetReq::clear_upguid() {
  upguid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 SetupPetReq::upguid() const {
  // @@protoc_insertion_point(field_get:SetupPetReq.upguid)
  return upguid_;
}
inline void SetupPetReq::set_upguid(::google::protobuf::uint64 value) {
  
  upguid_ = value;
  // @@protoc_insertion_point(field_set:SetupPetReq.upguid)
}

// uint64 downguid = 2;
inline void SetupPetReq::clear_downguid() {
  downguid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 SetupPetReq::downguid() const {
  // @@protoc_insertion_point(field_get:SetupPetReq.downguid)
  return downguid_;
}
inline void SetupPetReq::set_downguid(::google::protobuf::uint64 value) {
  
  downguid_ = value;
  // @@protoc_insertion_point(field_set:SetupPetReq.downguid)
}

// -------------------------------------------------------------------

// SetupPetAck

// uint32 RetCode = 1;
inline void SetupPetAck::clear_retcode() {
  retcode_ = 0u;
}
inline ::google::protobuf::uint32 SetupPetAck::retcode() const {
  // @@protoc_insertion_point(field_get:SetupPetAck.RetCode)
  return retcode_;
}
inline void SetupPetAck::set_retcode(::google::protobuf::uint32 value) {
  
  retcode_ = value;
  // @@protoc_insertion_point(field_set:SetupPetAck.RetCode)
}

// -------------------------------------------------------------------

// SetupPartnerReq

// uint64 upguid = 1;
inline void SetupPartnerReq::clear_upguid() {
  upguid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 SetupPartnerReq::upguid() const {
  // @@protoc_insertion_point(field_get:SetupPartnerReq.upguid)
  return upguid_;
}
inline void SetupPartnerReq::set_upguid(::google::protobuf::uint64 value) {
  
  upguid_ = value;
  // @@protoc_insertion_point(field_set:SetupPartnerReq.upguid)
}

// uint64 downguid = 2;
inline void SetupPartnerReq::clear_downguid() {
  downguid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 SetupPartnerReq::downguid() const {
  // @@protoc_insertion_point(field_get:SetupPartnerReq.downguid)
  return downguid_;
}
inline void SetupPartnerReq::set_downguid(::google::protobuf::uint64 value) {
  
  downguid_ = value;
  // @@protoc_insertion_point(field_set:SetupPartnerReq.downguid)
}

// -------------------------------------------------------------------

// SetupPartnerAck

// uint32 RetCode = 1;
inline void SetupPartnerAck::clear_retcode() {
  retcode_ = 0u;
}
inline ::google::protobuf::uint32 SetupPartnerAck::retcode() const {
  // @@protoc_insertion_point(field_get:SetupPartnerAck.RetCode)
  return retcode_;
}
inline void SetupPartnerAck::set_retcode(::google::protobuf::uint32 value) {
  
  retcode_ = value;
  // @@protoc_insertion_point(field_set:SetupPartnerAck.RetCode)
}

// -------------------------------------------------------------------

// SetupMountReq

// uint64 upguid = 1;
inline void SetupMountReq::clear_upguid() {
  upguid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 SetupMountReq::upguid() const {
  // @@protoc_insertion_point(field_get:SetupMountReq.upguid)
  return upguid_;
}
inline void SetupMountReq::set_upguid(::google::protobuf::uint64 value) {
  
  upguid_ = value;
  // @@protoc_insertion_point(field_set:SetupMountReq.upguid)
}

// uint64 downguid = 2;
inline void SetupMountReq::clear_downguid() {
  downguid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 SetupMountReq::downguid() const {
  // @@protoc_insertion_point(field_get:SetupMountReq.downguid)
  return downguid_;
}
inline void SetupMountReq::set_downguid(::google::protobuf::uint64 value) {
  
  downguid_ = value;
  // @@protoc_insertion_point(field_set:SetupMountReq.downguid)
}

// -------------------------------------------------------------------

// SetupMountAck

// uint32 RetCode = 1;
inline void SetupMountAck::clear_retcode() {
  retcode_ = 0u;
}
inline ::google::protobuf::uint32 SetupMountAck::retcode() const {
  // @@protoc_insertion_point(field_get:SetupMountAck.RetCode)
  return retcode_;
}
inline void SetupMountAck::set_retcode(::google::protobuf::uint32 value) {
  
  retcode_ = value;
  // @@protoc_insertion_point(field_set:SetupMountAck.RetCode)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Msg_5fBag_2eproto__INCLUDED
