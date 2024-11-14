#include <array>
#include <iostream>
#include "projectiles.h"
#include <SFML/Graphics/RenderTarget.hpp>

sf::Texture Projectile::texture_;
std::array<sf::Texture, 4> Projectile::animation_;

Projectile::Projectile(sf::Vector2f dir)
{
	texture_.loadFromFile("laserRed12.png");

	animation_[0].loadFromFile("laserRed01.png");
	animation_[1].loadFromFile("laserRed07.png");
	animation_[2].loadFromFile("laserRed06.png");
	animation_[3].loadFromFile("laserRed05.png");

	sprite_.setTexture(texture_);

	/*setOrigin(0, texture_.getSize().y / 2);
	setRotation(90);
	setScale(0.5f, 0.5f);*/
}
