#ifndef GAME_H
#define GAME_H
#include "spaceship.h"
#include "asteroid_manager.h"
#include "ProjectileManager.h"
#include <SFML/Graphics/RenderWindow.hpp>


class Game
{
private:

	sf::RenderWindow window_;

	ProjectileManager projectiles_;
	//asteroid_manager asteroids_;
	Spaceship spaceship_;

public:

	Game();
	void Loop();
};
#endif // game_h