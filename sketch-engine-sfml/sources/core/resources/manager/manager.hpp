#pragma once

#include <SFML/Graphics.hpp>

#include <iostream>

#include <map>
#include <string>

using std::string;

namespace sketch::resources
{
	class ResourcesManager
	{
		public:

		ResourcesManager(void);
		~ResourcesManager(void);

		void loadTexture(string texture_name, string file_path);
		void loadFont(string font_name, string file_path);

		sf::Texture& getTexture(std::string texture_name);
		sf::Font& getFont(std::string font_name);

		private:

		std::map<std::string, sf::Texture> textures_list;
		std::map<std::string, sf::Font> fonts_list;
	};
}
