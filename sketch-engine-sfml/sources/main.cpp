#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include <cstdint>
#include <string>

#define WINDOW_WIDTH 1366
#define WINDOW_HEIGHT 768

#define WINDOW_TITLE "SKetch Engine"

#include "core/gui/elements.hpp"

sf::RenderWindow window_controller;

sf::VideoMode window_vidmode(WINDOW_WIDTH, WINDOW_HEIGHT);

uint8_t window_style = sf::Style::Titlebar | sf::Style::Close;

signed int main(void)
{
	sf::VideoMode screen_size = sf::VideoMode::getDesktopMode();

	sf::Vector2i screen_center((screen_size.width / 2) - 683, (screen_size.height / 2) - 384);

	window_controller.create(window_vidmode, WINDOW_TITLE, window_style);

	sf::Font arial_font;
	if (!arial_font.loadFromFile("arial.ttf"))
	{
		return EXIT_FAILURE;
	}

	window_controller.setPosition(screen_center);

	sketch::gui::Button btn1({200, 200}, "hello", sf::Color::Red, sf::Color::Green);

	btn1.setButtonPosition({ 600, 400 });
	btn1.setTextFont(arial_font);

	btn1.setTextSize(40);

	while (window_controller.isOpen())
	{
		sf::Event window_event;

		while (window_controller.pollEvent(window_event))
		{
			if (window_event.type == sf::Event::Closed)
			{
				window_controller.close();
			}

			if (window_event.type == sf::Event::MouseMoved)
			{
				if (btn1.isButtonHovered(window_controller))
				{
					btn1.setBackgroundColor(sf::Color::Yellow);
				}

				else
				{
					btn1.setBackgroundColor(sf::Color::Red);
				}
			}
		}

		window_controller.clear();

		btn1.displayButton(window_controller);

		window_controller.display();
	}
}