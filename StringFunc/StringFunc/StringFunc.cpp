#include <iostream>
#include <string>

using namespace std;

int main() {
	/*string text = "Hello Mr Pakison,"
		"Hello Mingyu."
		"Hello, Donggyu."
		"I'm Minji";

	cout << "offset of 'Pakison' = " << text.find("Pakison") << "\n";

	return 0;*/

	/*string path = "c:\\My Document\\Pictures\\33.jpg";

	int len = path.size();
	string ext = path.substr(len - 3, 3);

	cout << "extention = " << ext << "\n";

	return 0;*/

	/*string path = "c:\\My Document\\Pictures\\33.jpg";

	int k = path.find_last_of('\\');					//파일명 찾기
	cout << path.substr(k + 1) << endl;

	cout << path.substr(0, k) << endl;				//디렉토리 찾기

	k = path.find_last_of(".");
	cout << path.substr(k + 1) << endl;			//확장자 찾기

	return 0;*/

	/*string cppstyle = "Yes, I am";
	const char* cstyle = NULL;

	cstyle = cppstyle.c_str();

	cout << "cstyle = " << cstyle << "\n";
	cout << "cppstyle = " << cppstyle << "\n";
	
	return 0;*/

	/*char chAddress[100];
	cout << "주소 입력: ";
	cin >> chAddress;
	cout << chAddress << endl;*/

	string strAddress;
	cout << "주소 입력: ";
	//cin >> strAddress;							// 공백으로 입력 구분
	getline(cin, strAddress);						// 공백 무시하고 전체 문자열 출력, 전역함수 (인스턴스 안만들어도 사용 가능)

	cout << strAddress << endl;
}