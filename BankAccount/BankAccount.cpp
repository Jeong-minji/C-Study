#include <iostream>

#include "BankAccount.h"

using namespace std;

// 생성자 구현
Account::Account(string name, string accNo, int money) {
	SetName(name);
	SetAccountNo(accNo);
	SetBalance(money);
}

void Account::SetName(string name) {
	userName = name;
}

string Account::GetName() {
	return userName;
}

void Account::SetAccountNo(string no) {
	accountNo = no;
}

string Account::GetAccountNO() {
	return accountNo;
}

void Account::SetBalance(int money) {
	balance += money;
}

int Account::GetBalance() {
	return balance;
}

void Account::deposite(int money) {
	balance += money;
	cout << money << "원이 입금되었습니다." << endl;
	cout << "잔액: " << GetBalance() << endl;
}

bool Account::withdraw(int money) {
	int balance = GetBalance();
	if (balance < money) {
		return false;
	}
	else {
		this->balance -= money;
	}
	cout << money << "원이 출금되었습니다." << endl;
	cout << "잔액: " << GetBalance() << endl;
}

void Account::printInfo() {
	cout << "이름: " << GetName() << endl;
	cout << "계좌 번호" << GetAccountNO() << endl;
	cout << "잔액: " << GetBalance() << endl;
}