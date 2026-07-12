

#include <iostream>
using namespace std;


int  ReadNumber (  ) {
	int number;
	cout << "enter Number " << endl;
	cin >> number;

	return number;
}
int Readpower() {
	int Power;
	cout << "enter the power " << endl;
	cin >> Power;
	return Power;
}


int PrintPowerOfM(int N,int M) {
	int Solution = 1;
	if (M==0) {
	
		return 1;
	
	}


	for (int i = 0; i < M;i++) {
	
		Solution *= N;
	
	
	
	
	}


	return Solution;


}



int main()
{
	cout<<"Rusolt="<<PrintPowerOfM(ReadNumber(), Readpower());

}

 
