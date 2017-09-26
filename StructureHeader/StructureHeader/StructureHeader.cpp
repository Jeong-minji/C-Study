#include <iostream>
using namespace std;
#include "StructureHeader.h";
#include "StructureHeader2.h";

int main() {
	Point a = { 100, 200 };
	Point b = { 200, 200 };

	double dist;
	dist = Distance(a, b);

	return 0;
}