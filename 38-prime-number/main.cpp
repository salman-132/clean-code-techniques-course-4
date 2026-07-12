#include <iostream>
#include<string>
#include<cmath>
using namespace std;

enum enPrimNotPrim {Prime=1,NotPrime=2};

float ReadPositivNumber(string massge) {


    float number = 0;

    do{
        cout << massge << endl;
        cin >> number;

    
    } while (number <= 0);


    return number;

}

enPrimNotPrim CheckPrime (int number) {


    int M = round(number /2);

    for (int counter = 2; counter <= M;counter++) {
    
        if (number %2==0) {
            return enPrimNotPrim::NotPrime;
        }
    
    }
    return enPrimNotPrim::Prime;
}
void Print(enPrimNotPrim P) {

    if (P==enPrimNotPrim::Prime) {
    
        cout << " The Number is Prime" << endl;
    }
    else {
        cout << "The number is not Prime " << endl;
    
    }

}



int main()
{
    
    Print(CheckPrime(ReadPositivNumber("enter the number ")));


}
