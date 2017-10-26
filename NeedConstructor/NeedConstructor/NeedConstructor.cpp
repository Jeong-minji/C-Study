#include <iostream>
#include <Windows.h>
using namespace std;

class NeedConstructor
{
public:
	const int maxCount;
	int& ref;
	int sample;

	NeedConstructor();
	void print();
};

NeedConstructor::NeedConstructor()
	:maxCount(100), ref(sample)
{
	sample = 200;
}

void NeedConstructor::print() {
	cout << "(" << maxCount << "," << sample << "(" << &ref << ")" << ")" << endl;
}

int main(void)
{
	NeedConstructor nc;
	nc.print();

	system("pause");
	return 0;
}