// What is the largest prime factor of the number 600851475143 ?

#include "main.hpp"

#include <numeric>
#include <iostream>
#include "toolbox.hpp"

#define NUMBER 600851475143

std::string Problem3::getAnswer() {

	unsigned long long int primeFactor = (int)std::sqrt(NUMBER);

	while (primeFactor > 0) {
		if ((NUMBER % primeFactor == 0) && toolbox::isPrime(primeFactor)) {
			break;
		}
		--primeFactor;
	}

	return "The largest prime factor of the # 600851475143 is: " + std::to_string(primeFactor);
}