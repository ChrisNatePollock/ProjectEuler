// What is the value of the first triangle number to have over five hundred divisors?

#include "main.hpp"
#include <iostream>
#include "toolbox.hpp"
#include <cmath>

int Problem12::getNumberOfDivisors(int x) {

	int root = sqrt(x);
	int divisors = 0;

	for (int i = 1; i <= root; ++i) {
		if (x % i == 0) {
			divisors += 2;
		}
	}

	if (pow(root, 2) == x) {
		--divisors;
	}
	return divisors;
}

int Problem12::getFirstTriangleNumberWithGreaterThanNumOfDivisors(int n) {
	int triangleNumber = 0;
	int count = 1;
	while (true) {
		triangleNumber += count;
		if (getNumberOfDivisors(triangleNumber) > n) {
			return triangleNumber;
		}
		++count;
	}
	return triangleNumber;
}

std::string Problem12::getAnswer() {
	std::cout << "What is the value of the first triangle number to have over five hundred divisors?" << std::endl;
	std::cout << "Answer: ";
	return std::to_string(getFirstTriangleNumberWithGreaterThanNumOfDivisors(500));
}