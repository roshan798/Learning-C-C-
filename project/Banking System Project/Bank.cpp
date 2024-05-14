#include "Bank.h"
#include <iostream>
using namespace std;

Bank::Bank()
{

	Account ac;
	AccountCount = 0;
	ifstream in;
	in.open("Bank.txt", ios::in);
	if (in)
	{
		while (in >> ac)
		{
			mp.insert(make_pair(ac.getAccNo(), ac));
			AccountCount++;
		}
		if (mp.size() != 0)
			i = (--mp.end())->first + 1;
		else
			i = 1;
	}
	else
		i = 1;
}

void Bank::CreateAccount(string fname, string lname, long long Ph, float OpBal)
{
	if (OpBal < MIN_BAL)
	{
		cout << "Minimum Balance must be greater than or equal to " << MIN_BAL << endl;
		cout << "Can not create new account  try again" << endl;
		return;
	}
	ofstream out;
	out.open("Bank.txt", ios::out | ios::app);

	Account a(fname, lname, OpBal, Ph, i);
	out << a;
	mp.insert(make_pair(i, a));
	AccountCount++;
	cout << "Account created successfuly" << endl
		 << endl;
	cout << a << endl;
	i++;
}
void Bank::SearchAccount(long Acc_No)
{
	auto it = mp.find(Acc_No);
	if (it != mp.end())
	{
		cout << endl
			 << it->second << endl;
	}
	else
	{
		cout << "Account not found!!" << endl;
	}
}
void Bank::CheckBalance(long Acc_No)
{
	auto it = mp.find(Acc_No);
	if (it != mp.end())
	{
		cout << "Account number : " << it->first << endl;
		cout << "Name : " << it->second.getFullName() << endl;
		cout << "Balance : " << it->second.getBalance() << endl;
	}
	else
	{
		cout << "Account not found!!" << endl;
	}
}
void Bank::Deposit(long Acc_No)
{

	auto it = mp.find(Acc_No);
	if (it != mp.end())
	{
		float am;
		cout << "Amount : ";
		cin >> am;
		it->second.Deposit(am);
		cout << "Balance : " << it->second.getBalance() << endl;
	}
	else
	{
		cout << "Account not found!!" << endl;
	}
}
void Bank::Withdrawal(long Acc_No)
{

	auto it = mp.find(Acc_No);
	if (it != mp.end())
	{
		float am;
		cout << "Amount : ";
		cin >> am;
		it->second.Withdraw(am);
		cout << "Balance : " << it->second.getBalance() << endl;
	}
	else
	{
		cout << "Account not found!!" << endl;
	}
}
void Bank::DeactivateAccount(long AccNo)
{
	auto it = mp.find(AccNo);
	int op;
	if (it != mp.end())
	{
		mp.erase(it);
		cout << it->second << endl;
		ofstream out;
		out.open("Bank.txt", ios::trunc);
		for (auto i = mp.begin(); i != mp.end(); i++)
		{
			out << i->second;
		}
		out.close();
		AccountCount--;
		cout << "Account Deleted Successfuly" << endl;
	}
	else
	{
		cout << endl
			 << "Account not found!!" << endl;
	}
}
void Bank::ShowAll()
{
	for (auto it = mp.begin(); it != mp.end(); it++)
	{
		cout << it->second << endl
			 << endl;
	}
	cout << "Totel number of account  : " << AccountCount << endl;
}

Bank::~Bank() {}
