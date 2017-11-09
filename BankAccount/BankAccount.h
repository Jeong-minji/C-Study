#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
using namespace std;

class Account {
private:
	string userName;
	string accountNo;
	int balance = 10000;

public:
	double interest = 0.1;
	Account(string name, string accNo, int money);
	void SetName(string name);
	string GetName();
	void SetAccountNo(string no);
	string GetAccountNO();
	void SetBalance(int money);
	int GetBalance();
	void deposite(int money);
	bool withdraw(int money);
	void printInfo();
};

#endif // !BANKACCOUNT_H