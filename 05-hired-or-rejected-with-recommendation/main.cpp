#include <iostream>

using namespace std;

struct stInfo {
	int Age;
	bool HasLicen;
	bool Recoman;
};

stInfo ReadInfo() {
	stInfo Info;
	cout << "enter your Age " << endl;
	cin >> Info.Age;

	cout << "do you has drive licen " << endl;
	cin >> Info.HasLicen;

	cout << "do you have Recomandation " << endl;
	cin >> Info.Recoman;
	return Info;
}

bool IsAccepted(stInfo Info) {
	if (Info.Recoman) {
		return true;
	}
	else {
		return (Info.Age > 21 && Info.HasLicen);
	}
}


void printHiredRejected(stInfo Info) {

	if (IsAccepted(Info)) {

		cout << "Hired" << endl;
	}
	else
		cout << "Rejected" << endl;
}
 
int main()
{

	printHiredRejected(ReadInfo());

}

