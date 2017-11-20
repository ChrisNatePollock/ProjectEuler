// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
// Find the sum of all the primes below two million.

#include "main.hpp"
#include <iostream>
#include "toolbox.hpp"

unsigned long long Problem10::getSumOfPrimesBelowNum(int num) {
	unsigned long long total = 2;
	for (int i = 3; i < num; i += 2) {
		if (toolbox::isPrime(i)) {
			total += i;
		}
	}
	return total;
}

std::string Problem10::getAnswer() {
	std::cout << "Find the sum of all the primes below two million" << std::endl;
	std::cout << "Answer: ";
	return std::to_string(getSumOfPrimesBelowNum(2000000));
}