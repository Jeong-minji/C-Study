#include <iostream>
using namespace std;

class Date
{
private:
	int year;
	int month;
	int day;

public:
	Date();
	Date(int, int, int);
	void SetYear(int);
	void SetMonth(int);
	void SetDay(int);
	int getYear();
	int getMonth();
	int getDay();
	/*void Print();*/
};

Date::Date()
	:year(2017), month(1), day(1)
{
}

Date::Date(int a, int b, int c)
	: year(a), month(b), day(c)
{
}

void Date::SetYear(int year)
{
	this->year = year;
}

void Date::SetMonth(int month)
{
	this->month = month;
}

void Date::SetDay(int day)
{
	this->day = day;
}

int Date::getYear() {
	return year;
}

int Date::getMonth() {
	return month;
}

int Date::getDay() {
	return day;
}

void Print(Date date)
{
	cout << date.getYear << "�� " << date.getMonth << "�� " << date.getDay << "��" << endl;
}

int main()
{
	int year, month, day;
	Date d1;

	cout << "���� : ";
	cin >> year;
	d1.SetYear(year);

	cout << "�� : ";
	cin >> month;
	d1.SetMonth(month);

	cout << "�� : ";
	cin >> day;
	d1.SetDay(day);

	Print(d1);
}

// �̰� ���߾�..