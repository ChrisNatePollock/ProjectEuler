#include "main.hpp"
#include <chrono>
#include <iostream>

Problem1 problem1;

void Case::SolveCase(int numOfProblem){
	switch (numOfProblem) {
	case 1:
		auto timePoint1 = std::chrono::high_resolution_clock::now();
		std::cout << problem1.getAnswer() << std::endl;
		auto timePoint2 = std::chrono::high_resolution_clock::now();
		std::cout << std::endl;
		std::cout << "Elapsed time: " << static_cast<std::chrono::duration<float>>(timePoint2 - timePoint1).count() << " seconds" << std::endl;
		break;
	}
}