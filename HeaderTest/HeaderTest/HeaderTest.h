#include "HeaderTest2.h"

void A1();
void A2();

void A1() {
	std::cout << "function A1" << "\n";
	A2();
}

void A2() {
	std::cout << "function A2" << "\n";
	B1();
	B2();
}