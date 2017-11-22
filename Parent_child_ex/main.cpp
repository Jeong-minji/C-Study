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

/* Parent클래스의 접근 제어자가 private, protected이면 어떤것도 접근 불가 */
class Child : public Parent { 
public:
	void AccessParents() {
		int n;
		n = priv; // 접근 불가, 접근자 생성 필요
		n = protect;
		n = pub;
	}
};

int main(void) {
	Parent pd;
	int n;

	n = pd.priv; // 접근 불가
	n = pd.protect; // 외부 함수라서 접근 불가
	n = pd.pub;

	Child ch;

	n = ch.priv;
	n = ch.protect;
	n = ch.pub;
	
	return 0;
}