#include <iostream>
using namespace std;

class SS {
private:
	int num;

public:
	SS(int n) :num(n) {
		cout << "ss(int n) ȣ�� :	�ּ�: " << this << endl;
	}
	
	SS(const SS &copy) : num(copy.num)
	{
		cout << "ss(const ss &copy) ȣ�� :	�ּ�: " << this << endl;
	}

	SS& AddNum(int n)
	{
		num += n;
		return *this;
	}
};

SS SsFunc(SS ob)
{
	cout << "return ��" << endl;
	return ob;
}

int main(void)
{
	SS obj(7);
	SS sim = SsFunc(obj);
	return 0;
}