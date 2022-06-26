#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include <string>

#include "core/application/application.hpp"

using sf::Event;

namespace sketch::gui
{
	class Button
	{
		public:

		virtual void buttonStateNormal();
		virtual void buttonStateHovered();
		virtual void buttonStateClicked();

		void pollButtonEvents(Event& wnd_event, Application::InputManager& wnd_inputs);

		void displayButton();

		/*
		
		Button(Vector2f btn_size, string btn_text);

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



		sf::Text button_container_text;

	};
}

