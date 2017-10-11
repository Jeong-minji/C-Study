#include <iostream>
using namespace std;

//class Point
//{
//public:
//	int x, y;
//	void Print();
//	Point();
//	Point(int initialX, int initialY);
//	Point(const Point& pt);
//};
//
//Point::Point(const Point& pt)
//{
//	cout << "복사 생성자 호출됨!!\n";
//	x = pt.x;
//	y = pt.y;
//}
//
//Point pt1(100, 100), pt2(200, 200);

//Point pt3 = pt1;
//pt3.Print();
//
//pt3 = pt2;
//pt3.Print();

// ---------------

class NeedConstructor {
public:
	const int maxCount;
	int& ref;
	int sample;

	NeedConstructor();
};

NeedConstructor::NeedConstructor() {

}