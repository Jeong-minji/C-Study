#include <iostream>
using namespace std;

class Point {
	int val_x;					// ���� ������ ���� ���ϸ� �⺻�� private
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

void Reset(Point &M) {					// �����Լ� Reset
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