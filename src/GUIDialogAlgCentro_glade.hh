// generated 2008/4/16 16:15:45 CLT by cristi@cristi-laptop.(none)
// using glademm V2.6.0
//
// DO NOT EDIT THIS FILE ! It was created using
// glade-- /home/cristi/svn/CC69F/TreeGrowthSimulator.glade
// for gtk 2.10.11 and gtkmm 2.10.8
//
// Please modify the corresponding derived classes in ./src/GUIDialogAlgCentro.hh and./src/GUIDialogAlgCentro.cc

#ifndef _GUIDIALOGALGCENTRO_GLADE_HH
#  define _GUIDIALOGALGCENTRO_GLADE_HH


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

class GUIDialogAlgCentro_glade : public Gtk::Dialog
{  
        
        GlademmData *gmm_data;
public:
        class Gtk::Dialog * GUIDialogAlgCentro;
        class Gtk::Button * applybutton5;
        class Gtk::Button * cancelbutton7;
        class Gtk::Label * label57;
        class Gtk::Label * label58;
        class Gtk::Combo * comboAlgoritmoCentro;
        class Gtk::Label * label59;
        class Gtk::VBox * vbox10;
protected:
        
        GUIDialogAlgCentro_glade();
        
        ~GUIDialogAlgCentro_glade();
};
#endif
