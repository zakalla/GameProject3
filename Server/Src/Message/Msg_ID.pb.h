// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Msg_ID.proto

#ifndef PROTOBUF_Msg_5fID_2eproto__INCLUDED
#define PROTOBUF_Msg_5fID_2eproto__INCLUDED

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
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)

namespace protobuf_Msg_5fID_2eproto {
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
inline void InitDefaults() {
}
}  // namespace protobuf_Msg_5fID_2eproto

enum MessageID {
  MSG_BEGIN = 0,
  MSG_HEART = 1,
  MSG_CONNECT_SUCCESS = 2,
  MSG_DISCONNECT_NTY = 3,
  MSG_LOGINSVR_MSGID_BEGIN = 1000000,
  MSG_CHECK_VERSION_REQ = 1000001,
  MSG_CHECK_VERSION_ACK = 1000002,
  MSG_ACCOUNT_REG_REQ = 1000003,
  MSG_ACCOUNT_REG_ACK = 1000004,
  MSG_ACCOUNT_LOGIN_REQ = 1000005,
  MSG_ACCOUNT_LOGIN_ACK = 1000006,
  MSG_ACCOUNT_LOGINREG_REQ = 1000007,
  MSG_ACCOUNT_LOGINREG_ACK = 1000008,
  MSG_SERVER_LIST_REQ = 1000009,
  MSG_SERVER_LIST_ACK = 1000010,
  MSG_SELECT_SERVER_REQ = 1000011,
  MSG_SELECT_SERVER_ACK = 1000012,
  MSG_LOGIC_REGTO_LOGIN_REQ = 1000013,
  MSG_LOGIC_REGTO_LOGIN_ACK = 1000014,
  MSG_SEAL_ACCOUNT_REQ = 1000015,
  MSG_SEAL_ACCOUNT_ACK = 1000016,
  MSG_PHP_WEB_REQ = 1000017,
  MSG_PHP_WEB_ACK = 1000018,
  MSG_LOGINSVR_MSGID_END = 1999999,
  MSG_LOGICSVR_MSGID_BEGIN = 2000000,
  MSG_ROLE_LIST_REQ = 2000001,
  MSG_ROLE_LIST_ACK = 2000002,
  MSG_ROLE_CREATE_REQ = 2000003,
  MSG_ROLE_CREATE_ACK = 2000004,
  MSG_ROLE_DELETE_REQ = 2000005,
  MSG_ROLE_DELETE_ACK = 2000006,
  MSG_ROLE_LOGIN_REQ = 2000007,
  MSG_ROLE_LOGIN_ACK = 2000008,
  MSG_ROLE_LOGOUT_REQ = 2000009,
  MSG_ROLE_LOGOUT_ACK = 2000010,
  MSG_DATA_UPDATE = 2000011,
  MSG_GAME_REGTO_LOGIC_REQ = 2000012,
  MSG_GAME_REGTO_LOGIC_ACK = 2000013,
  MSG_NOTIFY_INTO_SCENE = 2000014,
  MSG_COPYINFO_REPORT_REQ = 2000016,
  MSG_MAIN_COPY_REQ = 2000017,
  MSG_MAIN_COPY_ACK = 2000018,
  MSG_COPY_ABORT_REQ = 2000019,
  MSG_COPY_ABORT_ACK = 2000020,
  MSG_BACK_TO_CITY_REQ = 2000021,
  MSG_BACK_TO_CITY_ACK = 2000022,
  MSG_BATTLE_RESULT_NTY = 2000023,
  MSG_MAINCOPY_RESULT_NTY = 2000024,
  MSG_ROLE_CHANG_NTY = 2000025,
  MSG_BAG_CHANGE_NTY = 2000026,
  MSG_PET_CHANGE_NTY = 2000027,
  MSG_EQUIP_CHANGE_NTY = 2000028,
  MSG_PARTNER_CHANGE_NTY = 2000029,
  MSG_MOUNT_CHANGE_NTY = 2000030,
  MSG_ROLE_OTHER_LOGIN_NTY = 2000031,
  MSG_CHAT_MESSAGE_REQ = 2000032,
  MSG_CHAT_MESSAGE_ACK = 2000033,
  MSG_CHAT_MESSAGE_NTY = 2000034,
  MSG_SETUP_EQUIP_REQ = 2000035,
  MSG_SETUP_EQUIP_ACK = 2000036,
  MSG_SETUP_PET_REQ = 2000037,
  MSG_SETUP_PET_ACK = 2000038,
  MSG_SETUP_PARTNER_REQ = 2000039,
  MSG_SETUP_PARTNER_ACK = 2000040,
  MSG_SETUP_MOUNT_REQ = 2000041,
  MSG_SETUP_MOUNT_ACK = 2000042,
  MSG_USE_ITEM_REQ = 2000043,
  MSG_USE_ITEM_ACK = 2000044,
  MSG_ROLE_RECONNECT_REQ = 2000045,
  MSG_ROLE_RECONNECT_ACK = 2000046,
  MSG_MAIL_CHANGE_NTY = 2000047,
  MSG_TASK_CHANGE_NTY = 2000048,
  MSG_LOGIC_REGTO_CENTER_REQ = 2000049,
  MSG_LOGIC_REGTO_CENTER_ACK = 2000050,
  MSG_BROAD_MESSAGE_NOTIFY = 2000051,
  MSG_GASVR_REGTO_PROXY_REQ = 2000052,
  MSG_GASVR_REGTO_PROXY_ACK = 2000053,
  MSG_LOGICSVR_MSGID_END = 2999999,
  MSG_SCENESVR_MSGID_BEGIN = 3000000,
  MSG_CREATE_SCENE_REQ = 3000001,
  MSG_CREATE_SCENE_ACK = 3000002,
  MSG_DELETE_SCENE_REQ = 3000003,
  MSG_DELETE_SCENE_ACK = 3000004,
  MSG_SCENE_DESTROY_REQ = 3000005,
  MSG_SCENE_DESTROY_ACK = 3000006,
  MSG_TRANSFER_DATA_REQ = 3000007,
  MSG_TRANSFER_DATA_ACK = 3000008,
  MSG_NOTIFY_ROLE_ENTER_REQ = 3000009,
  MSG_NOTIFY_ROLE_ENTER_ACK = 3000010,
  MSG_ENTER_SCENE_REQ = 3000011,
  MSG_ENTER_SCENE_ACK = 3000012,
  MSG_LEAVE_SCENE_REQ = 3000013,
  MSG_LEAVE_SCENE_ACK = 3000014,
  MSG_OBJECT_NEW_NTY = 3000015,
  MSG_OBJECT_ACTION_NTY = 3000016,
  MSG_OBJECT_REMOVE_NTY = 3000017,
  MSG_OBJECT_ACTION_REQ = 3000018,
  MSG_HEART_BEAT_REQ = 3000019,
  MSG_HEART_BEAT_ACK = 3000020,
  MSG_USE_HP_BOOTTLE_REQ = 3000021,
  MSG_USE_HP_BOOTTLE_ACK = 3000022,
  MSG_USE_MP_BOOTTLE_REQ = 3000023,
  MSG_USE_MP_BOOTTLE_ACK = 3000024,
  MSG_OBJECT_DIE_NOTIFY = 3000025,
  MSG_BATTLE_CHAT_REQ = 3000026,
  MSG_BATTLE_CHAT_ACK = 3000027,
  MSG_SCENESVR_MSGID_END = 3999999,
  MSG_REQ_LOGIN = 1001,
  MSG_ACK_LOGIN = 1002,
  MSG_REQ_LOGINSERVER = 1003,
  MSG_ACK_LOGINSERVER = 1004,
  MSG_REQ_GETSERVERLIST = 1005,
  MSG_ACK_GETSERVERLIST = 1006,
  MSG_REQ_CREATEROLE = 1007,
  MSG_ACK_CREATEROLE = 1008,
  MSG_REQ_ENTERGAME = 1009,
  MSG_ACK_ENTERGAME = 1010,
  MSG_REQ_REGISTER = 1011,
  MSG_ACK_REGISTER = 1012,
  MSG_REQ_SORTBAG = 1101,
  MSG_ACK_SORTBAG = 1102,
  MSG_REQ_USEITEM = 1103,
  MSG_ACK_USEITEM = 1104,
  MSG_REQ_DRESS_EQUIP = 1105,
  MSG_ACK_DRESS_EQUIP = 1106,
  MSG_REQ_UNLOAD_EQUIP = 1107,
  MSG_ACK_UNLOAD_EQUIP = 1108,
  MSG_REQ_DRESS_GEM = 1109,
  MSG_ACK_DRESS_GEM = 1110,
  MSG_REQ_UNLOAD_GEM = 1111,
  MSG_ACK_UNLOAD_GEM = 1112,
  MSG_REQ_COMPOSE_CHIP = 1113,
  MSG_ACK_COMPOSE_CHIP = 1114,
  MSG_REQ_STRENGTHEN_EQUIP = 1115,
  MSG_ACK_STRENGTHEN_EQUIP = 1116,
  MSG_REQ_ADVANCE_EQUIP = 1117,
  MSG_ACK_ADVANCE_EQUIP = 1118,
  MSG_REQ_UPSTAR_EQUIP = 1119,
  MSG_ACK_UPSTAR_EQUIP = 1120,
  MSG_REQ_STRENGTHEN_GEM = 1121,
  MSG_ACK_STRENGTHEN_GEM = 1122,
  MSG_REQ_ONEKEYTODRESSGEM = 1151,
  MSG_ACK_ONEKEYTODRESSGEM = 1152,
  MSG_REQ_ONEKEYTOUNLOADGEM = 1153,
  MSG_ACK_ONEKEYTOUNLOADGEM = 1154,
  MSG_REQ_GET_CHAPTERAWARD = 1201,
  MSG_ACK_GET_CHAPTERAWARD = 1202,
  MSG_REQ_BATTLE_CHECK = 1203,
  MSG_ACK_BATTLE_CHECK = 1204,
  MSG_REQ_PASSCOPY = 1205,
  MSG_ACK_PASSCOPY = 1206,
  MSG_REQ_SETMOUNT = 1301,
  MSG_ACK_SETMOUNT = 1302,
  MSG_REQ_CHARGE_RELICS = 1401,
  MSG_ACK_CHARGE_RELICS = 1402,
  MSG_REQ_UPGRADE_RELICS = 1403,
  MSG_ACK_UPGRADE_RELICS = 1404,
  MSG_REQ_BATTLE_RELICS = 1405,
  MSG_ACK_BATTLE_RELICS = 1406,
  MSG_REQ_UNLOAD_RELICS = 1407,
  MSG_ACK_UNLOAD_RELICS = 1408,
  MSG_REQ_BUY_STORE = 1501,
  MSG_ACK_BUY_STORE = 1502,
  MSG_REQ_UPGRADE_PET = 1601,
  MSG_ACK_UPGRADE_PET = 1602,
  MSG_REQ_BATTLE_PET = 1603,
  MSG_ACK_BATTLE_PET = 1604,
  MSG_REQ_UNLOAD_PET = 1605,
  MSG_ACK_UNLOAD_PET = 1606,
  MSG_REQ_CHANGE_PARTNER = 1607,
  MSG_ACK_CHANGE_PARTNER = 1608,
  MSG_REQ_ADVANVE_PARTNER = 1609,
  MSG_ACK_ADVANVE_PARTNER = 1610,
  MSG_REQ_UPGRADE_PARTNER = 1611,
  MSG_ACK_UPGRADE_PARTNER = 1612,
  MSG_REQ_SUBMIT_TASK = 1613,
  MSG_ACK_SUBMIT_TASK = 1614,
  MSG_REQ_ADDHERO_EXP = 2001,
  MSG_ACK_ADDHERO_EXP = 2002,
  MSG_ENTER_VIEW_NTF = 3001,
  MSG_LEAVE_VIEW_NTF = 3002,
  MessageID_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  MessageID_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool MessageID_IsValid(int value);
const MessageID MessageID_MIN = MSG_BEGIN;
const MessageID MessageID_MAX = MSG_SCENESVR_MSGID_END;
const int MessageID_ARRAYSIZE = MessageID_MAX + 1;

const ::google::protobuf::EnumDescriptor* MessageID_descriptor();
inline const ::std::string& MessageID_Name(MessageID value) {
  return ::google::protobuf::internal::NameOfEnum(
    MessageID_descriptor(), value);
}
inline bool MessageID_Parse(
    const ::std::string& name, MessageID* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MessageID>(
    MessageID_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::MessageID> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::MessageID>() {
  return ::MessageID_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Msg_5fID_2eproto__INCLUDED
