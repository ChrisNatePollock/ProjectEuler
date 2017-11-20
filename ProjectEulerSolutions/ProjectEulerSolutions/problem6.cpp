// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include "main.hpp"
#include "toolbox.hpp"
#include <iostream>

int Problem6::resolve(unsigned natNum) {
	unsigned sumOfSqs = 0;
	unsigned sumOfNums = 0;
	for (unsigned i = 1; i <= natNum; ++i) {
		sumOfSqs += (i*i);
		sumOfNums += i;
	}
	return ((sumOfNums*sumOfNums) - sumOfSqs);
}

std::string Problem6::getAnswer() {
	std::cout << "The difference between the sum of the square of the first hundred natural numbers and the square of the sum is: ";
	return std::to_string(resolve(100));
}