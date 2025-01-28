#include <gtkmm.h>
#include <iostream>

class MyWindow : public Gtk::Window {
public:
    MyWindow();

protected:
    // Signal handlers
    void on_button_clicked();

    // Member widgets
    Gtk::Button m_button;
};

MyWindow::MyWindow()
    : m_button("Click Me") {
    // Set the title and border width of the window
    set_title("Basic Gtkmm App");
    set_border_width(10);

    // Connect the signal handler to the button's clicked signal
    m_button.signal_clicked().connect(sigc::mem_fun(*this, &MyWindow::on_button_clicked));

    // Add the button to the window
    add(m_button);

    // Make the button visible
    m_button.show();
}

void MyWindow::on_button_clicked() {
    std::cout << "Hello, Gtkmm!" << std::endl;
}

int main(int argc, char *argv[]) {
    auto app = Gtk::Application::create(argc, argv, "org.gtkmm.example");

    MyWindow window;

    return app->run(window);
}
