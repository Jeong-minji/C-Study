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
	cout << "복사 생성자 호출됨!\n";
	x = pt.x;
	y = pt.y;
}

Point pt1(100, 100), pt2(200, 200);

//pt1을 사용해서 새로운 pt2를 초기화
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