 
#include <iostream>
using namespace std;

int ReadAge() {
    int Age;
    cout << "enter your Age " << endl;
    cin >> Age;

    return Age;

}

bool ValidateNumberInRange(int number ,int From,int To ) {

    return (number>=From&&number<=To);

}
void PrintResult(int number) {
    if (ValidateNumberInRange(number, 18, 45))
        cout << number << ":  Is Valid " << endl;
    else
        cout << number << ":  Is not Valid " << endl;

}


int main()
{
    
    PrintResult(ReadAge());


}

 
