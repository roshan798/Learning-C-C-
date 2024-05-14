#include <iostream>
#include <fstream>

using namespace std;
int main()
{
	//	ofstream outfile("File.txt",ios::app);
	ofstream outfile("File.txt", ios::trunc);
	outfile << "Hello, World! \n";
	outfile << 234 << endl;
	outfile.close();
}
