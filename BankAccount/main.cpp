#include "BankAccount.h"
#include <iostream>
#include <Windows.h>

using namespace std;

int main(void)
{
	string name = "jcw";
	string accountNO = "010102-325-52234";
	int money = 100000;

	Account ac1(name, accountNO, money);

	ac1.printInfo();
	
	system("pause");
	return 0;
}