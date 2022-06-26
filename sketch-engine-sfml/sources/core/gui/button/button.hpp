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

		Button(Vector2f btn_size, string btn_text);

		virtual void eventButtonHovered();
		virtual void eventButtonClicked();

		void pollButtonEvents();

		void displayButton();

		/*

		void pollButtonEvents(sf::RenderWindow& render_window, sf::Event& window_event);
		void displayButton(sf::RenderWindow& render_window);

		void setTextFont(const sf::Font& btn_font);

		void setTextColor(const sf::Color fg_color, uint8_t btn_state);

		void setTextSize(const uint16_t btn_fsize);

		void setTextColor(const sf::Color fg_color);

		void setBackgroundColor(const sf::Color bg_color);

		void setButtonPosition(const sf::Vector2f& btn_pos);

		bool isButtonHovered(sf::RenderWindow& render_window);

		void displayButton(sf::RenderWindow& render_window);
		void updateButton(sf::RenderWindow& render_window, sf::Event& window_event);

		void eventButtonHovered();
		void eventButtonClicked();

		*/

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

		uint8_t current_button_state = 0;

		sf::Text button_text;

	};
}

