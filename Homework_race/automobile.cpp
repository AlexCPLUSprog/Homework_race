#include "automobile.h"

Automobile::Automobile(int speed, const std::string& name) : _speed(speed), _name(name) {}

int Automobile::getSpeed() {
	return _speed;
}

const std::string& Automobile::getName() {
	return _name;
}
