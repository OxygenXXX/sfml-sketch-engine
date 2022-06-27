#include "manager/manager.hpp"

namespace sketch::resources
{
	void ResourcesManager::loadFont(string font_name, string file_path)
	{
		sf::Font temp_font;

		if (!temp_font.loadFromFile(file_path))
		{
			std::cout << "Unable to load font: " << file_path << std::endl;

			return (void)EXIT_FAILURE;
		}

		this->fonts_list[font_name] = temp_font;

		return (void)EXIT_SUCCESS;
	}

	sf::Font& ResourcesManager::getFont(string font_name)
	{
		return this->fonts_list.at(font_name);
	}
}