#include <iostream>
#include <Windows.h>

using namespace std;

void ff(int a = 0, int b = 0) // ������ ���� �����ʺ���
{
	cout << "a: " << a << ", b: " << b << endl;
}

int main(void)
{
	ff();
	ff(10); // ����� ���� ���ʺ���
	ff(10, 100);

	system("pause");
	return 0;
}