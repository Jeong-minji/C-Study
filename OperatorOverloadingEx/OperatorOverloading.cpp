#include <iostream>
#include <Windows.h>

using namespace std;

/* 1. +������ �����ε� */
//class Circle
//{
//	int radius;
//
//public:
//	Circle(int radius)
//	{
//		this->radius = radius;
//	}
//
//	void showInfo()
//	{
//		cout << "radius: " << radius << endl;
//	}
//
//	void operator+(int value)
//	{
//		radius = radius + value;
//	}
//};
//
//int main(void)
//{
//	Circle c(3);
//	c.showInfo();
//
//	c + 3;
//	c.showInfo();
//
//	system("pause");
//	return 0;
//}


/* 2. ��� �Լ�(��ü������ ������ ����) */
//class Circle
//{
//	int radius;
//
//public:
//	Circle(int radius)
//	{
//		this->radius = radius;
//	}
//
//	void showinfo()
//	{
//		cout << "radius: " << radius << endl;
//	}
//
//	Circle operator+(const Circle &c) const
//	{
//		Circle tempCircle(this->radius + c.radius);
//		return tempCircle;
//	}
//};
//
//int main(void)
//{
//	Circle c1(3);
//	Circle c2(4);
//
//	Circle c3 = c1 + c2;
//
//	c3.showinfo();
//
//	system("pause");
//	return 0;
//}


/* 3. �����Լ� ������ �����ε� */
//class Circle
//{
//	int radius;
//
//public:
//	Circle(int radius)
//	{
//		cout << "Circle(int radius)" << endl;
//		this->radius = radius;
//	}
//
//	~Circle()
//	{
//		cout << "�Ҹ�" << endl;
//	}
//
//	void showinfo()
//	{
//		cout << "radius: " << radius << endl;
//	}
//	
//	Circle(const Circle &copy) : radius(copy.radius)
//	{
//		cout << "���� ������" << endl;
//	}
//
//	friend Circle operator+(const Circle &c1, const Circle &c2);
//};
//
//Circle operator+(const Circle &c1, const Circle &c2)
//{
//	Circle tempCircle(c1.radius + c2.radius);
//	return tempCircle;
//}
//
//int main(void)
//{
//	Circle c1(3);
//	cout << "c1 �ּ�: " << &c1 << endl;
//	Circle c2(4);
//	cout << "c2 �ּ�: " << &c2 << endl;
//	Circle c3 = c1 + c2;
//	cout << "c3 �ּ�: " << &c3 << endl;
//	c3.showinfo();
//
//	system("pause");
//	return 0;
//}


/* 4. ���� ������ �����ε�(1) */
//class Point
//{
//private:
//	int x, y;
//
//public:
//	Point(int x = 0, int y = 0) : x(x), y(y) {}
//	void showData();
//	Point& operator++();
//	Point operator++(int);
//};
//
//void Point::showData()
//{
//	cout << x << " " << y << endl;
//}
//
//Point& Point::operator++() // ��ġ ����
//{
//	x++;
//	y++;
//	return *this;
//}
//
//Point Point::operator++(int) // ��ġ ����
//{
//	Point temp(x, y);
//	x++;
//	y++;
//	return temp;
//}
//
//int main(void)
//{
//	Point p1(1, 2);
//	(p1++).showData();
//
//	Point p2(1, 2);
//	(++p2).showData();
//
//	system("pause");
//	return 0;
//}