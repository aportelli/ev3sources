
/* File: eggdbusproperties.h
 *
 * Generated by eggdbus-binding-tool 0.6. Do not edit.
 */

#ifndef __EGG_DBUS_PROPERTIES_H
#define __EGG_DBUS_PROPERTIES_H

#include <glib-object.h>
#include <gio/gio.h>
#include <eggdbus/eggdbustypes.h>
#include <eggdbus/eggdbusinterface.h>
#include <eggdbus/eggdbusinterfaceproxy.h>
#include <eggdbus/eggdbusrequestnameflags.h>
#include <eggdbus/eggdbusrequestnamereply.h>
#include <eggdbus/eggdbusreleasenamereply.h>
#include <eggdbus/eggdbusstartservicebynamereply.h>

G_BEGIN_DECLS

#define EGG_DBUS_TYPE_PROPERTIES         (egg_dbus_properties_get_type())
#define EGG_DBUS_PROPERTIES(o)           (G_TYPE_CHECK_INSTANCE_CAST ((o), EGG_DBUS_TYPE_PROPERTIES, EggDBusProperties))
#define EGG_DBUS_IS_PROPERTIES(o)        (G_TYPE_CHECK_INSTANCE_TYPE ((o), EGG_DBUS_TYPE_PROPERTIES))
#define EGG_DBUS_PROPERTIES_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE((o), EGG_DBUS_TYPE_PROPERTIES, EggDBusPropertiesIface))

#if 0
typedef struct _EggDBusProperties EggDBusProperties; /* Dummy typedef */
#endif
typedef struct _EggDBusPropertiesIface EggDBusPropertiesIface;

/**
 * EGG_DBUS_QUERY_INTERFACE_PROPERTIES:
 * @object_proxy: A #EggDBusObjectProxy.
 *
 * Convenience macro to get an interface proxy for the remote object represented
 * by @object_proxy. See egg_dbus_object_proxy_query_interface() for details.
 *
 * Returns: An instance derived from #EggDBusInterfaceProxy that implements the
 *          #EggDBusProperties interface. This instance can be used to access the
 *          <link linkend="eggdbus-interface-org.freedesktop.DBus.Properties">org.freedesktop.DBus.Properties</link> D-Bus interface on the remote
 *          object represented by @object_proxy. Do not ref or unref the returned instance,
 *          it is owned by @object_proxy.
 */
#define EGG_DBUS_QUERY_INTERFACE_PROPERTIES(object_proxy) (EGG_DBUS_PROPERTIES (egg_dbus_object_proxy_query_interface (object_proxy, EGG_DBUS_TYPE_PROPERTIES)))

/**
 * EggDBusPropertiesIface:
 * @g_iface: The parent interface.
 * @handle_get: Gets the value of the property with name @property_name on the interface with name @interface_name.
 * @handle_get_all: Gets all properties on the interface with the name @interface_name.
 * @handle_set: Sets the value of the property with name @property_name on the interface with name @interface_name to @value.
 *
 * Interface VTable for implementing the <link linkend="eggdbus-interface-org.freedesktop.DBus.Properties">org.freedesktop.DBus.Properties</link> D-Bus interface.
 */
struct _EggDBusPropertiesIface
{
  EggDBusInterfaceIface g_iface;

  void (* handle_get) (
      EggDBusProperties *instance,
      const gchar *interface_name,
      const gchar *property_name,
      EggDBusMethodInvocation *method_invocation);

  void (* handle_get_all) (
      EggDBusProperties *instance,
      const gchar *interface_name,
      EggDBusMethodInvocation *method_invocation);

  void (* handle_set) (
      EggDBusProperties *instance,
      const gchar *interface_name,
      const gchar *property_name,
      EggDBusVariant *value,
      EggDBusMethodInvocation *method_invocation);
};

GType egg_dbus_properties_get_type (void) G_GNUC_CONST;

gboolean egg_dbus_properties_get_sync (
    EggDBusProperties *instance,
    EggDBusCallFlags call_flags,
    const gchar *interface_name,
    const gchar *property_name,
    EggDBusVariant **out_value,
    GCancellable *cancellable,
    GError **error);

gboolean egg_dbus_properties_get_all_sync (
    EggDBusProperties *instance,
    EggDBusCallFlags call_flags,
    const gchar *interface_name,
    EggDBusHashMap **out_properties,
    GCancellable *cancellable,
    GError **error);

gboolean egg_dbus_properties_set_sync (
    EggDBusProperties *instance,
    EggDBusCallFlags call_flags,
    const gchar *interface_name,
    const gchar *property_name,
    EggDBusVariant *value,
    GCancellable *cancellable,
    GError **error);

guint egg_dbus_properties_get (
    EggDBusProperties *instance,
    EggDBusCallFlags call_flags,
    const gchar *interface_name,
    const gchar *property_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean egg_dbus_properties_get_finish (
    EggDBusProperties *instance,
    EggDBusVariant **out_value,
    GAsyncResult *res,
    GError **error);

guint egg_dbus_properties_get_all (
    EggDBusProperties *instance,
    EggDBusCallFlags call_flags,
    const gchar *interface_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean egg_dbus_properties_get_all_finish (
    EggDBusProperties *instance,
    EggDBusHashMap **out_properties,
    GAsyncResult *res,
    GError **error);

guint egg_dbus_properties_set (
    EggDBusProperties *instance,
    EggDBusCallFlags call_flags,
    const gchar *interface_name,
    const gchar *property_name,
    EggDBusVariant *value,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean egg_dbus_properties_set_finish (
    EggDBusProperties *instance,
    GAsyncResult *res,
    GError **error);

void egg_dbus_properties_handle_get_finish (
    EggDBusMethodInvocation *method_invocation,
    EggDBusVariant *out_value);

void egg_dbus_properties_handle_get_all_finish (
    EggDBusMethodInvocation *method_invocation,
    EggDBusHashMap *out_properties);

void egg_dbus_properties_handle_set_finish (
    EggDBusMethodInvocation *method_invocation);

void egg_dbus_properties_emit_signal_egg_dbus_changed (
    EggDBusProperties *instance,
    const gchar *destination,
    const gchar *interface_name,
    EggDBusHashMap *changed_properties);

G_END_DECLS

#endif /* __EGG_DBUS_PROPERTIES_H */
