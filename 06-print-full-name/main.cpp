#include <iostream>
using namespace std;


struct stFullName {
	string FirstName;
	string LastName;

};

stFullName ReadFulName() {
	stFullName FullName;

	cout << "enter your First Nmae ..." << endl;
	cin >> FullName.FirstName;

	cout << "enter your Last Name ..." << endl;
	cin >> FullName.LastName;

	return FullName;
}
 
string GitFullName(stFullName FullName ) {
	string Name = "";
	Name = FullName.FirstName + " " + FullName.LastName;

	return Name;
}

void PrintName(string Name ) {

	cout << "your Full Name is :" << Name;


}
int main()
{ 
 
	PrintName(GitFullName(ReadFulName()));


}
