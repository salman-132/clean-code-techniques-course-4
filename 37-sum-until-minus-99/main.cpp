
#include <iostream>
#include<string>
using namespace std;

float ReadNumber(string massge ) {
    float number;
    cout << massge;
    cin >> number;
    return number;
    



}
float SumNumber() {
    int sum = 0, couter = 1, number = 0;

    do {
        number = ReadNumber("pleas enter number "+ to_string  (couter)+":");
        cout << endl;
        if (number ==-99) {
        
            break;
        }
        
        
        sum += number;

        couter++;



    } while (number != -99);


    return sum;

}


int main()
{
    


   cout<< SumNumber();
}

 
