 
#include <iostream>
using namespace std;

string ReadPINCode() {
	string PinCode;
	cout << "enter your Pin Code " << endl;


	cin >> PinCode;
	return PinCode;
}

bool Login() {

	string PinCode;
	do {
		PinCode = ReadPINCode();
		if (PinCode == "1234") {
		
			return 1;
		}
		else {
			cout << "your Pin Code is wrong " << endl;
			system("color 4F");
		
		}
	
	
	
	
	} while (PinCode!="1234");


}





int main()
{

	if (Login()) {
	
		system("color 2F");
		cout << "\n your accout balance :" << 45000 << endl;

	
	
	}




}

 
