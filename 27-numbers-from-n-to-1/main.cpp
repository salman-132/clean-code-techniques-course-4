
#include <iostream>
using namespace std;

int ReadNumber() {
	int number;

	cout << "enter your number " << endl;
	cin >> number;
	return number;
}



void PrintNumber_UsingForLoop(int number) {

 
	for (int i = number; i >= 1;i--) {
	
		cout << i << endl;
	
	}




}

void PrintNumber_usingWhileLoop(int number) {
 


	int c = number;
	while (c>=1) {
	
		cout << c<<endl;
		c--;
	}



}

void PrintNumber_usingDoWhileLoop(int number) {
 


	int c = number;
	do{
		cout << c << endl;
		c--;

	} while (c>0);



}


int main()
{


	int number = ReadNumber();
	cout << "*****************************" << endl;
	PrintNumber_UsingForLoop(number);
	cout << "*****************************" << endl;
	PrintNumber_usingWhileLoop(number);
	cout << "*****************************" << endl;
	PrintNumber_usingDoWhileLoop(number);
	cout << "*****************************" << endl;
}
