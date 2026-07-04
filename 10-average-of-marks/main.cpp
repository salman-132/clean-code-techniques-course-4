#include <iostream>
using namespace std;

void ReadNumbers(int& num1, int& num2, int& num3) {

	cout << "enter 3 Marks  " << endl;
	cout << "number1::" << endl;
	cin >> num1;

	cout << "number2::" << endl;
	cin >> num2;

	cout << "number3::" << endl;
	cin >> num3;
}

float  CalcaltAverage(int num1, int num2, int num3) {
	int   total = num1 + num2 + num3;
	float Average = (float )total / 3;
	return Average;
}
void PrintTotal(float Average ) {

	cout << "***************************" << endl;

	cout << "Average=" << Average << endl;

	cout << "***************************" << endl;
}

int main()
{

	int num1, num2, num3;

	ReadNumbers(num1, num2, num3);
	PrintTotal(CalcaltAverage(num1, num2, num3));

}
