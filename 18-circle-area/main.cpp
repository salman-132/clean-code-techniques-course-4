#include <iostream>
#include<cmath>
using namespace std;


float ReadRedious() {

    float R;
    cout << "enter the Redious " << endl;
    cin >> R;
    return R;
}
float CircalArea(float R) {
    const float  Pi = 3.14159;
    float Area = pow(R, 2) * Pi;
    return Area;
}
void PringRusolt(float Area) {

    cout << "the Area of The Circut is " << Area;
}


int main()
{
    PringRusolt(CircalArea(ReadRedious()));

}

 
