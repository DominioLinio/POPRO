#pragma once
#include <SFML/Graphics.hpp>
#include "animation.h"
#include "Collider.h"
#include "entity.h"


class Enemy : public Entity
{
public:
	Enemy(int hp, sf::Texture* texture, sf::Vector2f position, float speed, sf::Vector2u imageCount, float switchTime);
	~Enemy();

private:
	Animation animation;
};

class Druid : public Enemy
{
    Druid(int hp);
};