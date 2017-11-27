#include <iostream>
using namespace std;

class Circle
{
	int radius;

public:
	Circle(int radius)
	{
		cout << "Circle(int radius) " << endl;
		this->radius = radius;
	}

	Circle(const Circle& copy) : radius(copy.radius)
	{
		cout << "Circle(const Circle& copy) 龋免 :		林家: " << this << endl;
	}

	~Circle()
	{
		cout << "~Circle()" << endl;
	}

	void showInfo()
	{
		cout << "radius: " << radius << endl;
	}

	friend Circle operator+(const Circle& c1, const Circle& c2);
};

Circle operator+(const Circle& c1, const Circle& c2)
{
	Circle tempCircle(c1.radius + c2.radius);
	return tempCircle;
}

int main()
{
	Circle c1(3);
	cout << "c1 林家: " << &c1 << endl;
	Circle c2(4);
	cout << "c2 林家: " << &c2 << endl;
	Circle c3 = c1 + c2;
	cout << "c3 林家: " << &c3 << endl;
	c3.showInfo();

	return 0;
}