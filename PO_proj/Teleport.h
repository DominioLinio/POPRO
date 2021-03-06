#pragma once
#include <SFML/Graphics.hpp>

class Teleport
{
private:
	sf::FloatRect bounding_box;
	sf::Vector2f exit_position;

public:
	Teleport(sf::FloatRect teleport_box, sf::Vector2f exit_position);
	~Teleport();

	const sf::FloatRect GetBounds() const;
	sf::Vector2f GetExitPosition() const;
};

/*

Teleport -> teleportowac

szefie, sluszna uwaga ^^^^

*/