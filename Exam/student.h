#include <string>

using namespace std;

struct Student
{
	int sNo;
	string name;
	int kor, eng, math;
	float avg;
};

void showScore();
void addScore();