#include "Bank.h"
#include "Account.h"
#include <iostream>
using namespace std;
void Intro()
{
	cout << "\n\n\t1. Create a New Account " << endl;
	cout << "\t2. Check Balance" << endl;
	cout << "\t3. Deposit" << endl;
	cout << "\t4. Withraw" << endl;
	cout << "\t5. Delete an Account" << endl;
	cout << "\t6. Search an Account" << endl;
	cout << "\t7. Show all Account Details" << endl;
	cout << "\t8. EXIT" << endl;
	cout << "\n\tOption : ";
}
int main()
{
	int op, i;
	bool flag = true;
	string fname, lname;
	float bal;
	long long ph;
	long acc_no;
	string tmp;
	cout << "************************** Welcome to Banking System *************************\n\n"
		 << endl;
	cout << "\nChoose an Option from Below \n";
	Bank b;
	do
	{

		Intro();
		cin >> op;
		system("cls");
		switch (op)
		{
		case 1:
			cout << "Enter Below Details \n";
			cout << "First Name : ";
			cin >> fname;
			cout << "Last Name : ";
			cin >> lname;
			cout << "Contact number : ";
			cin >> tmp;
			i = 3;
			while (tmp.length() != 10 && i-- > 0)
			{
				cout << "Wrong Mobile No!!" << endl
					 << endl;
				cout << "Enter Again  : ";
				cin >> tmp;
			}
			if (i > 0)
			{
				ph = stoll(tmp);
				cout << "Enter Opening amount : ";
				cin >> tmp;
				bal = stof(tmp);
				b.CreateAccount(fname, lname, ph, bal);
			}
			else
			{
				cout << "input exceeded !!";
			}
			break;
		case 2:
			cout << "Enter account number : ";
			cin >> tmp;
			acc_no = stol(tmp);
			b.CheckBalance(acc_no);
			break;
		case 3:
			cout << "Enter account number : ";
			cin >> tmp;
			acc_no = stol(tmp);
			b.Deposit(acc_no);
			break;
		case 4:
			cout << "Enter account number : ";
			cin >> tmp;
			acc_no = stol(tmp);
			b.Withdrawal(acc_no);
			break;
		case 5:
			cout << "Enter account number : ";
			cin >> tmp;
			acc_no = stol(tmp);
			b.DeactivateAccount(acc_no);
			break;
		case 6:
			cout << "Enter account number : ";
			cin >> tmp;
			acc_no = stol(tmp);
			b.SearchAccount(acc_no);
			break;
		case 7:
			b.ShowAll();
			break;
		case 8:
			flag = false;

			cout << "\n\n****************************** Thanks for using Banking Management System ******************************" << endl;
			break;
		default:
			cout << "\n\tyou have entered Invalid option!" << endl;
			cout << "\tPlease select an valid option." << endl;
		}
	} while (flag);
	return 0;
}
