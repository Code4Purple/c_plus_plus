#include <SFML/Graphics.hpp>

int main() {
    // Create a window with the title "SFML Test Window"
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Test Window");

    // Main loop to keep the window open
    while (window.isOpen()) {
        // Process events
        sf::Event event;
        while (window.pollEvent(event)) {
            // Close window if the close event is triggered
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear the window with a black color
        window.clear(sf::Color::Black);

        // Display the contents of the window
        window.display();
    }

    return 0;
}
