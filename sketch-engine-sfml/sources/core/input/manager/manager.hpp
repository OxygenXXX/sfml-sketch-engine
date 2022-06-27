#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

using sf::Sprite;
using sf::RenderWindow;
using sf::Mouse;

namespace sketch::input
{
	class InputManager
	{
		public:

		InputManager(void);
		~InputManager(void);

		bool isSpriteClicked(RenderWindow& wnd_app, Sprite obj_sprite, Mouse::Button m_button);

		sf::Vector2i getMouseCoords(sf::RenderWindow& wnd_app);
	};
}