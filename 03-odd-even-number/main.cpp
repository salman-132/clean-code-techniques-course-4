#include <iostream>
using namespace std;


enum  enNumberType {odd=1,even=2};

int ReadNumber() {
    int number;
    cout << "enter number " << endl;
    cin >> number;
    return number;
}
enNumberType CheckNumberType(int number ) {
    int Result = number % 2;
    if (Result == 0)
        return enNumberType::even;
    else
        return enNumberType::odd;
}
void PrintNumberType(enNumberType NumberType) {
if(NumberType== enNumberType::even){
    cout << "the Number is Even " << endl;

}
else {
    cout << "the number is Odd" << endl;

}
}


int main()
{
    

    PrintNumberType(CheckNumberType(ReadNumber()));
    return 0;
}

 
