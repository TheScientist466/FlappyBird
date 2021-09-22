#pragma once
#include <SFML/Graphics.hpp>

class Player
{
    //variables
    public:
        const float scale = .5; //metres
        sf::Vector2f position;
        float velocity;
        float mass = 1.f; //kgs

    private:
        sf::CircleShape shape;
        float gravity = .5; //Newton/kg
        float jumpForce = -12;
        const float pixcelScale = 50 * scale;
        float acceleration;
        float* deltaTime;
        bool temp = false;
        bool isGrounded = false;

    //methods
    public:
        //constructor for player
        Player(float mass, sf::Vector2f position, float velocity, float* deltaTime);
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