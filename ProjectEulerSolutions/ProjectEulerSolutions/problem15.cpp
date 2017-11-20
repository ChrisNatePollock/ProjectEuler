// Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.
// How many such routes are there through a 20×20 grid ?

#include "main.hpp"
#include <iostream>
#include "toolbox.hpp"

//The formula is 40! / (20!)^2

unsigned long long Problem15::calcRouteNum(int sizeOfGrid) {

	return toolbox::choose(sizeOfGrid * 2, sizeOfGrid);
}

std::string Problem15::getAnswer() {

	std::cout << "The number of routes in a 20x20 grid is: ";
	return std::to_string(calcRouteNum(20));
}