#include <iostream>
using namespace std;

class Parent {
private:
	int priv;

protected:
	int protec;

public:
	int pub;
};

class Child : public Parent {
public:
	void AccessParents() {
		int n;

		// 부모 멤버에 접근하는 예
		n = priv;					// 접근불가
		n = protec;				// 접근가능
		n = pub;					// 접근가능
	}
};

int main()
{
	Parent pa;

	int n;

	n = pa.priv;
	n = pa.protec;
	n = pa.pub;

	Child ch;

	n = ch.priv;
	n = ch.protec;
	n = ch.pub;
}