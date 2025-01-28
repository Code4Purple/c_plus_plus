// main.cpp
#include <wx/wx.h>

// Define a new application type
class MyApp : public wxApp {
public:
    virtual bool OnInit();
};

// Define a new frame type
class MyFrame : public wxFrame {
public:
    MyFrame(const wxString& title);

    void OnButtonClicked(wxCommandEvent& event);

private:
    wxButton* m_button;
};

// Implement the application
wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit() {
    MyFrame* frame = new MyFrame("Basic wxWidgets App");
    frame->Show(true);
    return true;
}

MyFrame::MyFrame(const wxString& title)
    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(400, 300)) {

    // Create a panel to hold the button
    wxPanel* panel = new wxPanel(this, wxID_ANY);

    // Create a button and bind it to the event handler
    m_button = new wxButton(panel, wxID_ANY, "Click Me", wxPoint(150, 100));
    m_button->Bind(wxEVT_BUTTON, &MyFrame::OnButtonClicked, this);
}

void MyFrame::OnButtonClicked(wxCommandEvent& event) {
    wxMessageBox("Button clicked!", "Info", wxOK | wxICON_INFORMATION);
}