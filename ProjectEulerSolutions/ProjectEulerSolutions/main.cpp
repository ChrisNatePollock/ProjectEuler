#include <iostream>
#include "toolbox.hpp"
#include "main.hpp"
#include <iostream>

template <typename Problem>
void provideAnswer();
void print();

int main(int argc, const char* argv[]) {
	std::cout << "Welcome to Chris' Project Euler progress." << std::endl;
	print();
}

template <typename Problem>
void provideAnswer() {
	Problem prob;
	auto timePoint1 = std::chrono::high_resolution_clock::now();
	std::cout << prob.getAnswer() << std::endl;
	auto timePoint2 = std::chrono::high_resolution_clock::now();
	std::cout << std::endl;
	std::cout << "Elapsed time: " << static_cast<std::chrono::duration<float>>(timePoint2 - timePoint1).count() << " seconds\n" << std::endl;
}

void print() {

	unsigned choice;

	const std::map<unsigned, std::function<void()>> choices {
			{ 1,provideAnswer<Problem1> },
			{ 2,provideAnswer<Problem2> },
			{ 3,provideAnswer<Problem3> },
			{ 4,provideAnswer<Problem4> },
			{ 5,provideAnswer<Problem5> },
			{ 6,provideAnswer<Problem6> },
			{ 7,provideAnswer<Problem7> },
			{ 8,provideAnswer<Problem8> },
			{ 9,provideAnswer<Problem9> },
			{ 10,provideAnswer<Problem10> },
			{ 11,provideAnswer<Problem11> },
			{ 12,provideAnswer<Problem12> },
			{ 13,provideAnswer<Problem13> },
			{ 14,provideAnswer<Problem14> },
			{ 15,provideAnswer<Problem15> },
			{ 16,provideAnswer<Problem16> },
	};

	do {
		std::cout << "Please enter the # of the problem you would like to solve: ";
		std::cin >> choice;
		std::cout << std::endl;

		auto pf = choices.find(choice);
		if (pf != choices.end()) {
			(pf->second)();
		}
		else {
			std::cout << "Problem does not exist or is not solved.\n\n***Now Exiting Program***\n" << std::endl;
			break;
		}
		std::cout << std::string(30, '*') << std::endl << std::endl;
	} while (true);
}