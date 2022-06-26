#pragma once

#include "core/input/input.hpp"

using sketch::input::MouseController;
using sketch::input::KeyboardController;

namespace sketch
{
	class Application
	{
		public:

		MouseController* mouse_controller;
		KeyboardController* keyboard_controller;

		sf::RenderWindow* window_controller;

		private:


	};
}