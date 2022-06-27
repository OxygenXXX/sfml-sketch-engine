#include "manager/manager.hpp"

namespace sketch::resources
{
	void ResourcesManager::loadTexture(string texture_name, string file_path)
	{
		sf::Texture temp_texture;

		if (!temp_texture.loadFromFile(file_path))
		{
			std::cout << "Unable to load texture: " << file_path << std::endl;

			return (void)EXIT_FAILURE;
		}

		this->textures_list[texture_name] = temp_texture;

		return (void)EXIT_SUCCESS;
	}

	sf::Texture& ResourcesManager::getTexture(string texture_name)
	{
		return this->textures_list.at(texture_name);
	}
}