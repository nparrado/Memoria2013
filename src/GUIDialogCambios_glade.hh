// generated 2008/4/15 19:40:56 CLT by cristi@cristi-laptop.(none)
// using glademm V2.6.0
//
// DO NOT EDIT THIS FILE ! It was created using
// glade-- /home/cristi/svn/CC69F/TreeGrowthSimulator.glade
// for gtk 2.10.11 and gtkmm 2.10.8
//
// Please modify the corresponding derived classes in ./src/GUIDialogCambios.hh and./src/GUIDialogCambios.cc

#ifndef _GUIDIALOGCAMBIOS_GLADE_HH
#  define _GUIDIALOGCAMBIOS_GLADE_HH


#if !defined(GLADEMM_DATA)
#define GLADEMM_DATA 
#include <gtkmm/accelgroup.h>

class GlademmData
{  
        
        Glib::RefPtr<Gtk::AccelGroup> accgrp;
public:
        
        GlademmData(Glib::RefPtr<Gtk::AccelGroup> ag) : accgrp(ag)
        {  
        }
        
        Glib::RefPtr<Gtk::AccelGroup>  getAccelGroup()
        {  return accgrp;
        }
};
#endif //GLADEMM_DATA

#include <gtkmm/dialog.h>
#include <gtkmm/button.h>
#include <gtkmm/buttonbox.h>
#include <gtkmm/label.h>
#include <gtkmm/entry.h>
#include <gtkmm/treeview.h>
#include <gtkmm/combo.h>
#include <gtkmm/box.h>
#include <gtkmm/spinbutton.h>
#include <gtkmm/table.h>
#include <gtkmm/radiobutton.h>
#include <gtkmm/alignment.h>
#include <gtkmm/frame.h>

class GUIDialogCambios_glade : public Gtk::Dialog
{  
        
        GlademmData *gmm_data;
public:
        class Gtk::Dialog * GUIDialogCambios;
        class Gtk::Button * cancelbutton3;
        class Gtk::Button * applybutton4;
        class Gtk::Label * label19;
        class Gtk::Combo * comboTipoVerificacionesT;
        class Gtk::HBox * hboxTriangulos;
        class Gtk::Label * label56;
        class Gtk::Combo * comboTipoVerificacionesC;
        class Gtk::HBox * hboxCuadrilateros;
        class Gtk::Label * labelPorcentajeAMover;
        class Gtk::SpinButton * spinbuttonPorcenjateAMover;
        class Gtk::Label * label22;
        class Gtk::SpinButton * spinbuttonPasos;
        class Gtk::Table * table11;
        class Gtk::RadioButton * radiobuttonHastaPrimeraInconsistencia;
        class Gtk::RadioButton * radiobuttonMoverLibremente;
        class Gtk::Table * table4;
        class Gtk::Alignment * alignment3;
        class Gtk::Label * label18;
        class Gtk::Frame * framePropiedades;
        class Gtk::VBox * vbox2;
protected:
        
        GUIDialogCambios_glade();
        
        ~GUIDialogCambios_glade();
private:
        virtual void on_comboTipoVerificaciones_changed() = 0;
        virtual void on_radiobuttonHastaPrimeraInconsistencia_toggled() = 0;
        virtual void on_radiobuttonMoverLibremente_toggled() = 0;
};
#endif
