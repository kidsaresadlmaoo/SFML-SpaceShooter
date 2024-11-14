#ifndef projectile_h
#define projectile_h

#include "Entity.h"
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/Transformable.hpp>

class Projectile : public Entity
{
private:
	static sf::Texture texture_;
	sf::Sprite sprite_;

	bool is_dead_ = false;

	static std::array<sf::Texture, 4> animation_;


public:
	Projectile(sf::Vector2f dire);
	void Move(float dt, const sf::Vector2u window_size);

	bool IsDead() const 
	{
		return is_dead_;
	}
};

#endif // projectile_h