 
#include <iostream>
using namespace std;


float ReadpositaveNumber(string massage ) {
    int number;

    do {
        cout << massage;
        cin >> number;

    
    
    } while (number <=0);

    return number;

}

float TotalBillAfterService(float number ) {
    number = number * 1.1;
    number = number * 1.16;
    return number;

}

int main()
{
     
    
    cout << TotalBillAfterService(ReadpositaveNumber("enter total Sales "));




}
 
