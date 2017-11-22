#include <iostream>
using namespace std;

class Point {
	int val_x;					// 접근 제한자 지정 안하면 기본이 private
	int val_y;

public:
	Point(int x, int y) {
		val_x = x;
		val_y = y;
	}

	friend void Reset(Point &M);
	void Disp() {
		cout << val_x << ", " << val_y << endl;
	}
};

void Reset(Point &M) {					// 전역함수 Reset
	M.val_x = 0;
	M.val_y = 0;
}

void main()
{
	Point pt1(9, 5);
	pt1.Disp();
	Reset(pt1);
	pt1.Disp();
	Point pt2(2, 3);
	pt2.Disp();
	Reset(pt2);
	pt2.Disp();
}