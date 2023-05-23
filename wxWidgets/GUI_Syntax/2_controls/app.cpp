#include "App.h"	   // Keeps the Window Open within that file
#include "MainFrame.h" // Title Bar definition
#include "wx/wx.h"	   // WXWIN

wxIMPLEMENT_APP(App); // appliction execution

bool App::OnInit()
{
	// Creating & Titling the Appliction
	MainFrame *mainFrame = new MainFrame("C++ GUI Controls");
	// Size of the intail window
	mainFrame->SetClientSize(800, 600);
	// Where it starts at on your monitor
	mainFrame->Center();
	// Allows to Print to the UI in interaction section
	mainFrame->Show();
	// Allows the Window to Start & stay open with the mainFrame structure
	return true;
}