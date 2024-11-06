#ifndef GAME_H
#define GAME_H
#include <SFML/Graphics/RenderWindow.hpp>
#include "ProjectileManager.h"

class Game
{
private:

	sf::RenderWindow window_;

public:

	Game();
	void Loop();
};
#endif // game_h