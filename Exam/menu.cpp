#include "menu.h"
#include "student.h"
#include <iostream>

using namespace std;

void printMenu() {
	cout << "------ �޴� ------\n";
	cout << "1. �л� ���� �߰�\n";
	cout << "2. ��ü ���� ����\n";
	cout << "Q. ���α׷� ����\n";
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
			cout << "�߸��� �Է��Դϴ�." << endl;
		}
	}
}