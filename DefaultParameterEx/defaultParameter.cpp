#include <iostream>
#include <Windows.h>

using namespace std;

void ff(int a = 0, int b = 0) // 지정할 때는 오른쪽부터
{
	cout << "a: " << a << ", b: " << b << endl;
}

int main(void)
{
	ff();
	ff(10); // 적용될 때는 왼쪽부터
	ff(10, 100);

	system("pause");
	return 0;
}