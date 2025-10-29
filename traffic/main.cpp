#include "traffic_light.h"
int main() {
	crossroad perekr;
	perekr.nach();

	perekr.current_light();
	perekr.switchs();
	std::cout << "\n";
	perekr.current_light();
	perekr.switchs();
	std::cout << "\n";
	perekr.current_light();
	perekr.switchs();
	std::cout << "\n";
	perekr.current_light();
	perekr.switchs();
	std::cout << "\n";
	perekr.current_light();
	perekr.switchs();
	std::cout << "\n";
	perekr.current_light();
	return 0;
}
