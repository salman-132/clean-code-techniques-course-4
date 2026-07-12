 
#include <iostream>
using namespace std;


int ReadName() {
    int number;
    cout << "enter the number" << endl;
    cin >> number;

    return number;

}


int Pow2(int number ) {
    int P2 = number * number;
    return P2;

}

int Pow3(int number ) {
    int P3 = number * number * number;
    return P3;



}

int Pow4(int number ) {

    int P4 = number * number * number * number;
    return P4;


}



void PrintAllPower(int number ) {
    cout << number << "^2 =" << Pow2(number)<<endl;
    cout << number << "^3 =" << Pow3(number) << endl;
    cout << number << "^4 =" << Pow4(number)  << endl;
     
}

int main()
{
    PrintAllPower(ReadName());
}

 
