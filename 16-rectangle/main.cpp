#include <iostream>
#include <cmath>

using namespace std;

void ReadNumber(float& Diagonal, float& Side) {
    cout << "enter Diagonal" << endl;
    cin >> Diagonal;

    cout << "enter Side " << endl;
    cin >> Side;
}

float CalcArea(float Diagonal, float Side) {

    float Area = Side * sqrt(pow(Diagonal, 2) - pow(Side, 2));
    return Area;

}

void PrintArea(float Area) {

    cout << "The Area for your Eectangle "<<Area << endl;

}

int main() {
 

    float Diagonal, Side;
    ReadNumber(Diagonal,Side);
    PrintArea(CalcArea(Diagonal, Side));

    return 0;
}
