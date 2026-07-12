 
#include <iostream>
using namespace std;


int TotalBile() {
    cout << "enter your total Bile" << endl;
    int number;
    cin >> number;
    return number;
}

int ReadCash() {
    cout << "enter your cash " << endl;
    int number;
    cin >> number;
    return number;
}


int CalRemainder(int N1,int N2) {

    int Remainder = N1 - N2;
    return Remainder;


}






int main()
{
   
    cout << CalRemainder(TotalBile(),ReadCash() );


}
