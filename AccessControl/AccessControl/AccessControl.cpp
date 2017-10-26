#include <iostream>
#include <Windows.h>
using namespace std;

class AccessControl
{
public:
			char publicData;
			void publicFunc() { };
			void SetProtectedData(int value) {
				protectedData = value;
			}
			int GetProtectedData() {
				return protectedData;
			}
protected:
			int protectedData;
			void protectedFunc() { };
private:
			int privateData;
			void privateFunc() { };
};

//int main()
//{
//	//객체를 생성하고, 각 멤버에 접근
//	AccessControl ac;
//
//	ac.publicData = 'A';
//	ac.publicFunc();
//	ac.SetProtectedData(10);
//	cout << ac.GetProtectedData() << endl;
//	/*ac.privateData = 4.5f;
//	ac.privateFunc();*/
//
//	system("pause");
//	return 0;
//}