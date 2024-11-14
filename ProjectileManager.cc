#include <iostream>
#include "asteroid.h"
#include "ProjectileManager.h"
#include <SFML/Graphics/RenderTarget.hpp>

constexpr float kCooldown_limit = 0.25f;

void ProjectileManager::Spawn(sf::Vector2f spawn_position, sf::Vector2f direction)
{
	if (cooldown_dt_ < kCooldown_limit)
		return;

	projectiles_.emplace_back(direction);
	projectiles_.back().setPosition(spawn_position);
	cooldown_dt_ = 0;
}

void ProjectileManager::Refresh(float dt, const sf::Vector2f window_size)
{

}

void ProjectileManager::CheckAsteroidCollisions(std::vector<Asteroid>& asteroids)
{
}

void ProjectileManager::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	for (const Projectile& p : projectiles_)
	{
		target.draw(p);
	}
}