// The following iterative sequence is defined for the set of positive integers :
// n → n / 2 (n is even)
// n → 3n + 1 (n is odd)
// Using the rule above and starting with 13, we generate the following sequence :
// 13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1
// It can be seen that this sequence(starting at 13 and finishing at 1) contains 10 terms.Although it has not been proved yet(Collatz Problem), it is thought that all starting numbers finish at 1.
// Which starting number, under one million, produces the longest chain ?
// NOTE : Once the chain starts the terms are allowed to go above one million.

#include "main.hpp"
#include <iostream>
#include "toolbox.hpp"

unsigned long long Problem14::getStartingNumberUnderX(unsigned max) {

	unsigned long long longestChainStart = 0;
	unsigned long long value = 0;
	unsigned long long chainLinks = 0;
	unsigned long long longestChainLinks = 0;
	std::vector<unsigned long long> vect(max);

	for (unsigned i = 1; i < max; ++i) {
		value = i;
		chainLinks = 1;
		while (value > 1) {
			if (value % 2 == 0) {
				value /= 2;
			}
			else {
				value *= 3;
				++value;
			}
			if (value < i) {
				chainLinks += vect[(unsigned)value - 1];
				break;
			}
			++chainLinks;
		}
		if (chainLinks > longestChainLinks) {
			longestChainLinks = chainLinks;
			longestChainStart = i;
		}

		vect[i - 1] = chainLinks;

	}
	return longestChainStart;
}

std::string Problem14::getAnswer() {
	std::cout << "The starting number under one million that produces the longest chain is: ";
	return std::to_string(getStartingNumberUnderX(1000000));
}