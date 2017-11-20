// A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
// a2 + b2 = c2
// For example, 32 + 42 = 9 + 16 = 25 = 52.
//	There exists exactly one Pythagorean triplet for which a + b + c = 1000.
//	Find the product abc.

#include "main.hpp"
#include <iostream>
#include "toolbox.hpp"
#include <cmath>

int Problem9::getProductOfPythagoreanTriplet(int sumOfABC) {
	for (int a = 1; a < 499; a++) {
		for (int b = 1; b < 499; b++) {
			double c = sqrt(pow(a, 2) + pow(b, 2));
			if (a + b + c == 1000 && (a < b) && (b < c)) {
				return a * b * c;
			}
		}
	}
	return -1;
}

std::string Problem9::getAnswer() {
	std::cout << "There exists exactly one Pythagorean triplet for which a + b + c = 1000 find the product abc" << std::endl;
	std::cout << "Answer: ";
	return std::to_string(getProductOfPythagoreanTriplet(1000));
}