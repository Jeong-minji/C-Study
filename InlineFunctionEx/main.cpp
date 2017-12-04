#include <iostream>
#include <Windows.h>

using namespace std;

#define double(x) ((x) * (x))

inline int squareInline(int x) { return x * x; }

int main(void) {
	int x = 2;
	
	cout << double(++x) << endl;

	system("pause");
	return 0;
}