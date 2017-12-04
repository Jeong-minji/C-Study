#include "Rect.h"
#include <iostream>
using namespace std;
int main()
{
	Rect rc1; 			 // Rect 객체 생성
	rc1.Print();			 // 내용 출력

	rc1.SetRect(10, 20, 30, 40);  // 값을 바꿔본다.
	rc1.Print();			 // 내용 출력

	rc1.SetTopLeft(Point(20, 20));// 또 값을 바꿔본다.
	rc1.Print();			 // 내용 출력

						 // 넓이, 높이 출력
	cout << "rc1.GetWidth() = " << rc1.GetWidth() << "\n";
	cout << "rc1.GetHeight() = " << rc1.GetHeight() << "\n";

	return 0;
}
