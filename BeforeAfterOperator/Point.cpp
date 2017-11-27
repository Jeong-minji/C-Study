#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;
	
public:
	Point(int x = 0, int y = 0) : x(x), y(y) { }
	void Showdata();
	Point& operator++();
	Point operator++(int);
};

void Point::Showdata()
{
	cout << x << " " << y << endl;
}

Point& Point::operator++() {
	x++;
	y++;
	return *this;
}

Point Point::operator++(int) {
	Point tmp(x, y);
	x++;
	y++;
	return tmp;
}

int main()
{
	Point p1(1, 2);
	(p1++).Showdata();

	Point p2(1, 2);
	(++p2).Showdata();

	return 0;
}