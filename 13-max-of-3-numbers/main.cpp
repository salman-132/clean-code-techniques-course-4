
#include <iostream>
using namespace std;

void ReadNumbers(int& num1, int& num2,int& num3) {
	cout << "enter number1:" << endl;
	cin >> num1;

	cout << "enter number2:" << endl;
	cin >> num2;

	cout << "enter number3:" << endl;
	cin >> num3;
}
int MaxNumbers(int num1, int num2,int num3) {
 if ((num1>num2)&&num1>num3){
	 return num1;

 }
 else if ((num2 > num1) && (num2 > num3)) {
	 return num2;
 }
 else
	 return num3;

}
void PrintMaxNumber(int Max) {

	cout << "\n The max number is " << Max;
}



int main()
{
	int num1, num2,num3;
	ReadNumbers(num1, num2,num3);
	PrintMaxNumber(MaxNumbers(num1, num2,num3));

}


 
