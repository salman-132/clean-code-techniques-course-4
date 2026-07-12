 
#include <iostream>
using namespace std;

int ReadTotalSales() {
    int TotalSales;
    cout << "enter total Sales " << endl;
    cin >> TotalSales;
    return TotalSales;
}

float GetComissionPercate(int TotalSales ) {

    if (TotalSales >= 1000000)
        return 0.1;
    else if (TotalSales >= 500000)
        return 0.2;
    else if (TotalSales >= 100000)
        return 0.3;
    else if (TotalSales >= 50000)
        return 0.5;
    else
        return 0.00;



}

float CalComissionPercate(int TotalSales){

    return GetComissionPercate(TotalSales)*TotalSales;

}


int main()
{
    int TotalSales = ReadTotalSales();
    cout <<"ComissionPercate"<< GetComissionPercate(TotalSales)<<endl;
    cout << "final " << CalComissionPercate(TotalSales) << endl;



}
