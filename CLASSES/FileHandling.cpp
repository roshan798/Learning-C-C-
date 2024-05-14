#include <iostream>
#include <ostream>
#include <fstream>

using namespace std;
class Student
{
private:
	int Roll;
	string Name;

public:
	Student(string name, int roll);
	void setRoll(int roll);
	void setName(string name);
	int getRoll();
	string getName();
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
	return Name;
}
ostream &operator<<(ostream &out, Student &s)
{
	out << "Name    : " << s.getName << endl;
	out << "Roll No : " << s.getRoll() << endl;
	return out;
}
// ofstream & operator<<(ofstream& out,Student &s) {
out << s.getName() << endl;
out << s.getRoll() << endl;
return out;
}
ifstream &operator>>(ifstream &in, Student &s)
{
	getline(s.setName, in);
	in << s.setName();
	return in;
}

int main()
{

	string name;
	int roll;

	cout << "Enter your full name : ";
	cin >> name;
	cout << "Enter your Roll no : ";
	cin >> roll;
	Student s(name, roll);
	cout << s;
}
