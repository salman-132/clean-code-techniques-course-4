#include <iostream>
#include<cmath>
using namespace std;


float ReadNUmber () {

    float R;
    cout << "enter the Redious " << endl;
    cin >> R;
    return R;
}
float CircalArea(float R) {
    const float  Pi = 3.14159;
    float Area =  (Pi*pow(R,2))/4;
    return Area;
}
void PringRusolt(float Area) {

    cout << "the Area of The Circut is " << Area;
}


int main()
{
    PringRusolt(CircalArea(ReadNUmber()));

}
