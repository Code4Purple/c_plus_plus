#include "MainFrame.h"	 //	MainFrame defintions
#include <wx/wx.h>		 // Default wx library of WXWIN
#include <wx/spinctrl.h> // Another sub-library for a limited feature

MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title)
{
	// Parent Panel allows to use one feature without having more in the UI
	wxPanel* panel = new wxPanel(this);

	
}
