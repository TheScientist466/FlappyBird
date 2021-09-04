#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>
#include "lib/player.hpp"

using namespace std;

//window stuff
const uint windowWidth = 960;
const uint windowHeight = 540;

const string windowName = "FlappyBird";

sf::RenderWindow window (sf::VideoMode(windowWidth, windowHeight), windowName, sf::Style::Close);

void WorldUpdate();

//player stuff
Player player (1.f, sf::Vector2f(80, windowHeight/2), 0.f);

int main() {
    
    while(window.isOpen())
    {
        sf::Event e;
        while(window.pollEvent(e))
        {
            if(e.type == sf::Event::Closed)
                window.close();
        }
        WorldUpdate();
    }

}

void WorldUpdate()
{
    window.clear();
    window.draw(player.getShape());
    window.display();

}


