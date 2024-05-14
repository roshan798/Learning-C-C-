#include <iostream>
#include <string>
using namespace std;

class Student
{
    string Name;
    int Roll_no;
    int PhyMark;
    int CheMark;
    int MathMark;

public:
    Student(string, int, int, int, int);
    void setName(string);
    void setRoll(int);
    string getName();
    int getRoll();
    int getPhyMark();
    int getCheMark();
    int getMathMark();
    void setMarks(int, int, int);
    int TotelMark();
    Char Grade();
    bool ispass();
};

Student::Student(string name, int r, int p, int c, int m)
{
    this->Name = name;
    this->Roll_no = r;
    this->PhyMark = p;
    this->CheMark = c;
    this->MathMark = m;
}

Student::setName(string name)
{
    this->Name = name;
}

Student::setRoll(int r)
{
    this->Roll_no = r;
}

Student::setMarks(int p, int c, int m)
{
    this->PhyMark = p;
    this->CheMark = c;
    this->MathMark = m;
}
