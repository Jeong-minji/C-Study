#include <iostream>
#include <cmath>
using namespace std;

//void UsingArray(char arr[]) {																		// 주소만 가르킬 것이기 때문에 공간이 몇인지는 필요가 없음 -> 배열 개수 적어주지 않는다.
//	cout << "In UsingArray: " << arr << "\n";
//	arr[12] = '?';
//}
//
//int main() {
//	char array[20] = "Hello, World!";
//	UsingArray(array);
//	cout << "In main(): " << array << "\n";
//	return 0;
//}z

struct Point {
	int x, y;
};

int main() {
	Point a = { 0, 0 };
	Point b = { 3, 4 };
	double dist_a_b = Distance(a, b);
	return 0;
}

double Distance(const Point& p1, const Point& p2) {

	double distance;
	distance = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));

	return distance;
}