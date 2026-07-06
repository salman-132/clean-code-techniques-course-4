#include <iostream>
using namespace std;


 

void Read2Number(int& num1,int& num2 ) {

	cout << "enter number1:" << endl;
	cin >> num1;
	cout << "enter number2:" << endl;
	cin >> num2;

}


void Swaping(int& num1,int& num2) {
	int temp;
	temp=num1;
	num1 = num2;
	num2 = temp;
}
void PrintNumber(int num1,int num2) {
	cout << "****************************" << endl;
	cout << "number1 =" << num1 << endl;
	cout << "number2 =" << num2 << endl;
	cout << "****************************" << endl;
}


int main()
{
	int num1, num2;
	Read2Number(num1,num2);
	cout << "\t The number befor swap " << endl;
	PrintNumber(num1,num2);
	Swaping(num1,num2);
	cout << "\t The number After swap " << endl;
	PrintNumber(num1, num2);
}

 
