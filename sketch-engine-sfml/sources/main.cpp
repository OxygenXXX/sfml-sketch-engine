
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include <iostream>

#include "core/input/input.hpp"

signed int main(void)
{
	sf::RenderWindow window_controller(sf::VideoMode(1366, 768), "Hello");

	sf::Texture button_example;
	sf::Font button_example_font;

	if (!button_example.loadFromFile("example.png"))
	{
		std::cout << "Unable to load button texture!";
	}

	if (!button_example_font.loadFromFile("arial.ttf"))
	{
		std::cout << "Unable to load button font";
	}

	sf::Sprite button_sprite(button_example);

	button_sprite.setPosition(50, 50);

	while (window_controller.isOpen())
	{
		sf::Event window_event;

		while (window_controller.pollEvent(window_event))
		{
			if (window_event.type == sf::Event::Closed)
			{
				window_controller.close();
			}
		}

		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			button_sprite.setColor(sf::Color::Blue);
		}

		window_controller.clear();

		window_controller.draw(button_sprite);

		window_controller.display();
	}

	return EXIT_SUCCESS;
}