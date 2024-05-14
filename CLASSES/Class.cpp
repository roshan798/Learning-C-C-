#include <iostream>
using namespace std;

class Rectangle
{
	int length = 0;
	int breadth = 0;

public:
	//		Rectangle(){         //non paramatized constructor
	//			length=1;
	//			breadth=1;
	//		}
	Rectangle(int l = 1, int b = 1); // paramatized constructor
	Rectangle(Rectangle &r);		 // copy condtructor

	void setLength(int l);	// Mutetor
	void setBreadth(int b); // Mutetor
	int getLength();		// Accessor
	int getBreadth();		// Accessor
	int area();
	int perimeter();
	bool isSquare();
	//		~Rectangle();  //Destructor
};

int main()
{
	Rectangle r1(5, 5);
	//	r1.setLength(77);
	//	r1.setBreadth(2);
	//
	cout << "Object 1 of class rectangle : \n";
	cout << "Length : " << r1.getLength() << endl;
	cout << "Breadth : " << r1.getBreadth() << endl;
	cout << "r1.Area : " << r1.area() << endl;
	cout << "r1.perimeter : " << r1.perimeter() << endl;
	cout << "This is ";
	r1.isSquare() ? cout << "a square.\n" : cout << "not a square.\n";
	cout << "\n";
	Rectangle *r2 = new Rectangle;
	cout << "Object 2 of class rectangle : \n";
	r2->setLength(-5);
	r2->setBreadth(10);
	cout << "Length : " << r2->getLength() << endl;
	cout << "Breadth : " << r2->getBreadth() << endl;
	cout << "r2.Area : " << r2->area() << endl;
	cout << "r2.perimeter : " << r2->perimeter() << endl;
}

Rectangle::Rectangle(int l, int b)
{

	setLength(l);
	setBreadth(b);
}

Rectangle::Rectangle(Rectangle &r)
{
	length = r.length;
	breadth = r.breadth;
}

void Rectangle::setBreadth(int b)
{
	if (b >= 0)
		breadth = b;
	else
	{
		//		cout<<"Breadth of a rectanle cannot be NEGETIVE"<<endl;
		breadth = 1;
	}
}
void Rectangle::setLength(int l)
{
	if (l >= 0)
		length = l;
	else
	{
		//			cout<<"Length of a rectanle cannot be NEGETIVE"<<endl;
		length = 1;
	}
}

int Rectangle::getLength()
{
	return length;
}

int Rectangle::getBreadth()
{
	return breadth;
}

int Rectangle::area()
{
	return length * breadth;
}

int Rectangle::perimeter()
{
	return 2 * (length + breadth);
}
bool Rectangle::isSquare()
{
	return length == breadth ? true : false;
}
