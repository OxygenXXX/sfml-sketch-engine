#pragma once

#include <SFML/Graphics.hpp>

#include <string>

using sf::Vector2f;

using sf::Color;
using sf::Font;

using std::string;

namespace sketch::gui
{
	class Button
	{
		public:

		enum
		{
			Normal = 0,
			Hovered = 1,
			Clicked = 2,
		};

		Button(Vector2f btn_size, string btn_text, Color bg_color, Color fg_color);

		void setTextFont(const sf::Font& btn_font);

		void setTextSize(const uint16_t btn_fsize);

		void setTextColor(const sf::Color fg_color);

		void setBackgroundColor(const sf::Color bg_color);

		void setButtonPosition(const sf::Vector2f& btn_pos);

		bool isButtonHovered(sf::RenderWindow& render_window);

		void displayButton(sf::RenderWindow& render_window);

		private:

		sf::RectangleShape button_shape;

		sf::Color shape_color_normal;
		sf::Color shape_color_hovered;
		sf::Color shape_color_clicked;

		sf::Color font_color_normal;
		sf::Color font_color_hovered;
		sf::Color font_color_clicked;

		sf::Color shape_border_color;
		sf::Color font_shadow_color;

		sf::Text button_text;

	};
}

