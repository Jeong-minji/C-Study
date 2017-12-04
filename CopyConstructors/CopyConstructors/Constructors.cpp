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

	~myclass() { 
		cout << "家戈" << endl;
	}
};

//int main(void) {
//	myclass o1[3];
//	myclass o2[3] = { 10, 20, 30 };
//
//	for (int k = 0; k < 3; k++) {
//		cout << "o1[" << k << "] = " << o1[k].getX() << endl;
//		cout << "o2[" << k << "] = " << o2[k].getX() << endl;
//	}
//	
//	return 0;
//}