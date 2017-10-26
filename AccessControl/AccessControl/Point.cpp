#include <iostream>
#include <Windows.h>

using namespace std;

/* Ŭ���� ���� */
class Point {
private:
	int x, y;
public:
	void SetX(int value);
	void SetY(int value);
	int GetX();
	int GetY();
};

/* �޼ҵ� */
void Point::SetX(int value) {
	if (value < 0)
		value = 0;
	else if (value > 100)
		value = 100;

	x = value;
}
void Point::SetY(int value) {
	if (value < 0)
		value = 0;
	else if (value > 100)
		value = 100;

	y = value;
}
int Point::GetX() {
	return x;
}
int Point::GetY() {
	return y;
}

/* ���� �Լ� */
int main(void)
{
	Point pt1;

	pt1.SetX(101);
	pt1.SetY(102);

	cout << pt1.GetX() << endl;
	cout << pt1.GetY() << endl;

	system("pause");
	return 0;
}