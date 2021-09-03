#include <SFML/Graphics.hpp>
#include <iostream>

const uint windowWidth = 960;
const uint windowHeight = 540;

sf::RenderWindow window (sf::VideoMode(windowWidth, windowHeight), "Window", sf::Style::Close);

int main() {
    
    while(window.isOpen())
    {
        sf::Event e;
        while(window.pollEvent(e))
        {
            if(e.type == sf::Event::Closed)
                window.close();
        }
    }

}


