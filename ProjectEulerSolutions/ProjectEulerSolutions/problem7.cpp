// By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
// What is the 10 001st prime number ?

#include "main.hpp"
#include "toolbox.hpp"
#include <iostream>

#include <cmath>

int Problem7::getNthPrimeNumber(int n) {
	int numPrimes = 0;
	int i = 1;
	while (numPrimes < n) {
		if (toolbox::isPrime(i)) {
			++numPrimes;
			if (numPrimes == n) {
				return i;
			}
		}
		++i;
	}
	return i;
}

std::string Problem7::getAnswer() {
	std::cout << "The the 10 001st prime number is: ";
	return std::to_string(getNthPrimeNumber(10001));
}