#include "game.h"
#include <SFML/Window/Event.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

Game::Game()
{
	window_.create(sf::VideoMode(1280, 720), "SpaceShooter");
}

void Game::Loop()
{
    while (window_.isOpen())
    {
        sf::Event event;
        while (window_.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window_.close();

            if (event.type == sf::Event::MouseButtonReleased)
            {
                //projectiles_.Spawn(sf::Vector2f(event.mouseButton.x, event.mouseButton.y));
            }
        }
    }
}