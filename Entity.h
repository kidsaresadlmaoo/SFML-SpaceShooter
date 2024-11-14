#ifndef npc_h
#define npc_h

#include <SFML/Graphics.hpp>

class Entity : public sf::Drawable, public sf::Transformable
{
protected:
	static sf::Texture texture_;
	sf::Vector2f direction_;
	sf::Sprite sprite_;

	bool is_dead_ = false;

protected:
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

public:
	bool IsDead() const { return is_dead_; }
	void SetDeath() { is_dead_ = true;  }

	void Move(float dt, const sf::Vector2u& window_size);
	bool Intersects(sf::FloatRect hitbox);
	sf::FloatRect HitBox() const;
};
#endif