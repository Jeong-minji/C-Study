#include <iostream>
#include "Student.h"
using namespace std;

void Func()
{
	Student std1("Bill", 342);
	Student std2("James", 214);

	Student::PrintStdCount();
}

int main(void)
{
	Student::PrintStdCount();

	Student std("Jeffery", 123);

	Student::PrintStdCount();

	Func();

	Student::PrintStdCount();

	return 0;
}