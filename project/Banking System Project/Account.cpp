#include "Account.h"
#include <iostream>
using namespace std;
Account::Account(string fname, string lname, float bal, long long no, long acc_no)
{
	this->fname = fname;
	this->lname = lname;
	this->balance = bal;
	this->ph_no = no;
	this->acc_no = acc_no;
}
long Account::getAccNo()
{
	return acc_no;
}
string Account::getFname()
{
	return fname;
}
string Account::getLname()
{
	return lname;
}
string Account::getFullName()
{
	return fname + " " + lname;
}
float Account::getBalance()
{
	return balance;
}
long long Account::getPhNo()
{
	return ph_no;
}
float Account::Deposit(float amount)
{

	this->balance += amount;
	return this->balance;
}
float Account::Withdraw(float amount)
{
	if (this->balance - amount < MIN_BAL)
	{
		cout << "Balance is low!!\n";
		cout << "Can not withdraw \n"
			 << amount << endl;
	}
	else
	{
		this->balance -= amount;
	}
	return this->balance;
}
ostream &operator<<(ostream &out, Account &ac)
{

	out << "\tAccount No : " << ac.getAccNo() << endl;

	out << "\tName : " << ac.getFullName();
	out.width(20);
	out << "Phone No : " << ac.getPhNo() << endl;
	out.width(15);
	out << "\tBalance : " << ac.getBalance() << endl;
	return out;
}
ofstream &operator<<(ofstream &out, Account &ac)
{
	out << ac.getAccNo() << endl;
	out << ac.getFname() << endl;
	out << ac.getLname() << endl;
	out << ac.getPhNo() << endl;
	out << ac.getBalance() << endl;
	return out;
}
ifstream &operator>>(ifstream &in, Account &ac)
{
	long acc_no;
	string fname;
	string lname;
	long long ph_no;
	float balance;
	in >> acc_no >> fname >> lname >> ph_no >> balance;
	Account tmp(fname, lname, balance, ph_no, acc_no);
	ac = tmp;
	return in;
}
