#include <iostream>
using namespace std;

int main() {
	/*
	unsigned short us = 0xff00;
	short s = (short)0xff00;

	unsigned short us_shift = us >> 4;
	short s_shift = s >> 4;

	cout << us_shift << endl;
	cout << s_shift << endl;
	*/

	/*int a = 10;
	int b = 5;

	cout << "ù��° �� �Է�?";
	cin >> a;
	cout << "�ι�° �� �Է�?";			
	cin >> b;

	cout << "10/5�� ����� " << a / b << "�Դϴ�." << endl;

	return 0;*/

	/*int sum = 0;
	int i = 1;

	for (i = 1; i <= 10; ++i) {
		if (i == 5)
			continue;
		else
			sum += i;
	}

	cout << "���� i�� ��: " << i << endl;
	cout << "1~4, 6~10 ������ ��: " << sum << endl;*/

	/*char key;

	cout << "���� �Է�: ";
	cin >> key;

	switch (key) {
		case 'w':
			cout << "����" << endl;
			break;
		case 'a':
			cout << "��ȸ��" << endl;
			break;
		case 's':
			cout << "����" << endl;
			break;
		case 'd':
			cout << "��ȸ��" << endl;
			break;
		default:
			cout << "�� �� ���� Ű" << endl;
	}

	return 0;*/

	/*int score;
	char res;
	
	cout << "���� �Է�";
	cin >> score;

	if (score > 90)
		res = 'A';
	else if (score > 80)
		res = 'B';
	else if (score > 70)
		res = 'C';
	else if (score > 60)
		res = 'D';
	else
		res = 'F';

	cout << "���: " << res << endl;*/

	bool largefile;
	unsigned int filesize;

	cout << "filesize: ";
	cin >> filesize;

	if (filesize > 1024 * 1024)
		largefile = "true";
	else
		largefile = "false";

	cout << largefile << endl;

}