// Find the sum of all the multiples of 3 or 5 below 1000.

#include "main.hpp"
#include <iostream>
#include "toolbox.hpp"

int Problem1::resolve() {
	int sum = 0;

	for (unsigned int i = 1; i < 1000; ++i) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum += i;
		}
	}
	return(sum);
}

std::string Problem1::getAnswer() {

	std::cout << "The sum of multiples of 3 and 5 that are below 1000 is: ";

	return std::to_string(resolve());
}