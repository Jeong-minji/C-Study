#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char src[] = "Hanbit-Media";

	int len = strlen(src);
	char* dest = new char[len + 1];
	strcpy(dest, src);

	cout << "src = " << src << "\n";
	cout << "dest = " << dest << "\n";

	delete[] dest;

	char str1[20] = "abcde";
	char str2[] = "fghij";

	strcat(str1, str2);

	if (strcmp(str1, "abcdefghij") == 0)
		cout << "str1 and \"abcdefghij\" are identical.\n";

	if (strcmp("123456", str1) != 0)
		cout << "\"123456\" and str1 are NOT identical.\n";
}