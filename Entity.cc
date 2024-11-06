#include "Entity.h"
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/RenderTarget.hpp>

void Entity::Move(float dt, const sf::Vector2u& window_size)
{
	setPosition(getPosition() + direction_ * dt);

	sf::Vector2f position = getPosition();
	sf::Vector2f borders = sf::Vector2f(sprite_.getGlobalBounds().width / 2, sprite_.getGlobalBounds().height / 2);

	if (position.x < -1 * borders.x ||
		position.x > window_size.x + borders.x ||
		position.y < -1 * borders.y ||
		position.y > window_size.y + borders.y)
	{
		is_dead_ = true;
	}
}