#include <iostream>
using namespace std;


enum enPassOrFail {Pass=1,fail=2};
int Mark() {
    int Mark;
    cout << "enter your marks " << endl;
    cin >> Mark;

    return Mark;
}
enPassOrFail PassOrFail(int Mark) {
    enPassOrFail Grad;
    if (Mark >= 50) {
        return enPassOrFail::Pass;
    }
    else
        return enPassOrFail::fail;
}
void PrintGrad(enPassOrFail Grad) {

    cout << "*************************************" << endl;

    if (Grad == enPassOrFail::Pass) {
    
        cout << "you are Pass" << endl;
    
    }
    else
        cout << "you are Fail " << endl;
    cout << "*************************************" << endl;
}



int main()
{
   
    PrintGrad(PassOrFail(Mark()));
}

 
