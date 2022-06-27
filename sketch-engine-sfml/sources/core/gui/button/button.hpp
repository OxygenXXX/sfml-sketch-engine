#pragma once

#include <SFML/Graphics.hpp>

namespace sketch::gui
{
	class Button
	{
		public:



		private:


		sf::Color button_color_normal;
		sf::Color button_color_hovered;
		sf::Color button_color_clicked;

		sf::Color font_color_normal;
		sf::Color font_color_hovered;
		sf::Color font_color_clicked;
	};
}