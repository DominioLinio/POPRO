#pragma once
#include <vector>
#include <SFML/Graphics.hpp>
#include "state.h"

const sf::Color SELECTED_COLOR = sf::Color::White;
const int SELECTED_SIZE = 100;
const sf::Color UNSELECTED_COLOR = sf::Color::Cyan;
const int UNSELECTED_SIZE = 90;
const sf::Color TITLE_COLOR = sf::Color::Cyan;
const int TITLE_SIZE = 120;
const sf::Vector2f TITLE_POSITION = sf::Vector2f(220.0f, 50.0f);


class MenuState : public State {
private:
	int selected = 0;
	sf::Font font;
	sf::Text title;
	std::vector<sf::Text> options;
	sf::View menuView;
	void select(int index);
	std::shared_ptr<sf::Texture> menuTexture;
	sf::RectangleShape menuBackground;
public:
	MenuState(StateMachine& machine, const std::string& title, sf::Font &font);
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
	virtual void update(sf::RenderWindow& window, float deltaTime);
	void add_option(const std::string& contents, const sf::Vector2f position);

	void move_up();
	void move_down();
	int get_selected_option() const;
};