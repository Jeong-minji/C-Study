#include <iostream>
using namespace std;

/* Ŭ���� ���� */
class Point {
public:
	int x, y;
	void Print();
	Point();
	Point(int initialX, int initialY);
	Point(const Point& pt);
};

/* ������ */
Point::Point() {
	x = 0;
	y = 0;
}
Point::Point(int initialX, int initialY) {
	x = initialX;
	y = initialY;
}
Point::Point(const Point& pt) {
	cout << "���� ������ ȣ��" << endl;
	x = pt.x;
	y = pt.y;
}

/* �޼ҵ� */
void Point::Print()
{
	cout << "(" << x << ", " << y << ")" << "\n";
}

int main(void)
{
	Point pt1(100, 100), pt2(200, 200);
	Point pt3 = pt1; //���� ������ ȣ��

	Point pt4;
	pt4 = pt2; //���� ������ ȣ��x

	return 0;
}