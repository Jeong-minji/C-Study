#include <iostream>

using namespace std;

class myclass {
	int x;
public:
	myclass() { 
		x = 0; 
		cout << "扁夯 积己" << endl;
	}

	myclass(int n) {
		x = n; 
		cout << "积己(牢飘)" << endl;
	}

	int getX() { 
		return x; 
	}

	void setX(int n) {
		x = n;
	}

	~myclass() { 
		cout << "家戈" << endl;
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