#include "../manager/manager.hpp"

namespace sketch::input
{
	bool InputManager::isSpriteClicked(RenderWindow& wnd_app, Sprite obj_sprite, Mouse::Button m_button)
	{
		if (sf::Mouse::isButtonPressed(m_button))
		{
			sf::Vector2f sprite_pos(obj_sprite.getPosition().x, obj_sprite.getPosition().y);
			sf::Vector2f sprite_bounds(obj_sprite.getGlobalBounds().width, obj_sprite.getGlobalBounds().height);

			sf::IntRect temp_rect(sprite_pos.x, sprite_pos.y, sprite_bounds.x, sprite_bounds.y);

			if (temp_rect.contains(this->getMouseCoords(wnd_app))) return true;

			return false;
		}

		return false;
	}

	sf::Vector2i InputManager::getMouseCoords(sf::RenderWindow& wnd_app)
	{
		return sf::Mouse::getPosition(wnd_app);
	}
}