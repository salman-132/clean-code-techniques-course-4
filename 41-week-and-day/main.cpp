#include <iostream>  
using namespace std;

float ReadPositavNumber(string message  ) {
	float  number;
	
	do {
		cout << message << endl;
		cin >> number;
	
	} while (number<=0);

	return number;

}

float HoursToDay(float NumOfHours) {


	return NumOfHours / 24;


}
float HoursToWeek(float NumOfHours) {
	float Day = NumOfHours / 24;
	return Day / 7;


}

float DayToWeek(float Day ){

	return Day / 7;

}

 
int main()
{
 
	float NumOfHours = ReadPositavNumber("Enter Hours Nuber");
	float NumOfDay = HoursToDay(NumOfHours);
	float NumOfWeek = HoursToWeek(NumOfHours);


	cout << "*******************************************" << endl;
	cout << "Hours :\t" << NumOfHours << endl;
	cout << "Day :\t" << NumOfDay << endl;
	cout << "Week :\t" << NumOfWeek;








}
