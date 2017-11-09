#include <iostream>

#include "BankAccount.h"

using namespace std;

// ������ ����
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
	cout << money << "���� �ԱݵǾ����ϴ�." << endl;
	cout << "�ܾ�: " << GetBalance() << endl;
}

bool Account::withdraw(int money) {
	int balance = GetBalance();
	if (balance < money) {
		return false;
	}
	else {
		this->balance -= money;
	}
	cout << money << "���� ��ݵǾ����ϴ�." << endl;
	cout << "�ܾ�: " << GetBalance() << endl;
}

void Account::printInfo() {
	cout << "�̸�: " << GetName() << endl;
	cout << "���� ��ȣ" << GetAccountNO() << endl;
	cout << "�ܾ�: " << GetBalance() << endl;
}