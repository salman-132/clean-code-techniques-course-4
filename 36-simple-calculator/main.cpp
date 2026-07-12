 
#include <iostream>
using namespace std;

enum enOpType {
    Add = '+',
    Sub = '-', 
    mul = '*',
    divd = '/'
};

float ReadNumber(string Messge) {
    int number;
    cout << Messge;
    cin >> number;

    return number;

}


enOpType ReadOp() {
    char op='+';
    cout << "enter the Operation Type (+  , - , * , / )" << endl;
    cin >> op;
    return (enOpType)op;

}

float calcalator(int n1,int n2,enOpType op) {

    switch (op) {
    
    case(enOpType::Add):
        return n1 + n2;
        break;
    case(enOpType::Sub):
        return n1 - n2;
        break;
    case(enOpType::mul):
        return n1 * n2;
        break;
    case(enOpType::divd):
        return n1 / n2;
        break;
    
    
    }




}



int main()
{ 
    int N1=ReadNumber("enter first number ");
    int N2=ReadNumber("enter second number ");

    enOpType Op = ReadOp();
    cout << calcalator(N1,N2,Op);

}

 
