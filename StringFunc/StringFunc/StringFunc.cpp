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

	int k = path.find_last_of('\\');					//���ϸ� ã��
	cout << path.substr(k + 1) << endl;

	cout << path.substr(0, k) << endl;				//���丮 ã��

	k = path.find_last_of(".");
	cout << path.substr(k + 1) << endl;			//Ȯ���� ã��

	return 0;*/

	/*string cppstyle = "Yes, I am";
	const char* cstyle = NULL;

	cstyle = cppstyle.c_str();

	cout << "cstyle = " << cstyle << "\n";
	cout << "cppstyle = " << cppstyle << "\n";
	
	return 0;*/

	/*char chAddress[100];
	cout << "�ּ� �Է�: ";
	cin >> chAddress;
	cout << chAddress << endl;*/

	string strAddress;
	cout << "�ּ� �Է�: ";
	//cin >> strAddress;							// �������� �Է� ����
	getline(cin, strAddress);						// ���� �����ϰ� ��ü ���ڿ� ���, �����Լ� (�ν��Ͻ� �ȸ��� ��� ����)

	cout << strAddress << endl;
}