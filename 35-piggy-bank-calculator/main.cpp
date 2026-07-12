 

#include <iostream>
using namespace std;

void ReadPiggy(int& Pennie ,int& Nickel ,int& Dime,int& Quater,int& Dollar) {

	cout << "enter the money " << endl;
	
	cout << "pennies ?" << endl;
	cin >> Pennie;

	cout << "Nickel ?" << endl;
	cin >> Nickel;

	cout << "Dime ?" << endl;
	cin >> Dime;

	cout << "Quarter ?" << endl;
	cin >> Quater;

	cout << "Dollar ?" << endl;
	cin >> Dollar;


}

int AllMoiny(int Pennie, int Nickel, int Dime, int Quater, int Dollar) {
	int Sum= 0;
	Sum = Pennie + (Nickel * 5) + (Dime * 10) + (Quater * 25) + (Dollar * 100);
	return Sum;
}
float NumberInDollars(int Sum ) {

	float Dollare =(float) Sum / 100;
	return Dollare;

}

int main()
{
	int Pennie, Nickel, Dime, Quater, Dollar;
	ReadPiggy(Pennie, Nickel, Dime, Quater, Dollar);
	cout << AllMoiny(Pennie, Nickel, Dime, Quater, Dollar)<<" Pennies"<<endl;
	cout << NumberInDollars(AllMoiny(Pennie, Nickel, Dime, Quater, Dollar)) << " Dollars"<<endl;
  
}
 
