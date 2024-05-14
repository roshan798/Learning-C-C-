#ifndef ACCOUNT_H
#define ACCOUNT_H
#define MIN_BAL 500
#include <fstream>
#include <string>
#include <map>
using namespace std;

class Account
{
private:
	long acc_no;
	string fname;
	string lname;
	float balance;
	long long ph_no;

public:
	Account() {}
	Account(string fname, string lname, float bal, long long no, long acc_no);
	long getAccNo();
	string getFname();
	string getLname();
	string getFullName();
	float getBalance();
	float Deposit(float amount);
	float Withdraw(float amount);
	long long getPhNo();

	friend ostream &operator<<(ostream &out, Account &ac);
	friend ofstream &operator<<(ofstream &out, Account &ac);
	friend ifstream &operator>>(ifstream &in, Account &ac);
};

#endif
