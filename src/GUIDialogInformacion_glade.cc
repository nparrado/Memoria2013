// generated 2007/4/6 16:01:19 CLT by chupacabrasx@amd64-3000.(none)
// using glademm V2.6.0
//
// DO NOT EDIT THIS FILE ! It was created using
// glade-- /home/chupacabrasx/codeblocks/TreeGrowthSimulator/modeladorCambiosGL.glade
// for gtk 2.10.6 and gtkmm 2.10.6
//
// Please modify the corresponding derived classes in ./src/GUIDialogInformacion.cc


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
#include "GUIDialogInformacion_glade.hh"
#include <gdk/gdkkeysyms.h>
#include <gtkmm/accelgroup.h>

GUIDialogInformacion_glade::GUIDialogInformacion_glade(
)
{  GUIDialogInformacion = this;
   gmm_data = new GlademmData(get_accel_group());
   closebutton1 = Gtk::manage(new class Gtk::Button(Gtk::StockID("gtk-close")));
   label28 = Gtk::manage(new class Gtk::Label("Numero de Caras: "));
   labelNumCaras = Gtk::manage(new class Gtk::Label("0"));
   label30 = Gtk::manage(new class Gtk::Label("Numero de Arcos: "));
   label31 = Gtk::manage(new class Gtk::Label("Numero de Nodos: "));
   labelNumArcos = Gtk::manage(new class Gtk::Label("0"));
   labelNumNodos = Gtk::manage(new class Gtk::Label("0"));
   table5 = Gtk::manage(new class Gtk::Table(2, 2, false));
   alignment7 = Gtk::manage(new class Gtk::Alignment(0.5, 0.5, 1, 1));
   label24 = Gtk::manage(new class Gtk::Label("<b>Malla</b>"));
   frame7 = Gtk::manage(new class Gtk::Frame());
   label34 = Gtk::manage(new class Gtk::Label("Area Minima: "));
   label35 = Gtk::manage(new class Gtk::Label("Area Maxima: "));
   label36 = Gtk::manage(new class Gtk::Label("Area Promedio: "));
   labelAreaMinima = Gtk::manage(new class Gtk::Label("0"));
   labelAreaMaxima = Gtk::manage(new class Gtk::Label("0"));
   labelAreaPromedio = Gtk::manage(new class Gtk::Label("0"));
   label40 = Gtk::manage(new class Gtk::Label("Angulo Minimo (grados): "));
   label41 = Gtk::manage(new class Gtk::Label("Angulo Maximo (grados): "));
   labelAnguloMinimo = Gtk::manage(new class Gtk::Label("0"));
   labelAnguloMaximo = Gtk::manage(new class Gtk::Label("0"));
   table6 = Gtk::manage(new class Gtk::Table(2, 2, false));
   label42 = Gtk::manage(new class Gtk::Label("<b>Histograma Areas</b>"));
   labelRango0 = Gtk::manage(new class Gtk::Label("label45"));
   labelRango2 = Gtk::manage(new class Gtk::Label("label47"));
   labelRango3 = Gtk::manage(new class Gtk::Label("label48"));
   labelRango4 = Gtk::manage(new class Gtk::Label("label49"));
   labelRango5 = Gtk::manage(new class Gtk::Label("label50"));
   labelRango6 = Gtk::manage(new class Gtk::Label("label51"));
   labelRango7 = Gtk::manage(new class Gtk::Label("label52"));
   labelRango8 = Gtk::manage(new class Gtk::Label("label53"));
   labelRango9 = Gtk::manage(new class Gtk::Label("label54"));
   labelRango1 = Gtk::manage(new class Gtk::Label("label45"));
   labelFrecuencia0 = Gtk::manage(new class Gtk::Label("label56"));
   labelFrecuencia1 = Gtk::manage(new class Gtk::Label("label57"));
   labelFrecuencia2 = Gtk::manage(new class Gtk::Label("label58"));
   label43 = Gtk::manage(new class Gtk::Label("Rango"));
   label44 = Gtk::manage(new class Gtk::Label("Frecuencia"));
   labelFrecuencia3 = Gtk::manage(new class Gtk::Label("label59"));
   labelFrecuencia4 = Gtk::manage(new class Gtk::Label("label60"));
   labelFrecuencia5 = Gtk::manage(new class Gtk::Label("label61"));
   labelFrecuencia6 = Gtk::manage(new class Gtk::Label("label62"));
   labelFrecuencia7 = Gtk::manage(new class Gtk::Label("label63"));
   labelFrecuencia8 = Gtk::manage(new class Gtk::Label("label64"));
   labelFrecuencia9 = Gtk::manage(new class Gtk::Label("label65"));
   table8 = Gtk::manage(new class Gtk::Table(2, 2, false));
   vbox8 = Gtk::manage(new class Gtk::VBox(false, 0));
   alignment8 = Gtk::manage(new class Gtk::Alignment(0.5, 0.5, 1, 1));
   label25 = Gtk::manage(new class Gtk::Label("<b>Caras</b>"));
   frame8 = Gtk::manage(new class Gtk::Frame());
   label37 = Gtk::manage(new class Gtk::Label("Largo Arco Minimo: "));
   label38 = Gtk::manage(new class Gtk::Label("Largo Arco Maximo: "));
   label39 = Gtk::manage(new class Gtk::Label("Largo Arco Promedio: "));
   labelArcoMinimo = Gtk::manage(new class Gtk::Label("0"));
   labelArcoMaximo = Gtk::manage(new class Gtk::Label("0"));
   labelArcoPromedio = Gtk::manage(new class Gtk::Label("0"));
   table7 = Gtk::manage(new class Gtk::Table(2, 2, false));
   alignment9 = Gtk::manage(new class Gtk::Alignment(0.5, 0.5, 1, 1));
   label26 = Gtk::manage(new class Gtk::Label("<b>Arcos</b>"));
   frame9 = Gtk::manage(new class Gtk::Frame());
   vbox7 = Gtk::manage(new class Gtk::VBox(false, 0));
   closebutton1->set_flags(Gtk::CAN_FOCUS);
   closebutton1->set_flags(Gtk::CAN_DEFAULT);
   closebutton1->set_relief(Gtk::RELIEF_NORMAL);
   GUIDialogInformacion->get_action_area()->property_layout_style().set_value(Gtk::BUTTONBOX_END);
   label28->set_alignment(0,0.5);
   label28->set_padding(0,0);
   label28->set_justify(Gtk::JUSTIFY_LEFT);
   label28->set_line_wrap(false);
   label28->set_use_markup(false);
   label28->set_selectable(false);
   labelNumCaras->set_flags(Gtk::CAN_FOCUS);
   labelNumCaras->set_alignment(0,0.5);
   labelNumCaras->set_padding(0,0);
   labelNumCaras->set_justify(Gtk::JUSTIFY_LEFT);
   labelNumCaras->set_line_wrap(false);
   labelNumCaras->set_use_markup(false);
   labelNumCaras->set_selectable(true);
   label30->set_alignment(0,0.5);
   label30->set_padding(0,0);
   label30->set_justify(Gtk::JUSTIFY_LEFT);
   label30->set_line_wrap(false);
   label30->set_use_markup(false);
   label30->set_selectable(false);
   label31->set_alignment(0,0.5);
   label31->set_padding(0,0);
   label31->set_justify(Gtk::JUSTIFY_LEFT);
   label31->set_line_wrap(false);
   label31->set_use_markup(false);
   label31->set_selectable(false);
   labelNumArcos->set_flags(Gtk::CAN_FOCUS);
   labelNumArcos->set_alignment(0,0.5);
   labelNumArcos->set_padding(0,0);
   labelNumArcos->set_justify(Gtk::JUSTIFY_LEFT);
   labelNumArcos->set_line_wrap(false);
   labelNumArcos->set_use_markup(false);
   labelNumArcos->set_selectable(true);
   labelNumNodos->set_flags(Gtk::CAN_FOCUS);
   labelNumNodos->set_alignment(0,0.5);
   labelNumNodos->set_padding(0,0);
   labelNumNodos->set_justify(Gtk::JUSTIFY_LEFT);
   labelNumNodos->set_line_wrap(false);
   labelNumNodos->set_use_markup(false);
   labelNumNodos->set_selectable(true);
   table5->set_row_spacings(0);
   table5->set_col_spacings(0);
   table5->attach(*label28, 0, 1, 0, 1, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table5->attach(*labelNumCaras, 1, 2, 0, 1, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table5->attach(*label30, 0, 1, 1, 2, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table5->attach(*label31, 0, 1, 2, 3, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table5->attach(*labelNumArcos, 1, 2, 1, 2, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table5->attach(*labelNumNodos, 1, 2, 2, 3, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   alignment7->add(*table5);
   label24->set_alignment(0.5,0.5);
   label24->set_padding(0,0);
   label24->set_justify(Gtk::JUSTIFY_LEFT);
   label24->set_line_wrap(false);
   label24->set_use_markup(true);
   label24->set_selectable(false);
   frame7->set_shadow_type(Gtk::SHADOW_ETCHED_IN);
   frame7->set_label_align(0,0.5);
   frame7->add(*alignment7);
   frame7->set_label_widget(*label24);
   label34->set_alignment(0,0.5);
   label34->set_padding(0,0);
   label34->set_justify(Gtk::JUSTIFY_LEFT);
   label34->set_line_wrap(false);
   label34->set_use_markup(false);
   label34->set_selectable(false);
   label35->set_alignment(0,0.5);
   label35->set_padding(0,0);
   label35->set_justify(Gtk::JUSTIFY_LEFT);
   label35->set_line_wrap(false);
   label35->set_use_markup(false);
   label35->set_selectable(false);
   label36->set_alignment(0,0.5);
   label36->set_padding(0,0);
   label36->set_justify(Gtk::JUSTIFY_LEFT);
   label36->set_line_wrap(false);
   label36->set_use_markup(false);
   label36->set_selectable(false);
   labelAreaMinima->set_flags(Gtk::CAN_FOCUS);
   labelAreaMinima->set_alignment(0,0.5);
   labelAreaMinima->set_padding(0,0);
   labelAreaMinima->set_justify(Gtk::JUSTIFY_LEFT);
   labelAreaMinima->set_line_wrap(false);
   labelAreaMinima->set_use_markup(false);
   labelAreaMinima->set_selectable(true);
   labelAreaMaxima->set_flags(Gtk::CAN_FOCUS);
   labelAreaMaxima->set_alignment(0,0.5);
   labelAreaMaxima->set_padding(0,0);
   labelAreaMaxima->set_justify(Gtk::JUSTIFY_LEFT);
   labelAreaMaxima->set_line_wrap(false);
   labelAreaMaxima->set_use_markup(false);
   labelAreaMaxima->set_selectable(true);
   labelAreaPromedio->set_flags(Gtk::CAN_FOCUS);
   labelAreaPromedio->set_alignment(0,0.5);
   labelAreaPromedio->set_padding(0,0);
   labelAreaPromedio->set_justify(Gtk::JUSTIFY_LEFT);
   labelAreaPromedio->set_line_wrap(false);
   labelAreaPromedio->set_use_markup(false);
   labelAreaPromedio->set_selectable(true);
   label40->set_alignment(0,0.5);
   label40->set_padding(0,0);
   label40->set_justify(Gtk::JUSTIFY_LEFT);
   label40->set_line_wrap(false);
   label40->set_use_markup(false);
   label40->set_selectable(false);
   label41->set_alignment(0,0.5);
   label41->set_padding(0,0);
   label41->set_justify(Gtk::JUSTIFY_LEFT);
   label41->set_line_wrap(false);
   label41->set_use_markup(false);
   label41->set_selectable(false);
   labelAnguloMinimo->set_flags(Gtk::CAN_FOCUS);
   labelAnguloMinimo->set_alignment(0,0.5);
   labelAnguloMinimo->set_padding(0,0);
   labelAnguloMinimo->set_justify(Gtk::JUSTIFY_LEFT);
   labelAnguloMinimo->set_line_wrap(false);
   labelAnguloMinimo->set_use_markup(false);
   labelAnguloMinimo->set_selectable(true);
   labelAnguloMaximo->set_flags(Gtk::CAN_FOCUS);
   labelAnguloMaximo->set_alignment(0,0.5);
   labelAnguloMaximo->set_padding(0,0);
   labelAnguloMaximo->set_justify(Gtk::JUSTIFY_LEFT);
   labelAnguloMaximo->set_line_wrap(false);
   labelAnguloMaximo->set_use_markup(false);
   labelAnguloMaximo->set_selectable(true);
   table6->set_row_spacings(0);
   table6->set_col_spacings(0);
   table6->attach(*label34, 0, 1, 0, 1, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table6->attach(*label35, 0, 1, 1, 2, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table6->attach(*label36, 0, 1, 2, 3, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table6->attach(*labelAreaMinima, 1, 2, 0, 1, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table6->attach(*labelAreaMaxima, 1, 2, 1, 2, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table6->attach(*labelAreaPromedio, 1, 2, 2, 3, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table6->attach(*label40, 0, 1, 3, 4, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table6->attach(*label41, 0, 1, 4, 5, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table6->attach(*labelAnguloMinimo, 1, 2, 3, 4, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table6->attach(*labelAnguloMaximo, 1, 2, 4, 5, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   label42->set_alignment(0.5,0.5);
   label42->set_padding(0,0);
   label42->set_justify(Gtk::JUSTIFY_LEFT);
   label42->set_line_wrap(false);
   label42->set_use_markup(true);
   label42->set_selectable(false);
   labelRango0->set_alignment(0,0.5);
   labelRango0->set_padding(0,0);
   labelRango0->set_justify(Gtk::JUSTIFY_LEFT);
   labelRango0->set_line_wrap(false);
   labelRango0->set_use_markup(false);
   labelRango0->set_selectable(false);
   labelRango2->set_alignment(0,0.5);
   labelRango2->set_padding(0,0);
   labelRango2->set_justify(Gtk::JUSTIFY_LEFT);
   labelRango2->set_line_wrap(false);
   labelRango2->set_use_markup(false);
   labelRango2->set_selectable(false);
   labelRango3->set_alignment(0,0.5);
   labelRango3->set_padding(0,0);
   labelRango3->set_justify(Gtk::JUSTIFY_LEFT);
   labelRango3->set_line_wrap(false);
   labelRango3->set_use_markup(false);
   labelRango3->set_selectable(false);
   labelRango4->set_alignment(0,0.5);
   labelRango4->set_padding(0,0);
   labelRango4->set_justify(Gtk::JUSTIFY_LEFT);
   labelRango4->set_line_wrap(false);
   labelRango4->set_use_markup(false);
   labelRango4->set_selectable(false);
   labelRango5->set_alignment(0,0.5);
   labelRango5->set_padding(0,0);
   labelRango5->set_justify(Gtk::JUSTIFY_LEFT);
   labelRango5->set_line_wrap(false);
   labelRango5->set_use_markup(false);
   labelRango5->set_selectable(false);
   labelRango6->set_alignment(0,0.5);
   labelRango6->set_padding(0,0);
   labelRango6->set_justify(Gtk::JUSTIFY_LEFT);
   labelRango6->set_line_wrap(false);
   labelRango6->set_use_markup(false);
   labelRango6->set_selectable(false);
   labelRango7->set_alignment(0,0.5);
   labelRango7->set_padding(0,0);
   labelRango7->set_justify(Gtk::JUSTIFY_LEFT);
   labelRango7->set_line_wrap(false);
   labelRango7->set_use_markup(false);
   labelRango7->set_selectable(false);
   labelRango8->set_alignment(0,0.5);
   labelRango8->set_padding(0,0);
   labelRango8->set_justify(Gtk::JUSTIFY_LEFT);
   labelRango8->set_line_wrap(false);
   labelRango8->set_use_markup(false);
   labelRango8->set_selectable(false);
   labelRango9->set_alignment(0,0.5);
   labelRango9->set_padding(0,0);
   labelRango9->set_justify(Gtk::JUSTIFY_LEFT);
   labelRango9->set_line_wrap(false);
   labelRango9->set_use_markup(false);
   labelRango9->set_selectable(false);
   labelRango1->set_alignment(0,0.5);
   labelRango1->set_padding(0,0);
   labelRango1->set_justify(Gtk::JUSTIFY_LEFT);
   labelRango1->set_line_wrap(false);
   labelRango1->set_use_markup(false);
   labelRango1->set_selectable(false);
   labelFrecuencia0->set_alignment(0,0.5);
   labelFrecuencia0->set_padding(0,0);
   labelFrecuencia0->set_justify(Gtk::JUSTIFY_LEFT);
   labelFrecuencia0->set_line_wrap(false);
   labelFrecuencia0->set_use_markup(false);
   labelFrecuencia0->set_selectable(false);
   labelFrecuencia1->set_alignment(0,0.5);
   labelFrecuencia1->set_padding(0,0);
   labelFrecuencia1->set_justify(Gtk::JUSTIFY_LEFT);
   labelFrecuencia1->set_line_wrap(false);
   labelFrecuencia1->set_use_markup(false);
   labelFrecuencia1->set_selectable(false);
   labelFrecuencia2->set_alignment(0,0.5);
   labelFrecuencia2->set_padding(0,0);
   labelFrecuencia2->set_justify(Gtk::JUSTIFY_LEFT);
   labelFrecuencia2->set_line_wrap(false);
   labelFrecuencia2->set_use_markup(false);
   labelFrecuencia2->set_selectable(false);
   label43->set_alignment(0,0.5);
   label43->set_padding(0,0);
   label43->set_justify(Gtk::JUSTIFY_LEFT);
   label43->set_line_wrap(false);
   label43->set_use_markup(false);
   label43->set_selectable(false);
   label44->set_alignment(0,0.5);
   label44->set_padding(0,0);
   label44->set_justify(Gtk::JUSTIFY_LEFT);
   label44->set_line_wrap(false);
   label44->set_use_markup(false);
   label44->set_selectable(false);
   labelFrecuencia3->set_alignment(0,0.5);
   labelFrecuencia3->set_padding(0,0);
   labelFrecuencia3->set_justify(Gtk::JUSTIFY_LEFT);
   labelFrecuencia3->set_line_wrap(false);
   labelFrecuencia3->set_use_markup(false);
   labelFrecuencia3->set_selectable(false);
   labelFrecuencia4->set_alignment(0,0.5);
   labelFrecuencia4->set_padding(0,0);
   labelFrecuencia4->set_justify(Gtk::JUSTIFY_LEFT);
   labelFrecuencia4->set_line_wrap(false);
   labelFrecuencia4->set_use_markup(false);
   labelFrecuencia4->set_selectable(false);
   labelFrecuencia5->set_alignment(0,0.5);
   labelFrecuencia5->set_padding(0,0);
   labelFrecuencia5->set_justify(Gtk::JUSTIFY_LEFT);
   labelFrecuencia5->set_line_wrap(false);
   labelFrecuencia5->set_use_markup(false);
   labelFrecuencia5->set_selectable(false);
   labelFrecuencia6->set_alignment(0,0.5);
   labelFrecuencia6->set_padding(0,0);
   labelFrecuencia6->set_justify(Gtk::JUSTIFY_LEFT);
   labelFrecuencia6->set_line_wrap(false);
   labelFrecuencia6->set_use_markup(false);
   labelFrecuencia6->set_selectable(false);
   labelFrecuencia7->set_alignment(0,0.5);
   labelFrecuencia7->set_padding(0,0);
   labelFrecuencia7->set_justify(Gtk::JUSTIFY_LEFT);
   labelFrecuencia7->set_line_wrap(false);
   labelFrecuencia7->set_use_markup(false);
   labelFrecuencia7->set_selectable(false);
   labelFrecuencia8->set_alignment(0,0.5);
   labelFrecuencia8->set_padding(0,0);
   labelFrecuencia8->set_justify(Gtk::JUSTIFY_LEFT);
   labelFrecuencia8->set_line_wrap(false);
   labelFrecuencia8->set_use_markup(false);
   labelFrecuencia8->set_selectable(false);
   labelFrecuencia9->set_alignment(0,0.5);
   labelFrecuencia9->set_padding(0,0);
   labelFrecuencia9->set_justify(Gtk::JUSTIFY_LEFT);
   labelFrecuencia9->set_line_wrap(false);
   labelFrecuencia9->set_use_markup(false);
   labelFrecuencia9->set_selectable(false);
   table8->set_row_spacings(0);
   table8->set_col_spacings(30);
   table8->attach(*labelRango0, 0, 1, 1, 2, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table8->attach(*labelRango2, 0, 1, 3, 4, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table8->attach(*labelRango3, 0, 1, 4, 5, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table8->attach(*labelRango4, 0, 1, 5, 6, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table8->attach(*labelRango5, 0, 1, 6, 7, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table8->attach(*labelRango6, 0, 1, 7, 8, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table8->attach(*labelRango7, 0, 1, 8, 9, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table8->attach(*labelRango8, 0, 1, 9, 10, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table8->attach(*labelRango9, 0, 1, 10, 11, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table8->attach(*labelRango1, 0, 1, 2, 3, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table8->attach(*labelFrecuencia0, 1, 2, 1, 2, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table8->attach(*labelFrecuencia1, 1, 2, 2, 3, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table8->attach(*labelFrecuencia2, 1, 2, 3, 4, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table8->attach(*label43, 0, 1, 0, 1, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table8->attach(*label44, 1, 2, 0, 1, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table8->attach(*labelFrecuencia3, 1, 2, 4, 5, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table8->attach(*labelFrecuencia4, 1, 2, 5, 6, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table8->attach(*labelFrecuencia5, 1, 2, 6, 7, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table8->attach(*labelFrecuencia6, 1, 2, 7, 8, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table8->attach(*labelFrecuencia7, 1, 2, 8, 9, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table8->attach(*labelFrecuencia8, 1, 2, 9, 10, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table8->attach(*labelFrecuencia9, 1, 2, 10, 11, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   vbox8->pack_start(*table6);
   vbox8->pack_start(*label42, Gtk::PACK_SHRINK, 0);
   vbox8->pack_start(*table8);
   alignment8->add(*vbox8);
   label25->set_alignment(0.5,0.5);
   label25->set_padding(0,0);
   label25->set_justify(Gtk::JUSTIFY_LEFT);
   label25->set_line_wrap(false);
   label25->set_use_markup(true);
   label25->set_selectable(false);
   frame8->set_shadow_type(Gtk::SHADOW_ETCHED_IN);
   frame8->set_label_align(0,0.5);
   frame8->add(*alignment8);
   frame8->set_label_widget(*label25);
   label37->set_alignment(0,0.5);
   label37->set_padding(0,0);
   label37->set_justify(Gtk::JUSTIFY_LEFT);
   label37->set_line_wrap(false);
   label37->set_use_markup(false);
   label37->set_selectable(false);
   label38->set_alignment(0,0.5);
   label38->set_padding(0,0);
   label38->set_justify(Gtk::JUSTIFY_LEFT);
   label38->set_line_wrap(false);
   label38->set_use_markup(false);
   label38->set_selectable(false);
   label39->set_alignment(0,0.5);
   label39->set_padding(0,0);
   label39->set_justify(Gtk::JUSTIFY_LEFT);
   label39->set_line_wrap(false);
   label39->set_use_markup(false);
   label39->set_selectable(false);
   labelArcoMinimo->set_flags(Gtk::CAN_FOCUS);
   labelArcoMinimo->set_alignment(0,0.5);
   labelArcoMinimo->set_padding(0,0);
   labelArcoMinimo->set_justify(Gtk::JUSTIFY_LEFT);
   labelArcoMinimo->set_line_wrap(false);
   labelArcoMinimo->set_use_markup(false);
   labelArcoMinimo->set_selectable(true);
   labelArcoMaximo->set_flags(Gtk::CAN_FOCUS);
   labelArcoMaximo->set_alignment(0,0.5);
   labelArcoMaximo->set_padding(0,0);
   labelArcoMaximo->set_justify(Gtk::JUSTIFY_LEFT);
   labelArcoMaximo->set_line_wrap(false);
   labelArcoMaximo->set_use_markup(false);
   labelArcoMaximo->set_selectable(true);
   labelArcoPromedio->set_flags(Gtk::CAN_FOCUS);
   labelArcoPromedio->set_alignment(0,0.5);
   labelArcoPromedio->set_padding(0,0);
   labelArcoPromedio->set_justify(Gtk::JUSTIFY_LEFT);
   labelArcoPromedio->set_line_wrap(false);
   labelArcoPromedio->set_use_markup(false);
   labelArcoPromedio->set_selectable(true);
   table7->set_row_spacings(0);
   table7->set_col_spacings(0);
   table7->attach(*label37, 0, 1, 0, 1, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table7->attach(*label38, 0, 1, 1, 2, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table7->attach(*label39, 0, 1, 2, 3, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table7->attach(*labelArcoMinimo, 1, 2, 0, 1, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table7->attach(*labelArcoMaximo, 1, 2, 1, 2, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   table7->attach(*labelArcoPromedio, 1, 2, 2, 3, Gtk::FILL, Gtk::AttachOptions(), 0, 0);
   alignment9->add(*table7);
   label26->set_alignment(0.5,0.5);
   label26->set_padding(0,0);
   label26->set_justify(Gtk::JUSTIFY_LEFT);
   label26->set_line_wrap(false);
   label26->set_use_markup(true);
   label26->set_selectable(false);
   frame9->set_shadow_type(Gtk::SHADOW_ETCHED_IN);
   frame9->set_label_align(0,0.5);
   frame9->add(*alignment9);
   frame9->set_label_widget(*label26);
   vbox7->pack_start(*frame7);
   vbox7->pack_start(*frame8);
   vbox7->pack_start(*frame9);
   GUIDialogInformacion->get_vbox()->set_homogeneous(false);
   GUIDialogInformacion->get_vbox()->set_spacing(0);
   GUIDialogInformacion->get_vbox()->pack_start(*vbox7);
   GUIDialogInformacion->set_title("Informacion de la Malla");
   GUIDialogInformacion->set_modal(false);
   GUIDialogInformacion->property_window_position().set_value(Gtk::WIN_POS_NONE);
   GUIDialogInformacion->set_resizable(true);
   GUIDialogInformacion->property_destroy_with_parent().set_value(false);
   GUIDialogInformacion->set_has_separator(true);
   GUIDialogInformacion->add_action_widget(*closebutton1, -7);
   closebutton1->show();
   label28->show();
   labelNumCaras->show();
   label30->show();
   label31->show();
   labelNumArcos->show();
   labelNumNodos->show();
   table5->show();
   alignment7->show();
   label24->show();
   frame7->show();
   label34->show();
   label35->show();
   label36->show();
   labelAreaMinima->show();
   labelAreaMaxima->show();
   labelAreaPromedio->show();
   label40->show();
   label41->show();
   labelAnguloMinimo->show();
   labelAnguloMaximo->show();
   table6->show();
   label42->show();
   labelRango0->show();
   labelRango2->show();
   labelRango3->show();
   labelRango4->show();
   labelRango5->show();
   labelRango6->show();
   labelRango7->show();
   labelRango8->show();
   labelRango9->show();
   labelRango1->show();
   labelFrecuencia0->show();
   labelFrecuencia1->show();
   labelFrecuencia2->show();
   label43->show();
   label44->show();
   labelFrecuencia3->show();
   labelFrecuencia4->show();
   labelFrecuencia5->show();
   labelFrecuencia6->show();
   labelFrecuencia7->show();
   labelFrecuencia8->show();
   labelFrecuencia9->show();
   table8->show();
   vbox8->show();
   alignment8->show();
   label25->show();
   frame8->show();
   label37->show();
   label38->show();
   label39->show();
   labelArcoMinimo->show();
   labelArcoMaximo->show();
   labelArcoPromedio->show();
   table7->show();
   alignment9->show();
   label26->show();
   frame9->show();
   vbox7->show();
   GUIDialogInformacion->show();
   closebutton1->signal_clicked().connect(sigc::mem_fun(*this, &GUIDialogInformacion_glade::on_closebutton1_clicked), false);
}

GUIDialogInformacion_glade::~GUIDialogInformacion_glade()
{  delete gmm_data;
}
