#include "Student.h"

int Student::student_count = 0;
void Func();

void Student::PrintStdCount()
{
	cout << "Student °´Ã¼ ¼ö = " << student_count << "\n";
}

Student::Student(const string& name_arg, int stdNumber)
{
	student_count++;

	name = name_arg;
	sNo = stdNumber;
}

Student::~Student()
{
	student_count--;
}