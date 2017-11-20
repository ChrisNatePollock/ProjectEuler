// Find the largest palindrome made from the product of two 3-digit numbers.

#include "main.hpp"
#include "toolbox.hpp"

// These 3 are imported in an .hpp is it good practice to put them in again?
#include <sstream>
#include <algorithm>
#include <vector>

#include <iostream>

bool Problem4::isPalindrome(int num) {

	int hold = num;
	int sum = 0;
	int r;

	while (hold) {
		r = hold % 10;
		hold = hold / 10;
		sum = sum * 10 + r;
	}
	return num == sum;
}

int Problem4::getLargestPalindrome() {

	std::vector<int> vect;
	const int num1 = 999;
	const int num2 = 999;
	for (int i = num1; i > 99; --i) {
		for (int j = num2; j > 99; --j) {
			if (isPalindrome(i * j)) {
				vect.push_back(i * j);
			}
		}
	}

	// std::distance - Returns the number of hops from first to last
	return vect[std::distance(vect.begin(), max_element(std::begin(vect), std::end(vect)))];
}

std::string Problem4::getAnswer() {
	std::cout << "the largest palindrome made from the product of two 3-digit numbers is: ";
	return std::to_string(getLargestPalindrome());
}