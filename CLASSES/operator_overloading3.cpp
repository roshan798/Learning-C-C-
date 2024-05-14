#include <iostream>
#include <string>
////#include<ostream>
#include <fstream>

using namespace std;
class Student
{
private:
	int Roll;
	string Name;
	static int num;

public:
	Student() {}
	Student(string name, int roll);
	void setRoll(int roll);
	void setName(string name);
	int getRoll();
	string getName();
	static void setNum()
	{
		num++;
	}
	static void setNum(int n)
	{
		num = n;
	}
	static int getNum()
	{
		return num;
	}
	friend ostream &operator<<(ostream &out, Student &s);
	friend ofstream &operator<<(ofstream &out, Student &s);
	friend ifstream &operator>>(ifstream &out, Student &s);
};

Student::Student(string name, int roll)
{
	this->Name = name;
	this->Roll = roll;
}

void Student::setRoll(int roll)
{
	this->Roll = roll;
}
void Student::setName(string name)
{
	this->Name = name;
}
int Student::getRoll()
{
	return this->Roll;
}
string Student::getName()
{
	return this->Name;
}
ostream &operator<<(ostream &out, Student &s)
{
	out << "number : " << s.getNum() << endl;
	out << "Name    : " << s.getName() << endl;
	out << "Roll No : " << s.getRoll() << endl;
	return out;
}
ofstream &operator<<(ofstream &out, Student &s)
{
	out << s.getNum() << endl;
	out << s.getName() << endl;
	out << s.getRoll() << endl;
	return out;
}
ifstream &operator>>(ifstream &in, Student &s)
{
	string name;
	int roll;
	int num;
	in >> num;
	s.setNum(num);
	getline(in, name);
	in >> roll;
	s.setName(name);
	s.setRoll(roll);
	return in;
}

int main()
{

	string name;
	int roll;
	cout << "Enter your full name : ";
	getline(cin, name);
	cout << "Enter your Roll no : ";
	cin >> roll;
	Student s(name, roll);
	//	cout<<s.getName()<<endl;
	//	cout<<s.getRoll()<<endl;
	//	cout<<s;
	ofstream outfile("Student.txt", ios::app);
	outfile << s;
	outfile.close();
	ifstream infile("Student.txt", ios::in);
	while (getline(infile, name))
	{
		infile >> roll;
		cout << "Name : " << name << endl;
		cout << "Roll no : " << roll << endl
			 << endl;
	}
	infile.close();
}
