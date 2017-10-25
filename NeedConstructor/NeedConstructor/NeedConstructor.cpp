#include <iostream>
using namespace std;

class NeedConstructor
{
public:
	const int maxCount;
	int& ref;
	int sample;

	NeedConstructor();
};

NeedConstructor::NeedConstructor()
	:maxCount(100), ref(sample)
{
	sample = 200;
}