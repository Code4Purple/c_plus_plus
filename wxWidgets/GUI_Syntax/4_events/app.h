#pragma once
#include <wx/wx.h> //WXWIN

class App : public wxApp
{
public:
	// Allows the Creation of Appliction window
	// Allows  to state if the applcition is open(true) or close(false)
	bool OnInit();
};
