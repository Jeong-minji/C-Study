#include <iostream>

using namespace std;

class myclass {
	int x;
public:
	myclass() { 
		x = 0; 
		cout << "�⺻ ����" << endl;
	}

	myclass(int n) {
		x = n; 
		cout << "����(��Ʈ)" << endl;
	}

	int getX() { 
		return x; 
	}

	void setX(int n) {
		x = n;
	}

	~myclass() { 
		cout << "�Ҹ�" << endl;
	}
};

//int main(void) {
//	myclass *p;
//	myclass ob(10);
//	p = new myclass[10];
//	if (!p) { exit(1); }
//	
//	for (int k = 0; k < 10; k++) {
//		p[k] = ob;
//	}
//	for (int k = 0; k < 10; k++) {
//		cout << "p[" << k << "] = " << p[k].getX() << endl;
//		cout << endl;
//	}
//
//	return 0;
//}