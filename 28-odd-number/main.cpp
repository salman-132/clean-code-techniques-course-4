#include <iostream>
using namespace std;



int ReadNumber() {
    int number;
    cout << "enter your number " << endl;
    cin >> number;


    return number;

}

int  SumAllOddNumber(int number) {

    int sum = 0;

    for (int i = 0; i <= number; i++) {

        if (i % 2 == 1) {

            sum += i;


        }


    }

    return sum;

}


int main()
{

    cout << SumAllOddNumber(ReadNumber());
}

