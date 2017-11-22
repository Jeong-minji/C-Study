#include <iostream>
using namespace std;

class Student 
{
	friend void show(Student s, Professor p);

	int id;

public:
	Student(int id)
	{
		this->id = id;
	}
};

class Professor
{
	friend void show(Student s, Professor p);
	string name;

public:
	Professor(string name) {
		this->name = name;
	}
};

void show(Student s, Professor p) {
	cout << "���̵�: " << s.id << "		�̸�: " << p.name << endl;

}

int main()
{
	Student s(100);
	Professor p("���߱�");
	show(s, p);
}