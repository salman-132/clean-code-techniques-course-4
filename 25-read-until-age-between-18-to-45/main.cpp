 
#include <iostream>

using namespace std;



int ReadAge() {
    int Age;
    cout << "enter the Age " << endl;
    cin >> Age;
    return Age;
}

bool ValidteNumber (int Age ,int From,int To ){
    
    return (Age >=From &&Age <=To);

}

int  TheAgeIsValid(int From, int To) {
    int Age = 0;

    do {
    
       Age=ReadAge();
    
    
    } while ( !ValidteNumber(Age,From, To));

    return Age;

}

void PrintResult(int Age ) {

    cout << "your Age is " << Age << "valid ";

}



int main()
{
    

    PrintResult(TheAgeIsValid(18,45));

}
