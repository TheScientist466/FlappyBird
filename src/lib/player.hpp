#pragma once
#include <SFML/Graphics.hpp>

class Player
{
    //variables
    public:
        const float scale = .5; //metres
        sf::Vector2f position;
        float velocity;
        float mass = .5f; //kgs

    private:
        sf::CircleShape shape;
        float gravity = .00011; //Newton/kg
        const float pixcelScale = 50 * scale;
        float acceleration;

    //methods
    public:
        //constructor for player
        Player(float mass, sf::Vector2f position, float velocity);
        //shape getter and setter
        sf::CircleShape getShape();
        //updator for player
        void update();
        //jumping
        void jump();
        
        //checks
        bool isEdged();

    private:
        void accelerate();
        void move();
        void addForce(float force);


};