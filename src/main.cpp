#include <SFML/Graphics.hpp>
#include <unistd.h>
#include <string>
#include <iostream>
#include "lib/player.hpp"

using namespace std;

//window stuff
const uint windowWidth = 960;
const uint windowHeight = 540;
const float framerate = 60.f;

const string windowName = "FlappyBird";

sf::RenderWindow window (sf::VideoMode(windowWidth, windowHeight), windowName, sf::Style::Close);

float deltaTime;
sf::Clock wClock;

void WorldUpdate();
void EventTrigger(sf::Event event);

//player stuff
Player player (1.f, sf::Vector2f(80, windowHeight/2), 0.f, &deltaTime);

int main() {

    int ctr = 1; //debuging
    
    while(window.isOpen())
    {

        sf::Event event;
        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
                window.close();
            
            EventTrigger(event);
        }
        WorldUpdate();
        usleep(1000000.f/framerate);
    }

}

void WorldUpdate()
{
    window.clear();
    deltaTime = wClock.restart().asMicroseconds() / 1000000.f;
    
    window.draw(player.getShape());
    window.display();
    player.update();
}

void EventTrigger(sf::Event event)
{
    if(event.type == sf::Event::KeyPressed)
    {
        if(event.key.code == sf::Keyboard::Space)
        {
            player.jump(); //jumps when space is pressed
        }
    }
}
