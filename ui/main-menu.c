/* main-menu.c generated by valac 0.21.1, the Vala compiler
 * generated from main-menu.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>


#define TYPE_MAIN_MENU (main_menu_get_type ())
#define MAIN_MENU(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_MAIN_MENU, MainMenu))
#define MAIN_MENU_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_MAIN_MENU, MainMenuClass))
#define IS_MAIN_MENU(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_MAIN_MENU))
#define IS_MAIN_MENU_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_MAIN_MENU))
#define MAIN_MENU_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_MAIN_MENU, MainMenuClass))

typedef struct _MainMenu MainMenu;
typedef struct _MainMenuClass MainMenuClass;
typedef struct _MainMenuPrivate MainMenuPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _MainMenu {
	GtkMenuBar parent_instance;
	MainMenuPrivate * priv;
};

struct _MainMenuClass {
	GtkMenuBarClass parent_class;
};


static gpointer main_menu_parent_class = NULL;

GType main_menu_get_type (void) G_GNUC_CONST;
enum  {
	MAIN_MENU_DUMMY_PROPERTY
};
MainMenu* main_menu_new (void);
MainMenu* main_menu_construct (GType object_type);
static void __lambda2_ (MainMenu* self);
static void ___lambda2__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self);
static void __lambda3_ (MainMenu* self);
static void ___lambda3__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self);
static void __lambda4_ (MainMenu* self);
static void ___lambda4__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self);
static void __lambda5_ (MainMenu* self);
static void ___lambda5__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self);
static void __lambda6_ (MainMenu* self);
static void ___lambda6__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self);
static void __lambda7_ (MainMenu* self);
static void ___lambda7__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self);


static void __lambda2_ (MainMenu* self) {
	g_signal_emit_by_name (self, "limb-leads-item-activated");
}


static void ___lambda2__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self) {
	__lambda2_ (self);
}


static void __lambda3_ (MainMenu* self) {
	g_signal_emit_by_name (self, "augment-limb-leads-item-activated");
}


static void ___lambda3__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self) {
	__lambda3_ (self);
}


static void __lambda4_ (MainMenu* self) {
	g_signal_emit_by_name (self, "chest-leads-item-activated");
}


static void ___lambda4__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self) {
	__lambda4_ (self);
}


static void __lambda5_ (MainMenu* self) {
	GtkMessageDialog* dialog = NULL;
	GtkMessageDialog* _tmp0_ = NULL;
	_tmp0_ = (GtkMessageDialog*) gtk_message_dialog_new (NULL, 0, GTK_MESSAGE_INFO, GTK_BUTTONS_OK, "ECG Viewer");
	g_object_ref_sink (_tmp0_);
	dialog = _tmp0_;
	gtk_dialog_run ((GtkDialog*) dialog);
	gtk_widget_destroy ((GtkWidget*) dialog);
	_g_object_unref0 (dialog);
}


static void ___lambda5__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self) {
	__lambda5_ (self);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void __lambda6_ (MainMenu* self) {
	GtkFileChooserDialog* file_chooser = NULL;
	GtkFileChooserDialog* _tmp0_ = NULL;
	GtkFileFilter* filter = NULL;
	GtkFileFilter* _tmp1_ = NULL;
	GtkFileFilter* _tmp2_ = NULL;
	GtkFileFilter* _tmp3_ = NULL;
	GtkFileFilter* _tmp4_ = NULL;
	GtkFileChooserDialog* _tmp5_ = NULL;
	GtkFileFilter* _tmp6_ = NULL;
	GtkFileFilter* _tmp7_ = NULL;
	GtkFileFilter* _tmp8_ = NULL;
	GtkFileFilter* _tmp9_ = NULL;
	GtkFileFilter* _tmp10_ = NULL;
	GtkFileChooserDialog* _tmp11_ = NULL;
	GtkFileFilter* _tmp12_ = NULL;
	GtkFileFilter* _tmp13_ = NULL;
	GtkFileChooserDialog* _tmp14_ = NULL;
	gint _tmp15_ = 0;
	GtkFileChooserDialog* _tmp19_ = NULL;
	_tmp0_ = (GtkFileChooserDialog*) gtk_file_chooser_dialog_new ("Open File", NULL, GTK_FILE_CHOOSER_ACTION_OPEN, GTK_STOCK_CANCEL, GTK_RESPONSE_CANCEL, GTK_STOCK_OPEN, GTK_RESPONSE_ACCEPT, NULL);
	g_object_ref_sink (_tmp0_);
	file_chooser = _tmp0_;
	_tmp1_ = gtk_file_filter_new ();
	g_object_ref_sink (_tmp1_);
	filter = _tmp1_;
	_tmp2_ = filter;
	gtk_file_filter_set_name (_tmp2_, "TLC 5000 DUMP (*.bin)");
	_tmp3_ = filter;
	gtk_file_filter_add_pattern (_tmp3_, "*.bin");
	_tmp4_ = filter;
	gtk_file_filter_add_pattern (_tmp4_, "*.BIN");
	_tmp5_ = file_chooser;
	_tmp6_ = filter;
	_tmp7_ = _g_object_ref0 (_tmp6_);
	gtk_file_chooser_add_filter ((GtkFileChooser*) _tmp5_, _tmp7_);
	_tmp8_ = gtk_file_filter_new ();
	g_object_ref_sink (_tmp8_);
	_g_object_unref0 (filter);
	filter = _tmp8_;
	_tmp9_ = filter;
	gtk_file_filter_set_name (_tmp9_, "TLC 5000 ECG (*.ecg)");
	_tmp10_ = filter;
	gtk_file_filter_add_pattern (_tmp10_, "*.ecg");
	_tmp11_ = file_chooser;
	_tmp12_ = filter;
	_tmp13_ = _g_object_ref0 (_tmp12_);
	gtk_file_chooser_add_filter ((GtkFileChooser*) _tmp11_, _tmp13_);
	_tmp14_ = file_chooser;
	_tmp15_ = gtk_dialog_run ((GtkDialog*) _tmp14_);
	if (_tmp15_ == ((gint) GTK_RESPONSE_ACCEPT)) {
		GtkFileChooserDialog* _tmp16_ = NULL;
		gchar* _tmp17_ = NULL;
		gchar* _tmp18_ = NULL;
		_tmp16_ = file_chooser;
		_tmp17_ = gtk_file_chooser_get_filename ((GtkFileChooser*) _tmp16_);
		_tmp18_ = _tmp17_;
		g_signal_emit_by_name (self, "open-file-item-activated", _tmp18_);
		_g_free0 (_tmp18_);
	}
	_tmp19_ = file_chooser;
	gtk_widget_destroy ((GtkWidget*) _tmp19_);
	_g_object_unref0 (filter);
	_g_object_unref0 (file_chooser);
}


static void ___lambda6__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self) {
	__lambda6_ (self);
}


static void __lambda7_ (MainMenu* self) {
	g_signal_emit_by_name (self, "quit-item-activated");
}


static void ___lambda7__gtk_menu_item_activate (GtkMenuItem* _sender, gpointer self) {
	__lambda7_ (self);
}


MainMenu* main_menu_construct (GType object_type) {
	MainMenu * self = NULL;
	GtkMenuItem* file_item = NULL;
	GtkMenuItem* _tmp0_ = NULL;
	GtkMenuItem* view_item = NULL;
	GtkMenuItem* _tmp1_ = NULL;
	GtkMenu* view_menu = NULL;
	GtkMenu* _tmp2_ = NULL;
	GtkMenuItem* limb_leads_item = NULL;
	GtkMenuItem* _tmp3_ = NULL;
	GtkMenuItem* augment_limb_leads_item = NULL;
	GtkMenuItem* _tmp4_ = NULL;
	GtkMenuItem* chest_leads_item = NULL;
	GtkMenuItem* _tmp5_ = NULL;
	GtkMenuItem* help_item = NULL;
	GtkMenuItem* _tmp6_ = NULL;
	GtkMenu* help_menu = NULL;
	GtkMenu* _tmp7_ = NULL;
	GtkMenuItem* about_item = NULL;
	GtkMenuItem* _tmp8_ = NULL;
	GtkMenu* file_menu = NULL;
	GtkMenu* _tmp9_ = NULL;
	GtkMenuItem* open_item = NULL;
	GtkMenuItem* _tmp10_ = NULL;
	GtkMenuItem* quit_item = NULL;
	GtkMenuItem* _tmp11_ = NULL;
	self = (MainMenu*) g_object_new (object_type, NULL);
	_tmp0_ = (GtkMenuItem*) gtk_menu_item_new_with_label ("File");
	g_object_ref_sink (_tmp0_);
	file_item = _tmp0_;
	_tmp1_ = (GtkMenuItem*) gtk_menu_item_new_with_label ("View");
	g_object_ref_sink (_tmp1_);
	view_item = _tmp1_;
	_tmp2_ = (GtkMenu*) gtk_menu_new ();
	g_object_ref_sink (_tmp2_);
	view_menu = _tmp2_;
	gtk_menu_item_set_submenu (view_item, (GtkWidget*) view_menu);
	_tmp3_ = (GtkMenuItem*) gtk_menu_item_new_with_label ("Limb Leads");
	g_object_ref_sink (_tmp3_);
	limb_leads_item = _tmp3_;
	gtk_container_add ((GtkContainer*) view_menu, (GtkWidget*) limb_leads_item);
	g_signal_connect_object (limb_leads_item, "activate", (GCallback) ___lambda2__gtk_menu_item_activate, self, 0);
	_tmp4_ = (GtkMenuItem*) gtk_menu_item_new_with_label ("Augment Limb Leads");
	g_object_ref_sink (_tmp4_);
	augment_limb_leads_item = _tmp4_;
	gtk_container_add ((GtkContainer*) view_menu, (GtkWidget*) augment_limb_leads_item);
	g_signal_connect_object (augment_limb_leads_item, "activate", (GCallback) ___lambda3__gtk_menu_item_activate, self, 0);
	_tmp5_ = (GtkMenuItem*) gtk_menu_item_new_with_label ("Chest Leads");
	g_object_ref_sink (_tmp5_);
	chest_leads_item = _tmp5_;
	gtk_container_add ((GtkContainer*) view_menu, (GtkWidget*) chest_leads_item);
	g_signal_connect_object (chest_leads_item, "activate", (GCallback) ___lambda4__gtk_menu_item_activate, self, 0);
	_tmp6_ = (GtkMenuItem*) gtk_menu_item_new_with_label ("Help");
	g_object_ref_sink (_tmp6_);
	help_item = _tmp6_;
	_tmp7_ = (GtkMenu*) gtk_menu_new ();
	g_object_ref_sink (_tmp7_);
	help_menu = _tmp7_;
	gtk_menu_item_set_submenu (help_item, (GtkWidget*) help_menu);
	_tmp8_ = (GtkMenuItem*) gtk_menu_item_new_with_label ("About");
	g_object_ref_sink (_tmp8_);
	about_item = _tmp8_;
	gtk_container_add ((GtkContainer*) help_menu, (GtkWidget*) about_item);
	g_signal_connect_object (about_item, "activate", (GCallback) ___lambda5__gtk_menu_item_activate, self, 0);
	_tmp9_ = (GtkMenu*) gtk_menu_new ();
	g_object_ref_sink (_tmp9_);
	file_menu = _tmp9_;
	gtk_menu_item_set_submenu (file_item, (GtkWidget*) file_menu);
	_tmp10_ = (GtkMenuItem*) gtk_menu_item_new_with_label ("Open");
	g_object_ref_sink (_tmp10_);
	open_item = _tmp10_;
	gtk_container_add ((GtkContainer*) file_menu, (GtkWidget*) open_item);
	g_signal_connect_object (open_item, "activate", (GCallback) ___lambda6__gtk_menu_item_activate, self, 0);
	_tmp11_ = (GtkMenuItem*) gtk_menu_item_new_with_label ("Quit");
	g_object_ref_sink (_tmp11_);
	quit_item = _tmp11_;
	g_signal_connect_object (quit_item, "activate", (GCallback) ___lambda7__gtk_menu_item_activate, self, 0);
	gtk_container_add ((GtkContainer*) file_menu, (GtkWidget*) quit_item);
	gtk_menu_shell_append ((GtkMenuShell*) self, (GtkWidget*) file_item);
	gtk_menu_shell_append ((GtkMenuShell*) self, (GtkWidget*) view_item);
	gtk_menu_shell_append ((GtkMenuShell*) self, (GtkWidget*) help_item);
	_g_object_unref0 (quit_item);
	_g_object_unref0 (open_item);
	_g_object_unref0 (file_menu);
	_g_object_unref0 (about_item);
	_g_object_unref0 (help_menu);
	_g_object_unref0 (help_item);
	_g_object_unref0 (chest_leads_item);
	_g_object_unref0 (augment_limb_leads_item);
	_g_object_unref0 (limb_leads_item);
	_g_object_unref0 (view_menu);
	_g_object_unref0 (view_item);
	_g_object_unref0 (file_item);
	return self;
}


MainMenu* main_menu_new (void) {
	return main_menu_construct (TYPE_MAIN_MENU);
}


static void main_menu_class_init (MainMenuClass * klass) {
	main_menu_parent_class = g_type_class_peek_parent (klass);
	g_signal_new ("quit_item_activated", TYPE_MAIN_MENU, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__VOID, G_TYPE_NONE, 0);
	g_signal_new ("open_file_item_activated", TYPE_MAIN_MENU, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__STRING, G_TYPE_NONE, 1, G_TYPE_STRING);
	g_signal_new ("limb_leads_item_activated", TYPE_MAIN_MENU, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__VOID, G_TYPE_NONE, 0);
	g_signal_new ("augment_limb_leads_item_activated", TYPE_MAIN_MENU, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__VOID, G_TYPE_NONE, 0);
	g_signal_new ("chest_leads_item_activated", TYPE_MAIN_MENU, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__VOID, G_TYPE_NONE, 0);
}


static void main_menu_instance_init (MainMenu * self) {
}


GType main_menu_get_type (void) {
	static volatile gsize main_menu_type_id__volatile = 0;
	if (g_once_init_enter (&main_menu_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (MainMenuClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) main_menu_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (MainMenu), 0, (GInstanceInitFunc) main_menu_instance_init, NULL };
		GType main_menu_type_id;
		main_menu_type_id = g_type_register_static (GTK_TYPE_MENU_BAR, "MainMenu", &g_define_type_info, 0);
		g_once_init_leave (&main_menu_type_id__volatile, main_menu_type_id);
	}
	return main_menu_type_id__volatile;
}



