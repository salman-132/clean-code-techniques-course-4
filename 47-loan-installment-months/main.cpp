 
#include <iostream>
using namespace std;


float RaedNumber(string Message) {
    float number;
    do {
        cout << Message;
        cin >> number;
    
    } while (number <=0);

    return number;
}


float TotalMonthly(float LoangAmount , float Monthly ) {

    return (float)LoangAmount / Monthly;


}


int main()
{
    float LoangAmount = RaedNumber("pleas enter LoangAmount :");
    float Monthly = RaedNumber(" pleas enter the monthly :");




   cout<< TotalMonthly(LoangAmount,Monthly);
   cout << "\n";
   return 0;
}
