#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>

using namespace std;

const uint windowWidth = 960;
const uint windowHeight = 540;

const string windowName = "FlappyBird";

sf::RenderWindow window (sf::VideoMode(windowWidth, windowHeight), windowName, sf::Style::Close);

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


