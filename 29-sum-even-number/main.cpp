 
#include <iostream>
using namespace std;


enum enEvenOrOdd {Odd=1,Even=2};


int ReadNumber() {
    int number;
    cout << "enter the number " << endl;
    cin >> number;

    return number;

}



enEvenOrOdd  ChackOddOrEven  (int number ) {

    if (number % 2==0) {
        return enEvenOrOdd::Even;

    
    }
    else {
        return enEvenOrOdd::Odd;
    }
}

int SumEvenNumber_UsingForLoop (int number ) {

    int sum = 0;

     


    for (int i=1; i <= number;i++) {
    
        if (ChackOddOrEven(i) == enEvenOrOdd::Even)
            sum += i;
    

    }

    return sum;


}

int SumEvenNumber_UsingWhileLoop  (int number ) {
     

    int c = 1;
    int sum = 0;

    while (c<=number ) {
    
        if (ChackOddOrEven(c)==enEvenOrOdd::Even) {
            sum += c;
        
        }
        c++;
    
    }

    return sum;


}




int SumEvenNumber_UsingDoWhileLoop(int number ) {
    int c = 0;
    int sum = 0;

    do {  
    
        if (ChackOddOrEven(c)==enEvenOrOdd::Even) {
        
            sum += c;
        
        }
    
        c++;
    
    } while (c<=number );


    return sum;
}



int main()
{
    int number = ReadNumber();

    cout << "sum Using For Loop " << endl;
    cout << SumEvenNumber_UsingForLoop (number );
    cout << "\n*************************************" << endl;

    cout << "sum Using While Loop " << endl;
    cout << SumEvenNumber_UsingWhileLoop(number);
    cout << "\n*************************************" << endl;




    cout << "sum Using Do While Loop " << endl;
    cout << SumEvenNumber_UsingDoWhileLoop(number);
    cout << "\n*************************************" << endl;




}

 
