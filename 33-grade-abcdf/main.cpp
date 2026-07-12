 /*
 A>90
 B>80
 C>70
 D>60
 F<60
 */
#include <iostream>
using namespace std;

enum enMarks { A = 1,B=2,C=3,D=4,F=5 };


int ReadGrade() {
    int Mark;
    cout<< "enter your Mark" << endl;
    cin >> Mark;
    return Mark;
}

enMarks cheak(int mark) {

    

   
    if (mark >= 90) {
        return enMarks::A;
    }
    else if(mark>=80) {
    
        return enMarks::B;
    
    }
    else if (mark>=70) {
        return enMarks::C;
    
    }
    else if (mark>=60) {
        return enMarks::D;
    
    }
    else {
        return enMarks::F;
    }
 
}

void PrintMark(enMarks M) {

    cout << "your Grade Is " << endl;
 
    if (M==enMarks::A ) {
        cout << "A" << endl;
    }
    else if (M == enMarks::B) {
    
        cout << "B" << endl;

    }
    else if (M == enMarks::C) {
        cout << "C" << endl;

    }
    else if (M == enMarks::D) {
    
        cout << "D" << endl;
    }
    else {
    
        cout << "F" << endl;
    }

}



int main()
{ 

    PrintMark( cheak(ReadGrade()));

    
}
