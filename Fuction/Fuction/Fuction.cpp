#include <iostream>
using namespace std;

char* ShifString(char* msg, int len)
{
	char* copy_msg = new char[len + 1];

	for (int i = 0; i < len - 1; ++i)
	{
		copy_msg[i] = msg[i + 1];
	}

	copy_msg[len - 1] = msg[0];

	// cooy_msg[] 
}
int main()
{
	char message[] = "BINGO JJANG!!!";

	char* copy = ShifString(message, 14);
	char* copy2 = ShifString(copy, 14);
	cout << copy << endl;
	cout << copy2 << endl;
	char* copy3 = ShifString(copy2, 14);
	cout << copy3 << endl;
	char* copy4 = ShifString(copy3, 14);
	cout << copy4 << endl;
}