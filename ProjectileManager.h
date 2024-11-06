#ifndef PojectileManager_h
#define ProjectileManager_h
#include <vector>
#include "projectiles.h"

class ProjectileManager : public sf::Drawable
{
private:
	std::vector<Projectile> projectiles_;

public: 
	void Spawn(sf::Vector2f spawn_position);
	void Refresh(float dt, const sf::Vector2f window_size);

protected:
	//void draw(sf::RenderTarget target, sf::RenderStates states) const override;
};

#endif // ProjectileManager_h
