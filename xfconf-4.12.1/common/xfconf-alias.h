/* Generated by make-exo-alias.pl. Do not edit this file. */

#ifdef HAVE_GNUC_VISIBILITY

#include <glib.h>

#define IN_HEADER defined
#define IN_SOURCE(x) 1

#if IN_HEADER(__XFCONF_H__)
#if IN_SOURCE(__XFCONF_C__)
extern __typeof (xfconf_init) IA__xfconf_init __attribute((visibility("hidden")));
#define xfconf_init IA__xfconf_init

extern __typeof (xfconf_shutdown) IA__xfconf_shutdown __attribute((visibility("hidden")));
#define xfconf_shutdown IA__xfconf_shutdown

extern __typeof (xfconf_named_struct_register) IA__xfconf_named_struct_register __attribute((visibility("hidden")));
#define xfconf_named_struct_register IA__xfconf_named_struct_register

extern __typeof (xfconf_array_free) IA__xfconf_array_free __attribute((visibility("hidden")));
#define xfconf_array_free IA__xfconf_array_free

#endif
#endif
#if IN_HEADER(__XFCONF_ERRORS_H__)
#if IN_SOURCE(__XFCONF_ERRORS_C__)
extern __typeof (xfconf_error_get_type) IA__xfconf_error_get_type __attribute((visibility("hidden"))) G_GNUC_CONST;
#define xfconf_error_get_type IA__xfconf_error_get_type

extern __typeof (xfconf_get_error_quark) IA__xfconf_get_error_quark __attribute((visibility("hidden")));
#define xfconf_get_error_quark IA__xfconf_get_error_quark

#endif
#endif
#if IN_HEADER(__XFCONF_TYPES_H__)
#if IN_SOURCE(__XFCONF_TYPES_C__)
extern __typeof (xfconf_uint16_get_type) IA__xfconf_uint16_get_type __attribute((visibility("hidden"))) G_GNUC_CONST;
#define xfconf_uint16_get_type IA__xfconf_uint16_get_type

extern __typeof (xfconf_g_value_get_uint16) IA__xfconf_g_value_get_uint16 __attribute((visibility("hidden")));
#define xfconf_g_value_get_uint16 IA__xfconf_g_value_get_uint16

extern __typeof (xfconf_g_value_set_uint16) IA__xfconf_g_value_set_uint16 __attribute((visibility("hidden")));
#define xfconf_g_value_set_uint16 IA__xfconf_g_value_set_uint16

extern __typeof (xfconf_int16_get_type) IA__xfconf_int16_get_type __attribute((visibility("hidden"))) G_GNUC_CONST;
#define xfconf_int16_get_type IA__xfconf_int16_get_type

extern __typeof (xfconf_g_value_get_int16) IA__xfconf_g_value_get_int16 __attribute((visibility("hidden")));
#define xfconf_g_value_get_int16 IA__xfconf_g_value_get_int16

extern __typeof (xfconf_g_value_set_int16) IA__xfconf_g_value_set_int16 __attribute((visibility("hidden")));
#define xfconf_g_value_set_int16 IA__xfconf_g_value_set_int16

#endif
#endif
#if IN_HEADER(__XFCONF_CHANNEL_H__)
#if IN_SOURCE(__XFCONF_CHANNEL_C__)
extern __typeof (xfconf_channel_get_type) IA__xfconf_channel_get_type __attribute((visibility("hidden"))) G_GNUC_CONST;
#define xfconf_channel_get_type IA__xfconf_channel_get_type

extern __typeof (xfconf_channel_get) IA__xfconf_channel_get __attribute((visibility("hidden")));
#define xfconf_channel_get IA__xfconf_channel_get

extern __typeof (xfconf_channel_new) IA__xfconf_channel_new __attribute((visibility("hidden")));
#define xfconf_channel_new IA__xfconf_channel_new

extern __typeof (xfconf_channel_new_with_property_base) IA__xfconf_channel_new_with_property_base __attribute((visibility("hidden")));
#define xfconf_channel_new_with_property_base IA__xfconf_channel_new_with_property_base

extern __typeof (xfconf_channel_has_property) IA__xfconf_channel_has_property __attribute((visibility("hidden")));
#define xfconf_channel_has_property IA__xfconf_channel_has_property

extern __typeof (xfconf_channel_is_property_locked) IA__xfconf_channel_is_property_locked __attribute((visibility("hidden")));
#define xfconf_channel_is_property_locked IA__xfconf_channel_is_property_locked

extern __typeof (xfconf_channel_reset_property) IA__xfconf_channel_reset_property __attribute((visibility("hidden")));
#define xfconf_channel_reset_property IA__xfconf_channel_reset_property

extern __typeof (xfconf_channel_get_properties) IA__xfconf_channel_get_properties __attribute((visibility("hidden")));
#define xfconf_channel_get_properties IA__xfconf_channel_get_properties

extern __typeof (xfconf_channel_get_string) IA__xfconf_channel_get_string __attribute((visibility("hidden")));
#define xfconf_channel_get_string IA__xfconf_channel_get_string

extern __typeof (xfconf_channel_set_string) IA__xfconf_channel_set_string __attribute((visibility("hidden")));
#define xfconf_channel_set_string IA__xfconf_channel_set_string

extern __typeof (xfconf_channel_get_int) IA__xfconf_channel_get_int __attribute((visibility("hidden")));
#define xfconf_channel_get_int IA__xfconf_channel_get_int

extern __typeof (xfconf_channel_set_int) IA__xfconf_channel_set_int __attribute((visibility("hidden")));
#define xfconf_channel_set_int IA__xfconf_channel_set_int

extern __typeof (xfconf_channel_get_uint) IA__xfconf_channel_get_uint __attribute((visibility("hidden")));
#define xfconf_channel_get_uint IA__xfconf_channel_get_uint

extern __typeof (xfconf_channel_set_uint) IA__xfconf_channel_set_uint __attribute((visibility("hidden")));
#define xfconf_channel_set_uint IA__xfconf_channel_set_uint

extern __typeof (xfconf_channel_get_uint64) IA__xfconf_channel_get_uint64 __attribute((visibility("hidden")));
#define xfconf_channel_get_uint64 IA__xfconf_channel_get_uint64

extern __typeof (xfconf_channel_set_uint64) IA__xfconf_channel_set_uint64 __attribute((visibility("hidden")));
#define xfconf_channel_set_uint64 IA__xfconf_channel_set_uint64

extern __typeof (xfconf_channel_get_double) IA__xfconf_channel_get_double __attribute((visibility("hidden")));
#define xfconf_channel_get_double IA__xfconf_channel_get_double

extern __typeof (xfconf_channel_set_double) IA__xfconf_channel_set_double __attribute((visibility("hidden")));
#define xfconf_channel_set_double IA__xfconf_channel_set_double

extern __typeof (xfconf_channel_get_bool) IA__xfconf_channel_get_bool __attribute((visibility("hidden")));
#define xfconf_channel_get_bool IA__xfconf_channel_get_bool

extern __typeof (xfconf_channel_set_bool) IA__xfconf_channel_set_bool __attribute((visibility("hidden")));
#define xfconf_channel_set_bool IA__xfconf_channel_set_bool

extern __typeof (xfconf_channel_get_string_list) IA__xfconf_channel_get_string_list __attribute((visibility("hidden")));
#define xfconf_channel_get_string_list IA__xfconf_channel_get_string_list

extern __typeof (xfconf_channel_set_string_list) IA__xfconf_channel_set_string_list __attribute((visibility("hidden")));
#define xfconf_channel_set_string_list IA__xfconf_channel_set_string_list

extern __typeof (xfconf_channel_get_property) IA__xfconf_channel_get_property __attribute((visibility("hidden")));
#define xfconf_channel_get_property IA__xfconf_channel_get_property

extern __typeof (xfconf_channel_set_property) IA__xfconf_channel_set_property __attribute((visibility("hidden")));
#define xfconf_channel_set_property IA__xfconf_channel_set_property

extern __typeof (xfconf_channel_get_array) IA__xfconf_channel_get_array __attribute((visibility("hidden")));
#define xfconf_channel_get_array IA__xfconf_channel_get_array

extern __typeof (xfconf_channel_get_array_valist) IA__xfconf_channel_get_array_valist __attribute((visibility("hidden")));
#define xfconf_channel_get_array_valist IA__xfconf_channel_get_array_valist

extern __typeof (xfconf_channel_get_arrayv) IA__xfconf_channel_get_arrayv __attribute((visibility("hidden")));
#define xfconf_channel_get_arrayv IA__xfconf_channel_get_arrayv

extern __typeof (xfconf_channel_set_array) IA__xfconf_channel_set_array __attribute((visibility("hidden")));
#define xfconf_channel_set_array IA__xfconf_channel_set_array

extern __typeof (xfconf_channel_set_array_valist) IA__xfconf_channel_set_array_valist __attribute((visibility("hidden")));
#define xfconf_channel_set_array_valist IA__xfconf_channel_set_array_valist

extern __typeof (xfconf_channel_set_arrayv) IA__xfconf_channel_set_arrayv __attribute((visibility("hidden")));
#define xfconf_channel_set_arrayv IA__xfconf_channel_set_arrayv

extern __typeof (xfconf_channel_get_named_struct) IA__xfconf_channel_get_named_struct __attribute((visibility("hidden")));
#define xfconf_channel_get_named_struct IA__xfconf_channel_get_named_struct

extern __typeof (xfconf_channel_set_named_struct) IA__xfconf_channel_set_named_struct __attribute((visibility("hidden")));
#define xfconf_channel_set_named_struct IA__xfconf_channel_set_named_struct

extern __typeof (xfconf_channel_get_struct) IA__xfconf_channel_get_struct __attribute((visibility("hidden")));
#define xfconf_channel_get_struct IA__xfconf_channel_get_struct

extern __typeof (xfconf_channel_get_struct_valist) IA__xfconf_channel_get_struct_valist __attribute((visibility("hidden")));
#define xfconf_channel_get_struct_valist IA__xfconf_channel_get_struct_valist

extern __typeof (xfconf_channel_get_structv) IA__xfconf_channel_get_structv __attribute((visibility("hidden")));
#define xfconf_channel_get_structv IA__xfconf_channel_get_structv

extern __typeof (xfconf_channel_set_struct) IA__xfconf_channel_set_struct __attribute((visibility("hidden")));
#define xfconf_channel_set_struct IA__xfconf_channel_set_struct

extern __typeof (xfconf_channel_set_struct_valist) IA__xfconf_channel_set_struct_valist __attribute((visibility("hidden")));
#define xfconf_channel_set_struct_valist IA__xfconf_channel_set_struct_valist

extern __typeof (xfconf_channel_set_structv) IA__xfconf_channel_set_structv __attribute((visibility("hidden")));
#define xfconf_channel_set_structv IA__xfconf_channel_set_structv

extern __typeof (xfconf_list_channels) IA__xfconf_list_channels __attribute((visibility("hidden")));
#define xfconf_list_channels IA__xfconf_list_channels

#endif
#endif
#if IN_HEADER(__XFCONF_BINDING_H__)
#if IN_SOURCE(__XFCONF_BINDING_C__)
extern __typeof (xfconf_g_property_bind) IA__xfconf_g_property_bind __attribute((visibility("hidden")));
#define xfconf_g_property_bind IA__xfconf_g_property_bind

extern __typeof (xfconf_g_property_unbind) IA__xfconf_g_property_unbind __attribute((visibility("hidden")));
#define xfconf_g_property_unbind IA__xfconf_g_property_unbind

extern __typeof (xfconf_g_property_unbind_by_property) IA__xfconf_g_property_unbind_by_property __attribute((visibility("hidden")));
#define xfconf_g_property_unbind_by_property IA__xfconf_g_property_unbind_by_property

extern __typeof (xfconf_g_property_unbind_all) IA__xfconf_g_property_unbind_all __attribute((visibility("hidden")));
#define xfconf_g_property_unbind_all IA__xfconf_g_property_unbind_all

extern __typeof (xfconf_g_property_bind_gdkcolor) IA__xfconf_g_property_bind_gdkcolor __attribute((visibility("hidden")));
#define xfconf_g_property_bind_gdkcolor IA__xfconf_g_property_bind_gdkcolor

extern __typeof (xfconf_g_property_bind_gdkrgba) IA__xfconf_g_property_bind_gdkrgba __attribute((visibility("hidden")));
#define xfconf_g_property_bind_gdkrgba IA__xfconf_g_property_bind_gdkrgba

#endif
#endif

#endif /* HAVE_GNUC_VISIBILITY */
