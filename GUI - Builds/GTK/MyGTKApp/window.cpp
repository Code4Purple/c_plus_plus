#include <gtkmm.h>


class MyWindow : public Gtk::Window {
public:
    MyWindow();
    virtual ~MyWindow();
};

MyWindow::MyWindow() {
    set_title("My GTKmm Application");
    set_default_size(1920, 1080);
}

MyWindow::~MyWindow() {}