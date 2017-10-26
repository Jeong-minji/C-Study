#include <iostream>
using namespace std;

/* 클래스 선언 */
class Point {
public:
	int x, y;
	void Print();
	Point();
	Point(int initialX, int initialY);
	Point(const Point& pt);
};

/* 생성자 */
Point::Point() {
	x = 0;
	y = 0;
}
Point::Point(int initialX, int initialY) {
	x = initialX;
	y = initialY;
}
Point::Point(const Point& pt) {
	cout << "복사 생성자 호출" << endl;
	x = pt.x;
	y = pt.y;
}

/* 메소드 */
void Point::Print()
{
	cout << "(" << x << ", " << y << ")" << "\n";
}

int main(void)
{
	Point pt1(100, 100), pt2(200, 200);
	Point pt3 = pt1; //복사 생성자 호출

	Point pt4;
	pt4 = pt2; //복사 생성자 호출x

	return 0;
}