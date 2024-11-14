#ifndef asteroid_manager_h
#define asteroid_manager_h
#include <vector>
#include "asteroid.h"
#include <SFML/System/Clock.hpp>
#include <SFML/System/Vector2.hpp>
#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/RenderTarget.hpp>

class asteroid_manager : public sf::Drawable
{
private:
	std::vector<Asteroid> projectiles_;
	sf::Clock timer_;
	float dt = 0;

public:
	void Refresh(float dt, const sf::Vector2u window_size);

protected:
	//void draw(sf::RenderTarget target, sf::RenderStates states) const override;
};

#endif