#include <iostream>
using namespace std;

class Circle {
	int radius;

public:
	Circle(int radius)
	{
		this->radius = radius;
	}

	void showInfo()
	{
		cout << "radius: " << radius << endl;
	}

	/*void operator+(int value)
	{
		radius = radius + value;
	}*/

	Circle operator + (const Circle& c) const {
		Circle tempCircle(this->radius + c.radius);
		return tempCircle;
	}
};

int main()
{
	//Circle c(3);
	//c.showInfo();

	//c + 3;					// c.operator + (3)
	//c.showInfo();

	Circle c1(3);
	Circle c2(4);

	//��ü�� ������ ���� �����ε�
	Circle c3 = c1 + c2;
	c3.showInfo();

	return 0;
}