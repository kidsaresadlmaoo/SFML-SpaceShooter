#ifndef spaceship_h
#define spaceship_h
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics/Transformable.hpp>

constexpr float kSpeed = 500.f;

class Spaceship : public sf::Drawable, private sf::Transformable
{
private:
	sf::Texture texture_;
	sf::Sprite sprite_;

public:
	Spaceship();
	void Move(sf::Vector2f direction, float dt);

	void SetPosition(sf::Vector2u position);
	sf::Vector2f GetPosition() { return getPosition(); }

protected:
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
};

#endif