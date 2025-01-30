#include <gtkmm.h>


class MyWindow : public Gtk::Window {
public:
    MyWindow();
    virtual ~MyWindow();
};

MyWindow::MyWindow() {
    // Set window title and size
    set_title("My Play App to Learn GTK");
    set_default_size(800, 600);

    // Create a header bar
    auto header_bar = Gtk::make_managed<Gtk::HeaderBar>();
    header_bar->set_title("My Play App to Learn GTK");
    header_bar->set_show_close_button(true);
    set_titlebar(*header_bar);

    // Set background color
    auto screen = Gdk::Screen::get_default();
    auto css_provider = Gtk::CssProvider::create();
    css_provider->load_from_data(
        //"window { background-color: #3498db; }"             // Change this to your desired color (hex version)   -- window background color
        "window {background-color: rgb(0, 0, 255);}"        // Change this to your desired color (rgb version)   -- window background color
        "headerbar { background-color: rgb(0, 0, 0); }" // Title bar background color (red)
        "headerbar .title {color: white;}" // Title bar text color (white)
        "headerbar .text {color: white;}" // Title bar text color (white)
    );
    auto style_context = Gtk::StyleContext::create();
    style_context->add_provider_for_screen(screen, css_provider, GTK_STYLE_PROVIDER_PRIORITY_USER);

    // Add a widget to the window to ensure the header bar is displayed
    auto label = Gtk::make_managed<Gtk::Label>("Hello, GTKmm Label!");
    add(*label);
    label->show();
}



MyWindow::~MyWindow() {}