#pragma once
#include <SFML/Graphics.hpp>

class Player
{
    //variables
    public:
        float scale = .5;
        sf::Vector2f position;
        float velocity;
        float mass;

    private:
        sf::CircleShape shape;
        float gravity = 10;
        float pixcelScale = 50 * scale;

    //methods
    public:
        //constructor for player
        Player(float mass, sf::Vector2f position, float velocity);
        //shape getter and setter
        sf::CircleShape getShape();
        //updator for player
        void update();

};