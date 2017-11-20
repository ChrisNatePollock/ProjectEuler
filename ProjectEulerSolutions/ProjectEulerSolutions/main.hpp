#ifndef PROJECT_EULER_MAIN_HPP
#define PROJECT_EULER_MAIN_HPP

#include <vector>
#include <map>
#include "BigNumber.hpp"
#include <functional>

class Answer {
public:
	virtual std::string getAnswer() = 0;
};

class Problem1 : public Answer {
public:
	int resolve();
	std::string getAnswer();
};

class Problem2 : public Answer {
public:
	std::string getAnswer();
};

class Problem3 : public Answer {
public:
	std::string getAnswer();
};

class Problem4 : public Answer {
public:
	bool isPalindrome(int num);
	int getLargestPalindrome();
	std::string getAnswer();
};

class Problem5 : public Answer {
public:
	int resolve();
	std::string getAnswer();
};

class Problem6 : public Answer {
public:
	int resolve(unsigned natNum);
	std::string getAnswer();
};

class Problem7 : public Answer {
public:
	int getNthPrimeNumber(int n);
	std::string getAnswer();
};

class Problem8 : public Answer {
public:
	unsigned long long findGreatestProduct(int num);
	std::string getAnswer();
};

class Problem9 : public Answer {
public:
	int getProductOfPythagoreanTriplet(int sumOfABC);
	std::string getAnswer();
};

class Problem10 : public Answer {
public:
	unsigned long long getSumOfPrimesBelowNum(int num);
	std::string getAnswer();
};

class Problem11 : public Answer {
public:
	unsigned long long getGreatestProductOfXAdjacentNumbers(int x);
	std::string getAnswer();
};

class Problem12 : Answer {
public:
	int getNumberOfDivisors(int x);
	int getFirstTriangleNumberWithGreaterThanNumOfDivisors(int n);
	std::string getAnswer();
};

class Problem13 : Answer {
public:
	std::string numberToString(int num);
	std::string getFirstNDigitsFromSumOfNumbers(int n, std::string nums);
	std::string getAnswer();
};

class Problem14 : Answer {
public:
	unsigned long long Problem14::getStartingNumberUnderX(unsigned max);
	std::string getAnswer();
};

class Problem15 : Answer {
public:
	unsigned long long calcRouteNum(int sizeOfGrid);
	std::string Problem15::getAnswer();
};

class Problem16 : Answer {
public:
	unsigned long long Problem16::sumOfDigits(BigNumber number, int power);
	std::string getAnswer();
};

#endif