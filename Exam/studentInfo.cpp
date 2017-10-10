#include<iostream>
#include "student.h"

Student student[100];

void showScore() {
	cout << "학번  이름  국어  영어  수학  평균" << endl;
	
	for (int i = 0; i < 100; i++) {
		if (student[i].kor == NULL || student[i].eng == NULL || student[i].math == NULL) {
			break;
		}
		else {
			cout << i + 1 << "  " << student[i].name << "  " << student[i].kor << "  " << student[i].eng << "  " << student[i].math
				<< "  " << student[i].avg << endl;
		}
	}
}

void addScore() {
	string inputName;
	int inputSno;
	int korean, english, mathmatic;

	cout << "이름(공백없이) 국어, 영어, 수학 점수를 입력하세요: ";
	cin >> inputName >> korean >> english >> mathmatic;

	for (int i = 0; i < 100; i++) {
		if (student[i].kor == NULL || student[i].eng == NULL || student[i].math == NULL) {
			float average = (korean + english + mathmatic) / 3;
			
			student[i].sNo = i + 1;
			student[i].name = inputName;
			student[i].kor = korean;
			student[i].eng = english;
			student[i].math = mathmatic;
			student[i].avg = average;

			break;
		}
	}
}