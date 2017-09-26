#include <iostream>
using namespace std;

int main() {

	struct StudentInfo {
		char name[5];
		int num;
		char dname[10];
		char gender[6];
		int phone;
		char address[30];
		StudentInfo* p;
	};

	StudentInfo st[5];

	st[4] = { "name5", 20110, "swdevelop", "woman", 99457580, "대전광역시", &st[5] };
	st[3] = { "name4", 20119, "swdevelop", "woman", 99457580, "대전광역시", &st[4] };
	st[2] = { "name3", 20118, "swdevelop", "man", 99457580, "대전광역시", &st[3] };
	st[1] = { "name2", 20117, "swdevelop", "woman", 99457580, "대전광역시", &st[2]};
	st[0] = { "name1", 20116, "swdevelop", "man", 99457580, "대전광역시" };

	cout << st[0].name << st[0].num << st[0].dname << st[0].gender << st[0].phone << st[0].phone << st[0].phone << st[0].address << "\n";
	cout << st[0].name << st[0].num << st[0].dname << st[0].gender << st[0].phone << st[0].phone << st[0].phone << st[0].address << "\n";
	cout << st[0].name << st[0].num << st[0].dname << st[0].gender << st[0].phone << st[0].phone << st[0].phone << st[0].address << "\n";
	cout << st[0].name << st[0].num << st[0].dname << st[0].gender << st[0].phone << st[0].phone << st[0].phone << st[0].address << "\n";
	cout << st[0].name << st[0].num << st[0].dname << st[0].gender << st[0].phone << st[0].phone << st[0].phone << st[0].address << "\n";
}