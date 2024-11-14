#ifndef PojectileManager_h
#define ProjectileManager_h
#include <vector>
#include "asteroid.h"
#include "projectiles.h"
#include <SFML/System/Clock.hpp>

class ProjectileManager : public sf::Drawable
{
private:
	std::vector<Projectile> projectiles_;
	sf::Clock cooldown_timer_;
	float cooldown_dt_ = 0;

public: 
	void Spawn(sf::Vector2f spawn_position, sf::Vector2f direction);
	void Refresh(float dt, const sf::Vector2f window_size);
	void CheckAsteroidCollisions(std::vector<Asteroid>& asteroids);

protected:
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
};

#endif // ProjectileManager_h