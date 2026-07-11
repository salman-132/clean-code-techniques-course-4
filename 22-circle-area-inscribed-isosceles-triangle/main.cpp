 
#include <iostream>
#include<cmath>

using namespace std;


void ReadNumbers (float& a,float& b) {
	cout << "enter a" << endl;
	cin >> a;

	cout << "enter b" << endl;
	cin >> b;
 
}

float CalArea (float a,float b){
	const float  PI = 3.14;
	float Area = (PI) * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
	return Area;
}

void PrintArea(float Area) {
	cout << "the Area is " << Area;

}




int main()
{
	float a, b;
	ReadNumbers(a,b);
	PrintArea(CalArea(a,b));


}
