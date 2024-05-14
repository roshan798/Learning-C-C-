#ifndef BANK_H
#define BANK_H
#include "Account.h"
class Bank
{
private:
	map<long, Account> mp;
	long i = 1;
	long AccountCount;

public:
	Bank();
	long getAccountCount();
	void CreateAccount(string fname, string lname, long long PhNo, float OpBal);
	void CheckBalance(long AccNo);
	void Deposit(long AccNo);
	void Withdrawal(long AccNo);
	void DeactivateAccount(long AccNo);
	void SearchAccount(long AccNo);
	void ShowAll();
	~Bank();

protected:
};

#endif
