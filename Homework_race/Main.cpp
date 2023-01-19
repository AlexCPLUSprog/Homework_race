#include "automobile.h"
#include "motorcycle.h"


bool race(Automobile car, Motorcycle moto, std::string track) {
	double motoSpeed = moto.getSpeed();
	double carSpeed = car.getSpeed();

	if (track == "MotoTrack") {
		motoSpeed *= 1.5;
	}

	if (track == "CarTrack") {
		carSpeed *= 1.5;
	}

	if (motoSpeed < carSpeed) {
		return 1;
	}
	else {
		return 0;
	}
	

}

int main() {

	
	Automobile Auto(50, "Automobile");
	Motorcycle Moto(50, "Motorcycle");

	if (race(Auto, Moto, "CarTrack") == 1) {
		std::cout << "The winner is " << Auto.getName() << '\n';

	}
	else {
		std::cout << "The winner is " << Moto.getName() << '\n';
	}

	if (race(Auto, Moto, "MotoTrack") == 0) {
		std::cout << "The winner is " << Moto.getName() << '\n';

	}
	else {
		std::cout << "The winner is " << Auto.getName() << '\n';
	}

	std::cout << race(Auto, Moto, "CarTrack") << '\n';
	std::cout << race(Auto, Moto, "MotoTrack") << '\n';


}