#include "MainFrame.h"	 //	MainFrame defintions
#include <wx/wx.h>		 // Default wx library of WXWIN
#include <wx/spinctrl.h> // Another sub-library for a limited feature

MainFrame::MainFrame(const wxString &title) : wxFrame(nullptr, wxID_ANY, title)
{
	// Parent Panel allows to use one feature without having more in the UI
	wxPanel *panel = new wxPanel(this);
	// Button Feature for the UI
	wxButton *button = new wxButton(panel, wxID_ANY, "Button", wxPoint(150, 50), wxSize(100, 35));
	// Check Box Feature for UI
	wxCheckBox *checkBox = new wxCheckBox(panel, wxID_ANY, "CheckBox", wxPoint(550, 55));
	// Output Text without the Edit from the user
	wxStaticText *staticText = new wxStaticText(panel, wxID_ANY, "StaticText - NOT editable", wxPoint(120, 150));
	// Output to Text for the user to change -> Input from user
	wxTextCtrl *textCtrl = new wxTextCtrl(panel, wxID_ANY, "TextCTRL - editable", wxPoint(500, 145), wxSize(200, -1));
	// General Slider to select a degree or percent on a scale
	wxSlider *slider = new wxSlider(panel, wxID_ANY, 25, 0, 100, wxPoint(100, 250), wxSize(200, -1));
	// Gauge Feature -> Loading Bar or Process Bar
	wxGauge *gauge = new wxGauge(panel, wxID_ANY, 100, wxPoint(500, 255), wxSize(200, -1));
	gauge->SetValue(25); // Value for the gauge to fill out of 100%

	// Array List for the other Features
	// You can make a normal array without the WXWIN Library
	wxArrayString choices;
	choices.Add("Item A");
	choices.Add("Item B");
	choices.Add("Item C");
	choices.Add("Item D");

	// Uses the Array above to make a menu select for the user (Drop Down List)
	wxChoice *choice = new wxChoice(panel, wxID_ANY, wxPoint(150, 375), wxSize(100, -1), choices);
	choice->Select(0); // this can be used to select a default choice for application

	// Spin feature that allows you to have the up and down arrows or a write-in box with a max inpout for the user
	wxSpinCtrl *spinCtrl = new wxSpinCtrl(panel, wxID_ANY, "Enter Title ", wxPoint(550, 375), wxSize(100, -1)); // uses the <wx/spinctrl.h> include

	// List Box feature allows you to have a plain list
	wxListBox *listBox = new wxListBox(panel, wxID_ANY, wxPoint(150, 475), wxSize(100, -1), choices);

	// Radio Box Feature allows a user to have a dotted menu to select from (Basic one is a horizontal menu)
	wxRadioBox *radioBox = new wxRadioBox(panel, wxID_ANY, "Enter Title", wxPoint(485, 475), wxDefaultSize, choices);
}
