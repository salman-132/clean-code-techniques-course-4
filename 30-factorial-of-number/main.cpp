#include <iostream>
using namespace std;

int ReadNumber()
{
    int number;
    cout << "Enter the number: " << endl;
    cin >> number;

    return number;
}

int CalFactorial(int number)
{
    int factorial = 1;

    for (int i = 1; i <= number; i++)
    {
        factorial *= i;
    }

    return factorial;
}

int main()
{
    int number = ReadNumber();

    cout << CalFactorial(number) << endl;

    return 0;
}
