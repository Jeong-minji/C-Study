#include <iostream>
#include <stdlib.h>

using namespace std;

class aa {
	int *p;
	int size;

public:
	aa(int sz) {
		p = new int[size];
		if (!p) exit(1);
		size = sz;
		cout << "using normal constructor..." << endl;
	}

	~aa() {
		delete []p;
	}

	aa(const aa &o) {
		p = new int[o.size];
		if (!p) exit(1);
		for (int i = 0; i < o.size; i++) {
			p[i] = o.p[i];
		}
		cout << "using copy constructor" << endl;
	}

	void put(int i, int j) { if (i >= 0 && i < size) p[i] = j; }

	int get(int i) { return p[i]; }
};

int main(void) {
	aa num(10);
	for (int i = 0; i < 10; i++) {
		num.put(i, i);
	}

	for (int i = 9; i >= 0; i--) {
		cout << num.get(i) << endl;
	}
	
	aa x = num;

	return 0;
}