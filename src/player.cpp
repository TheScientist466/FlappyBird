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
    addForce(gravity);
    move();
    shape.setPosition(position);
}

void Player::accelerate()
{
    velocity += acceleration * *deltaTime;
}

void Player::move()
{
    position.y += velocity * *deltaTime;
    //cout << position.y << endl;
}

void Player::addForce(float force)
{
    acceleration = (force/mass);
    accelerate();
}

void Player::jump()
{
    addForce(jumpForce);
}