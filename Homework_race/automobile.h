#pragma once
#include <iostream>
#include <string>

class Automobile {
public:
	Automobile(int speed, const std::string& name);

	int getSpeed();

	const std::string& getName();

private:
	int _speed;
	std::string _name;
};
