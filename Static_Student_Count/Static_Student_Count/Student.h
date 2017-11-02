#include <iostream>
using namespace std;

class Student
{
public:
	string name;
	int sNo;
	Student(const string& name_arg, int stdNumber);
	~Student();

public:
	// static members
	static int student_count;
	static void PrintStdCount();
};