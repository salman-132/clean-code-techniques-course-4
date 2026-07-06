#include <iostream>
using namespace std;


void ReadNumber (float& A,float& h){

    cout << "enter the A" << endl;
    cin >> A;
    cout << "enter the h" << endl;
    cin >> h;

}

float CalTriangleArea(float A,float h) {


    float Area = ((0.5) * A) * h;
    return Area;

}

void PrintArea(float Area) {


    cout << "thr Area is " << Area;

}
int main()
{
    float A, h;
    ReadNumber(A,h);
    PrintArea(CalTriangleArea(A,h));
    
}
