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

	cout << "첫번째 수 입력?";
	cin >> a;
	cout << "두번째 수 입력?";			
	cin >> b;

	cout << "10/5의 결과는 " << a / b << "입니다." << endl;

	return 0;*/

	/*int sum = 0;
	int i = 1;

	for (i = 1; i <= 10; ++i) {
		if (i == 5)
			continue;
		else
			sum += i;
	}

	cout << "현재 i의 값: " << i << endl;
	cout << "1~4, 6~10 까지의 합: " << sum << endl;*/

	/*char key;

	cout << "문자 입력: ";
	cin >> key;

	switch (key) {
		case 'w':
			cout << "전진" << endl;
			break;
		case 'a':
			cout << "좌회전" << endl;
			break;
		case 's':
			cout << "후진" << endl;
			break;
		case 'd':
			cout << "우회전" << endl;
			break;
		default:
			cout << "알 수 없는 키" << endl;
	}

	return 0;*/

	/*int score;
	char res;
	
	cout << "점수 입력";
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

	cout << "등급: " << res << endl;*/

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