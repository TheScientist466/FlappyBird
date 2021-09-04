#include "lib/player.hpp"

Player::Player(float _mass, sf::Vector2f _position, float _velocity)
{
    mass = _mass;
    position = _position;
    velocity = _velocity;
    shape.setOrigin(sf::Vector2f(pixcelScale, pixcelScale));
    shape.setRadius(pixcelScale);
    shape.setPosition(_position);
}

sf::CircleShape Player::getShape()
{
    return shape;
}

void Player::update()
{
    return;
}

