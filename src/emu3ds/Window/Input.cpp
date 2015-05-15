#include <SFML/Graphics.hpp>
#include <cpp3ds/Emulator.hpp>
#include <cpp3ds/Window/Input_.hpp>

namespace cpp3ds {

	float Input::slider = 0;

	int Input::getHID(){
		// last_hid = read_word(HID);
		last_hid = 0;
		return last_hid;
	}

	bool Input::isDown(sf::Keyboard::Key button) {
		// return (~read_word(HID) & button);
		return sf::Keyboard::isKeyPressed(button);
	}

	void Input::update(float deltaTime){
		Input::slider = _emulator->get_slider3d();
	}

}
