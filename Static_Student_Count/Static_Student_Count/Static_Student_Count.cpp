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
			static int student_count;
			static void PrintStdCount();

};

int Student::student_count = 0;

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

void Func()
{
	Student std1("Bill", 342);
	Student std2("James", 214);

	Student::PrintStdCount();
}

int main()
{
	Student :: PrintStdCount();

	Student std("Jeffery", 123);

	Student::PrintStdCount();

	Func();

	Student::PrintStdCount();

	return 0;
}