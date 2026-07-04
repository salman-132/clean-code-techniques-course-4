#include <iostream>
using namespace std;
 
void ReadNumbers(int& num1,int& num2,int& num3) {

	cout << "enter 3 numbers " << endl;
	cout << "number1::" << endl;
	cin >> num1;

	cout << "number2::" << endl;
	cin >> num2;

	cout << "number3::" << endl;
	cin >> num3;
}

int CalcaltTotal(int num1,int num2,int num3) {
	int total = num1 + num2 + num3;

	return total;
}
void PrintTotal(int Total) {

	cout << "***************************" << endl;

	cout << "Total =" << Total<<endl;

	cout << "***************************" << endl;
}

int main()
{

	int num1, num2, num3;

	ReadNumbers(num1,num2,num3);
	PrintTotal(CalcaltTotal(num1, num2, num3));

}
 
