// generated 2008/4/17 0:39:07 CLT by cristi@cristi-laptop.(none)
// using glademm V2.6.0
//
// DO NOT EDIT THIS FILE ! It was created using
// glade-- /home/cristi/svn/CC69F/TreeGrowthSimulator.glade
// for gtk 2.10.11 and gtkmm 2.10.8
//
// Please modify the corresponding derived classes in ./src/GUIDialogAlgCentro.cc


#if defined __GNUC__ && __GNUC__ < 3
#error This program will crash if compiled with g++ 2.x
// see the dynamic_cast bug in the gtkmm FAQ
#endif //
#include "config.h"
#include <gtkmmconfig.h>
#if GTKMM_MAJOR_VERSION==2 && GTKMM_MINOR_VERSION<2
#include <sigc++/compatibility.h>
#define GMM_GTKMM_22_24(a,b) b
#else //gtkmm 2.2
#endif //
#include "GUIDialogAlgCentro_glade.hh"
#include <gdk/gdkkeysyms.h>
#include <gtkmm/accelgroup.h>

GUIDialogAlgCentro_glade::GUIDialogAlgCentro_glade(
)
{  GUIDialogAlgCentro = this;
   gmm_data = new GlademmData(get_accel_group());
   applybutton5 = Gtk::manage(new class Gtk::Button(Gtk::StockID("gtk-cancel")));
   cancelbutton7 = Gtk::manage(new class Gtk::Button(Gtk::StockID("gtk-apply")));
   label57 = Gtk::manage(new class Gtk::Label("<b>Centro del triángulo</b>"));
   label58 = Gtk::manage(new class Gtk::Label(""));
   comboAlgoritmoCentro = Gtk::manage(new class Gtk::Combo());
   label59 = Gtk::manage(new class Gtk::Label(""));
   vbox10 = Gtk::manage(new class Gtk::VBox(false, 0));
   applybutton5->set_flags(Gtk::CAN_FOCUS);
   applybutton5->set_flags(Gtk::CAN_DEFAULT);
   applybutton5->set_relief(Gtk::RELIEF_NORMAL);
   cancelbutton7->set_flags(Gtk::CAN_FOCUS);
   cancelbutton7->set_flags(Gtk::CAN_DEFAULT);
   cancelbutton7->set_relief(Gtk::RELIEF_NORMAL);
   GUIDialogAlgCentro->get_action_area()->property_layout_style().set_value(Gtk::BUTTONBOX_END);
   label57->set_alignment(0,0.5);
   label57->set_padding(0,0);
   label57->set_justify(Gtk::JUSTIFY_LEFT);
   label57->set_line_wrap(false);
   label57->set_use_markup(true);
   label57->set_selectable(false);
   label58->set_alignment(0.5,0.5);
   label58->set_padding(0,0);
   label58->set_justify(Gtk::JUSTIFY_LEFT);
   label58->set_line_wrap(false);
   label58->set_use_markup(false);
   label58->set_selectable(false);
   comboAlgoritmoCentro->get_entry()->set_flags(Gtk::CAN_FOCUS);
   comboAlgoritmoCentro->get_entry()->set_visibility(true);
   comboAlgoritmoCentro->get_entry()->set_editable(false);
   comboAlgoritmoCentro->get_entry()->set_max_length(0);
   comboAlgoritmoCentro->get_entry()->set_text("");
   comboAlgoritmoCentro->get_entry()->set_has_frame(true);
   comboAlgoritmoCentro->get_entry()->set_activates_default(false);
   comboAlgoritmoCentro->set_case_sensitive(false);
   {  
      
      const char * const items[] = { "Baricentro", 0 };
      comboAlgoritmoCentro->set_popdown_strings(items);
   }
   comboAlgoritmoCentro->get_entry()->set_text("");
   label59->set_alignment(0.5,0.5);
   label59->set_padding(0,0);
   label59->set_justify(Gtk::JUSTIFY_LEFT);
   label59->set_line_wrap(false);
   label59->set_use_markup(false);
   label59->set_selectable(false);
   vbox10->pack_start(*label57, Gtk::PACK_SHRINK, 0);
   vbox10->pack_start(*label58, Gtk::PACK_SHRINK, 0);
   vbox10->pack_start(*comboAlgoritmoCentro);
   vbox10->pack_start(*label59, Gtk::PACK_SHRINK, 0);
   GUIDialogAlgCentro->get_vbox()->set_homogeneous(false);
   GUIDialogAlgCentro->get_vbox()->set_spacing(0);
   GUIDialogAlgCentro->get_vbox()->pack_start(*vbox10);
   GUIDialogAlgCentro->set_title("Cuadrangular");
   GUIDialogAlgCentro->set_modal(false);
   GUIDialogAlgCentro->property_window_position().set_value(Gtk::WIN_POS_NONE);
   GUIDialogAlgCentro->set_resizable(true);
   GUIDialogAlgCentro->property_destroy_with_parent().set_value(false);
   GUIDialogAlgCentro->set_has_separator(true);
   GUIDialogAlgCentro->add_action_widget(*applybutton5, -6);
   GUIDialogAlgCentro->add_action_widget(*cancelbutton7, -10);
   applybutton5->show();
   cancelbutton7->show();
   label57->show();
   label58->show();
   comboAlgoritmoCentro->show();
   label59->show();
   vbox10->show();
   GUIDialogAlgCentro->show();
}

GUIDialogAlgCentro_glade::~GUIDialogAlgCentro_glade()
{  delete gmm_data;
}
