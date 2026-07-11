
#include <iostream>
using namespace std;

int ReadNumber() {
	int number;
	
	cout << "enter your number " << endl;
	cin >> number;
	return number;
}
void PrintNumber_UsingForLoop(int number ) {
	 
	for (int i = 1; i <= number;i++) {
		cout << i << endl;
		
	}

	 
}

void PrintNumber_usingWhileLoop(int number ) {
	int counter = 0;
	while (counter<number) {
	
		counter++;
		cout << counter << endl;
	
	}



}

void PrintNumber_usingDoWhileLoop(int number ) {
	int couter = 1;
	do {
	
		cout << couter<<endl;
		couter++;
	
	} while (couter<=number);



}


int main()
{


	int number = ReadNumber();
	cout << "*****************************" << endl;
	PrintNumber_UsingForLoop( number );
	cout << "*****************************" << endl;
	PrintNumber_usingWhileLoop( number );
	cout << "*****************************" << endl;
	PrintNumber_usingDoWhileLoop( number);
	cout << "*****************************" << endl;
}
 
