// #2-Ask to Print Name 

#include <iostream>
using namespace std;
#include <string>


string ReadName() {
	cout << "enter your Name:" << endl;
	string Name;
	getline(cin, Name);
	return Name;
}
void PrintName (string Name ){

	cout << "your Name is :" <<Name << endl;
	
}
int main()
{
  

	PrintName(ReadName());


}

 
