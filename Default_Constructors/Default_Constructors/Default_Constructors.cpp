#include <iostream>
using namespace std;

class Point {
public:
	int x, y;
	void Print();
	Point();
	Point(int initialX, int tinitialY);
	Point(const Point& pt);
};

Point::Point(const Point& pt)
{                                                  
	cout << "���� ������ ȣ���!\n";
	x = pt.x;
	y = pt.y;
}

Point pt1(100, 100), pt2(200, 200);

//pt1�� ����ؼ� ���ο� pt2�� �ʱ�ȭ
Point pt3 = pt1;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
Point pt3(pt1);

//void Point::Print()
//{
//	cout << "(" << x << ", " << y << ")" << "\n";
//}

int main(void)
{
	Point pt;
	pt.Print();
}