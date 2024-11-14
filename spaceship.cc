#include "spaceship.h"
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/RenderTarget.hpp>

Spaceship::Spaceship()
{
	texture_.loadFromFile("playerShip1_red.png");

	sprite_.setTexture(texture_);
	sprite_.setOrigin(texture_.getSize().x / 2, texture_.getSize().y / 2);

	setRotation(90);
	setScale(0.5f, 0.5f);
}

void Spaceship::Move(sf::Vector2f direction, float dt)
{
	move(direction * kSpeed * dt);
}

void Spaceship::SetPosition(sf::Vector2u position)
{
	setPosition(sf::Vector2f(position));
}

void Spaceship::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	states.transform *= getTransform();
	target.draw(sprite_, states);
}
