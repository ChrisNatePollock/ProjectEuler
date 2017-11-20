// 2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
// What is the sum of the digits of the number 2^1000 ?

#include "main.hpp"
#include "toolbox.hpp"

#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>

// ask how in the hell to use super large #'s

unsigned long long Problem16::sumOfDigits(BigNumber number, int power) {

	BigNumber value = number.pow(power);
	unsigned long long total = 0;

	for (char c : value.getString()) {
		total += (c - '0');
	}
	return total;
}

std::string Problem16::getAnswer() {

	unsigned long long num = 2;
	std::cout << "The sum of the digits of the number 2^1000 is: ";
	return std::to_string(sumOfDigits(num, 1000));
}