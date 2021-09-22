#include "lib/player.hpp"
#include <iostream>

using namespace std;

Player::Player(float _mass, sf::Vector2f _position, float _velocity, float* dT)
{
    mass = _mass;
    position = _position;
    velocity = _velocity;
    shape.setOrigin(sf::Vector2f(pixcelScale, pixcelScale));
    shape.setRadius(pixcelScale);
    shape.setPosition(_position);
    deltaTime = dT;
}

sf::CircleShape Player::getShape()
{
    return shape;
}

void Player::update()
{
    cout << *deltaTime << endl;
    if (temp)
        addForce(gravity);
    move();
    shape.setPosition(position);
}

void Player::accelerate()
{
    if(!isGrounded)
        velocity += acceleration;
}

void Player::move()
{
    position.y = clamp(position.y + velocity, 0.f, 540.f);
    if(position.y == 540)
        isGrounded = true;
    else if(position.y == 540)
        acceleration = 0;
}

void Player::addForce(float force)
{
    acceleration = (force/mass);
    accelerate();
}

void Player::jump()
{
    temp = true;
    isGrounded = false;
    addForce(jumpForce);
}