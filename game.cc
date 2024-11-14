#include "game.h"
#include <SFML/Window/Event.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

Game::Game()
{
	window_.create(sf::VideoMode(1280, 720), "SpaceShooter");
}

void Game::Loop()
{
    float dt = 0.016f;

    while (window_.isOpen())
    {
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
            spaceship_.Move({ 0, -1 }, dt);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
            spaceship_.Move({ 0, 1 }, dt);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            spaceship_.Move({ -1 , 0 }, dt);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            spaceship_.Move({ 1, 0 }, dt);

        sf::Event event;
        while (window_.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window_.close();

            if (event.type == sf::Event::MouseMoved)
            {
                spaceship_.SetPosition(sf::Vector2u(event.mouseMove.x, event.mouseMove.y));
            }
        }

        window_.clear();
        window_.draw(spaceship_);
        window_.display();
    }

    window_.setMouseCursorVisible(true);
}