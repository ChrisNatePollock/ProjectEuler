// By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

#include "main.hpp"
#include "toolbox.hpp"

#include <numeric>
#include <iostream>


std::string Problem2::getAnswer() {

	int i = 1;
	int j = 1;
	int k;
	int sum = 0;

	while (j <= 4000000) {

		if (j % 2 == 0) {
			sum += j;
		}

		k = j;
		j += i;
		i = k;

	}

	std::cout << "Sum of even #'s in Fibonacci sqeuence not exceeding the # 4'000'000 is: ";

	return std::to_string(sum);
}