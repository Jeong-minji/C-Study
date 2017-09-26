#include <iostream>

#include "A.h"
#include "B.h"

using namespace std;

void A1() {
	std::cout << "function A1\n";
	A2();
}

void A2() {
	std::cout << "function A2\n";
	B1();
	B2();
}