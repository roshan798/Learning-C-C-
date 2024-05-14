#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
	int eid;
	string Name;

public:
	Employee(int id, string name)
	{
		this->eid = id;
		this->Name = name;
	}
	int GetEmployeeID() { return eid; }
	string GetEmployeeName() { return Name; }
	friend ostream &operator<<(ostream &, Employee);
};
class FullTimeEmployee : public Employee
{
private:
	int Salary;

public:
	FullTimeEmployee(int id, string N, int sal) : Employee(id, N)
	{
		Salary = sal;
	}
	int GetSalary() { return Salary; }
	friend ostream &operator<<(ostream &out, FullTimeEmployee E);
};
class PartTimeEmployee : public Employee
{
private:
	int Wage;

public:
	PartTimeEmployee(int id, string n, int w) : Employee(id, n)
	{
		Wage = w;
	}
	int GetDailyWage() { return Wage; }
	friend ostream &operator<<(ostream &out, PartTimeEmployee E);
};
int main()
{
	Employee E1(01, "Ramesh");
	cout << E1 << endl;
	FullTimeEmployee E2(02, "Raghu", 10000);
	cout << endl
		 << E2 << endl;
	PartTimeEmployee E3(03, "Ram", 300);
	cout << "\n"
		 << E3 << endl;
}
ostream &operator<<(ostream &out, PartTimeEmployee E)
{
	out << "ID - " << E.GetEmployeeID() << endl;
	out << "Name - " << E.GetEmployeeName() << endl;
	out << "Daily Wage - " << E.GetDailyWage();

	return out;
}

ostream &operator<<(ostream &out, FullTimeEmployee E)
{
	out << "ID - " << E.GetEmployeeID() << endl
		<< "Name - " << E.GetEmployeeName() << endl
		<< "Salary - " << E.GetSalary();
	return out;
}

ostream &operator<<(ostream &out, Employee E)
{
	out << "ID - " << E.GetEmployeeID() << endl
		<< "Name - " << E.GetEmployeeName();
	return out;
}
