#include <iostream>

using namespace std;


class Parent {
public:
	int pub;

private:
	int priv;

protected:
	int protect;
};

/* ParentŬ������ ���� �����ڰ� private, protected�̸� ��͵� ���� �Ұ� */
class Child : public Parent { 
public:
	void AccessParents() {
		int n;
		n = priv; // ���� �Ұ�, ������ ���� �ʿ�
		n = protect;
		n = pub;
	}
};

int main(void) {
	Parent pd;
	int n;

	n = pd.priv; // ���� �Ұ�
	n = pd.protect; // �ܺ� �Լ��� ���� �Ұ�
	n = pd.pub;

	Child ch;

	n = ch.priv;
	n = ch.protect;
	n = ch.pub;
	
	return 0;
}