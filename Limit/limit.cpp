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

		// �θ� ����� �����ϴ� ��
		n = priv;					// ���ٺҰ�
		n = protec;				// ���ٰ���
		n = pub;					// ���ٰ���
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