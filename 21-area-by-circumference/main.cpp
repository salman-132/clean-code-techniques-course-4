 

#include <iostream>
#include<cmath>
using namespace std;


float ReadNumber() {
    float number;
    cout << "enter the number " << endl;
    cin >> number;
    return number;
}

float CalArea(float L) {
    const float PI = 3.14;
    float Area = pow(L,2) / (4*PI);
    return Area;
}


void PrintArea  (float Area) {

    cout << "yor Area is " << Area<<endl;



}


int main()
{
     
    PrintArea(CalArea(ReadNumber()));


}
 
