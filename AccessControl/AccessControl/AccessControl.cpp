#include <iostream>
using namespace std;

class AccessControl
{
public:
			char publicData;
			void publicFunc() { };

protected:
			int protectedData;
			void protectedFunc() { };

private:
			int privateData;
			void privateFunc() { };
};

int main()
{
	//��ü�� �����ϰ�, �� ����� ����
	AccessControl ac;

	ac.publicData = 'A';
	ac.publicFunc();
	/*ac.protectedData = 100;
	ac.protectedFunc();
	ac.privateData = 4.5f;
	ac.privateFunc();*/

	return 0;
}