#include "motorcycle.h"

Motorcycle::Motorcycle(int speed, const std::string& name) : _speed(speed), _name(name) {}

int Motorcycle::getSpeed() {
	return _speed;
}

const std::string& Motorcycle::getName() {
	return _name;
}