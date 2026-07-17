 
#include <iostream>
using namespace std;


struct StTaskD {
	int Day, Hours, Minut, Scond;

};


int  ReadPositavNumber(string message) {
	int  number;

	do {
		cout << message << endl;
		cin >> number;

	} while (number <= 0);

	return number;

}

StTaskD ReadTaskD() {

	StTaskD TaskD;
	TaskD.Day = ReadPositavNumber("Enter Day ");
	TaskD.Hours = ReadPositavNumber("Enter Hours");
	TaskD.Minut = ReadPositavNumber("Enrer Minut");
	TaskD.Scond = ReadPositavNumber("Enter Second");


	return TaskD;
}


int TaskDurationInScond(StTaskD Time) {

	int TotalScond = 0;
	TotalScond = Time.Day * 24 * 60 * 60;
	TotalScond += Time.Hours * 60 * 60;
	TotalScond += Time.Minut * 60;
	TotalScond += Time.Scond;

	return TotalScond;

}




int main()
{
 

	cout << "**********************************" << endl;
	cout << TaskDurationInScond(ReadTaskD());




}
