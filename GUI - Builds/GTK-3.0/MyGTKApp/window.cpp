#include <gtkmm.h>

// include diffeerent parts of the window


class MyWindow : public Gtk::Window {
public:
    MyWindow();
    virtual ~MyWindow();
};

MyWindow::MyWindow() {
    // Title of App's Window
    set_title("Learning GTK-3.0 with C++");
    // Icon of App's Window - With Error Handling
    try {
        set_icon_from_file("/home/kowalski/Desktop/c_plus_plus/GUI - Builds/GTK-3.0/MyGTKApp/c++.png");
    } catch (const Glib::FileError& ex) {
        std::cerr << "FileError: " << ex.what() << std::endl;
    } catch (const Gdk::PixbufError& ex) {
        std::cerr << "PixbufError: " << ex.what() << std::endl;
    }

    
    
    // Resize of Window
    int horizontal = 600;
    int vertical = 800;
    set_default_size(vertical, horizontal);
    
    show_all_children();

    // Position of Window
    signal_realize().connect([this]() {

        // Top Right Position of Window
        //move(Gdk::Screen::get_default()->get_width() - get_width(), 0);

        // Top Left Position of Window
        //move(0, 0);
        
        // Bottom Right Position of Window
        //move(Gdk::Screen::get_default()->get_width() - get_width(), Gdk::Screen::get_default()->get_height() - get_height());

        // Bottom Left Position of Window
        //move(0, Gdk::Screen::get_default()->get_height() - get_height());

        // Center Position of Window
        set_position(Gtk::WIN_POS_CENTER);
    }); 

    
    


}

MyWindow::~MyWindow() {}