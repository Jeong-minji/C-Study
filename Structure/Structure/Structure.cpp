#include <iostream>
using namespace std;

int main() {

	/*struct point {
		int x;
		int y;
	};

	point pt1 = { 30, 50 };
	point pt2;

	pt2 = pt1;

	cout << "pt1 = {" << pt1.x << ", " << pt1.y << "}\n";
	cout << "pt2 = {" << pt2.x << ", " << pt2.y << "}\n";*/

	/*struct Student {
		char bloodType;
		int stdNumber;
		float grade;
	};

	Student st1;
	st1.bloodType = 'A';
	st1.stdNumber = 337;
	st1.grade = 4.5;

	Student st2;

	st2 = st1;

	cout << "st1: " << st1.bloodType << " " <<  st1.stdNumber << " " <<  st1.grade << endl;
	cout << "st2: " << st2.bloodType << " " << st2.stdNumber << " " << st2.grade << endl;*/

	/*int a = 123;
	int* p = &a;

	cout << "*p = " << *p << "\n";
	cout << "p = " << p << "\n";

	*p = 789;

	cout << "a = " << a << "\n";
	cout << "*p = " << *p << "\n";*/

	/*int i = 0x12345678;

	char* pc = (char*)&i;

	int a = 123;
	int* p = &a;

	cout << "*p = " << *p << "\n";

	*p = 789;

	cout << "p = " << p << "\n";
	cout << "a = " << a << "\n";
	cout << "*p = " << *p << "\n";
	cout << hex;
	cout << "(int)*pc =  " << (int)*pc << "\n";
	cout << "*pc = " << *pc << "\n";
	return 0;*/

	struct StudentInfo {
		char name[5];
		int num;
		char dname[10];
		char s;
		int phone[20];
		char address[30];
		StudentInfo* p;
	};

	StudentInfo st1, st2, st3;

	st1 = {
		{"Tom", 20117, "SW개발과", "01099457580", "대전광역시",};
	}

	cout << st1.name << endl;
}