#include <iostream>
using namespace std;


enum enPassOrFail {Pass=1,Fail=2};
void ReadMarks(int& num1,int& num2,int& num3) {
	cout << "enter Mark 1" << endl;
	cin >> num1;

	cout << "enter Mark 1" << endl;
	cin >> num2;

	cout << "enter Mark 1" << endl;
	cin >> num3;
}
int sum(int& num1, int& num2, int& num3) {

	int sum = num1 + num2 + num3;
	return sum;
}
float Avarag(int sum ) {

	float Avarage = (float)sum / 3;
	return Avarage;

}
enPassOrFail CheckPassOrFail (float Ava) {
	if (Ava>=50) {
	
		return enPassOrFail::Pass;
	}
	else
		return enPassOrFail::Fail;



}
void PrintFinalGrad(enPassOrFail Grade) {

	cout << Grade;


}


int main()
{
	int num1, num2, num3;

	ReadMarks(num1,num2,num3);
	PrintFinalGrad(CheckPassOrFail(Avarag(sum(num1, num2, num3))));


}
