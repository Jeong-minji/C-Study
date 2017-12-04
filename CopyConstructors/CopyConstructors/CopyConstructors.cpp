#include <iostream>
#include <stdlib.h>

using namespace std;

class AA
{
	int* p;
	int size;

public:
	AA(int size)
	{
		p = new int[size];
		this->size = size;
		cout << "기본 생성자 사용" << endl;
	}

	~AA() { delete[]p; }

	AA(const AA &a)
	{
		p = new int[a.size];
		for (int i = 0; i < a.size; i++)
		{
			p[i] = a.p[i];
			cout << "복사 생성자 사용" << endl;
		}
	}

	void put(int i, int j)
	{
		if (i >= 0 && i < size)
		{
			p[i] = j;
		}
	}

	int get(int i) { return p[i]; }
};

int main(void)
{
	AA num(10);
	for (int i = 0; i < 10; i++)
	{
		num.put(i, i);
	}

	for (int i = 9; i >= 0; i--)
	{
		cout << num.get(i) << endl;
	}

	AA x = num;

	for (int i = 0; i < 10; i++)
	{
		cout << x.get(i) << endl;
	}
	
	return 0;
}