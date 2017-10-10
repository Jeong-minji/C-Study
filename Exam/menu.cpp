#include "menu.h"
#include "student.h"
#include <iostream>

using namespace std;

void printMenu() {
	cout << "------ 메뉴 ------\n";
	cout << "1. 학생 성적 추가\n";
	cout << "2. 전체 성적 관리\n";
	cout << "Q. 프로그램 종료\n";
	cout << "-----------------" << endl;
}

void processMenu() {
	int num;

	while (true) {
		printMenu();

		cin >> num;

		if (num == 1) {
			addScore();
		}
		else if (num == 2) {
			showScore();
		}
		else if ((char)num == 'Q') {
			break;
		}
		else {
			cout << "잘못된 입력입니다." << endl;
		}
	}
}