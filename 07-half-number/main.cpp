#include <iostream>
using namespace std;

int  ReadNumber() {
    int number;
    cout << "enter the number " << endl;
    cin >> number;
    return number;
}
float CalclatHalfnumber(int number ) {
    float Halfnumber = number / 2;
    return Halfnumber;
}
void PrintHalfNumber(float HalfNumber ) {

    cout << "---->" << HalfNumber;

}

int main()
{

    PrintHalfNumber(CalclatHalfnumber(ReadNumber()));
    
}
 
