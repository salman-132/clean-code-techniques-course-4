#include <iostream>
using namespace std;



void ReadNumber(float& A,float& B) {

    cout << "Enter number1:" << endl;
    cin >> A;
    cout << "Enter number2:" << endl;
    cin >> B;
}

float CalRectangleArea(float A ,float B) {

    float Area = A * B;
    return Area;
}

void PrintArea(float Area){

    cout << "The Area Of The Rectangle is " << Area;

}



int main()
{
    float number1, number2;
    ReadNumber(number1,number2);
    
    PrintArea(CalRectangleArea(number1, number2));


}
