
#include <iostream>


using namespace std;

enum enDayOfWeek {sunday=1,monday=2,tuesday=3,wednesday=4,thursday=5,friday=6,saturday=7};




int ReadNumber(string Message ) {

    int number;
    do {
    
        cout << Message << endl;
        cin >> number;
    
    } while (number <=0);

    return number;
}

void TheAllDay() {
    cout << "*******************************" << endl;

    cout << "(1)---->sunday \n";
    cout << "(2)---->monday \n";
    cout << "(3)---->tuesday \n";
    cout << "(4)---->wednesday \n";
    cout << "(5)---->thursday \n";
    cout << "(6)---->friday \n";
    cout << "(7)---->saturday \n";
    cout << "*******************************" << endl;

}




enDayOfWeek TheDay(int number) {

    enDayOfWeek Day;
    if (number ==1) {
      
        return enDayOfWeek::sunday;
    }
    else if (number ==2) {
        return enDayOfWeek::monday;
    
    }
    else if (number ==3) {
    
        return enDayOfWeek::tuesday;
    }
    else if (number ==4) {
        return enDayOfWeek::wednesday;

    } 
    else if (number ==5){
        return enDayOfWeek::thursday;
    }
    else if (number ==6) {
        return enDayOfWeek::friday;
    }
    else if (number ==7) {
        return enDayOfWeek::saturday;
    }
 

}

void PrintTheDay(enDayOfWeek Day ) {

    cout << "your Day is " << endl;

    if (Day== enDayOfWeek::sunday) {

        cout << "sunday ";
    }
    else if ( Day==enDayOfWeek::monday) {
        cout<<"monday";

    }
    else if (Day== enDayOfWeek::tuesday) {

        cout<<"tuesday";
    }
    else if (Day==enDayOfWeek::wednesday) {
        cout << "wednesday";

    }
    else if (Day== enDayOfWeek::thursday) {
        cout << "thusday";
    }
    else if (Day==enDayOfWeek::friday) {
         cout<<"friday";
    }
    else if (Day==enDayOfWeek::saturday) {
       cout<<"saturday";
    }

}



int main()
{
    
    TheAllDay();
    int NumberOfDay = ReadNumber("pleas enter Day Number");
    
    PrintTheDay(TheDay(NumberOfDay));

}

 
