 
#include <iostream>
#include<cmath>
using namespace std;





void ReadNumber(float& a, float& b, float& c) {

	cout << "enter number of A"<<endl;
	cin >> a;

	cout << "enter number of B" << endl;
	cin >> b;

	cout << "enter number of C" << endl;
	cin >> c;

}

float calArea(float a, float b, float c) {
	const float PI = 3.141592;
	float P = (a + b + c) / 2;

	float Inside = P *( (P - a) * (P - b) * (P - c));
	float Root = sqrt(Inside);



	float Area = PI * pow( ((a * b * c) / (4 * ( Root)) ) ,2 );
	return Area;

}




void PrintResult(float Result ) {
	cout << "the Ansur is " << Result<<endl;

}
int main()
{
	float a, b, c;
	ReadNumber(a,b,c);
	PrintResult(calArea(a,b,c));

}

 
