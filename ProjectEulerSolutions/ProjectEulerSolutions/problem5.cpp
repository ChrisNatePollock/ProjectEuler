// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#include "main.hpp"
#include "toolbox.hpp"
#include <iostream>

#define NUMBER 20

int Problem5::resolve() {

	unsigned value = 1;

	for (unsigned i = NUMBER; i > 0; --i) {
		value *= i / toolbox::gcd(i, value);
	}
	return value;
/*
	long num = 1;
	int advancements = 0;

	while (true) {
		for (long i = begin; i < end; i++) {
			if (num % i != 0) {
				break;
			}
			else {
				advancements++;
			}
		}

		if (advancements != end - begin) {
			advancements = 0;
			num++;
		}
		else {
			return num;
		}
	}*/
}

std::string Problem5::getAnswer() {
	std::cout << "The smallest positive number that is evenly divisible by all of the numbers from 1 to 20 is: ";
	return std::to_string(resolve());
}