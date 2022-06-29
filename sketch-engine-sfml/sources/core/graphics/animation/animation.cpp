#include "animation.hpp"

namespace sketch::graphics
{
	Animation::Animation(Texture* obj_texture, Vector2u sp_counter, float fr_time)
	{
		this->switch_time = fr_time;

		this->sprites_counter = sp_counter;

		this->current_sprite.x = 0;

		this->texture_rect.width = obj_texture->getSize().x / (float)(sp_counter.x);
		this->texture_rect.height = obj_texture->getSize().y / (float)(sp_counter.y);
	}

	Animation::~Animation()
	{

	}

	void Animation::updateAnimation(uint16_t map_row, float delta_time)
	{
		this->current_sprite.y = map_row;

		this->total_time = this->total_time + delta_time;

		if (this->total_time >= this->switch_time)
		{
			this->total_time = this->total_time - this->switch_time;

			this->current_sprite.x = this->current_sprite.x + 1;

			if (this->current_sprite.x >= this->sprites_counter.x)
			{
				this->current_sprite.x = 0;
			}
		}

		this->texture_rect.left = this->current_sprite.x * this->texture_rect.width;
		this->texture_rect.top = this->current_sprite.y * this->texture_rect.height;
	}
}
