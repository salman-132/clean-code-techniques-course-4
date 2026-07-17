#include <iostream>
using namespace std;

struct stTaskDuration
{
    int NumOfDay, NumOfHourse, NumOfMinutes, NumOfSecond;
};

int ReadPositavNumber(string message)
{
    int number;

    do
    {
        cout << message << endl;
        cin >> number;

    } while (number <= 0);

    return number;
}

stTaskDuration SecondToTaskDuration(int total)
{
    stTaskDuration TaskDuration;

    const int SecondPerDay = 24 * 60 * 60;
    const int SecondPerHours = 60 * 60;
    const int SecondPerMinet = 60;

    int Remainder = 0;

    TaskDuration.NumOfDay = total / SecondPerDay;
    Remainder = total % SecondPerDay;

    TaskDuration.NumOfHourse = Remainder / SecondPerHours;
    Remainder = Remainder % SecondPerHours;

    TaskDuration.NumOfMinutes = Remainder / SecondPerMinet;
    Remainder = Remainder % SecondPerMinet;

    TaskDuration.NumOfSecond = Remainder;

    return TaskDuration;
}

void Print(stTaskDuration Task)
{
    cout << "\n"
        << Task.NumOfDay << ":"
        << Task.NumOfHourse << ":"
        << Task.NumOfMinutes << ":"
        << Task.NumOfSecond << endl;
}

int main()
{
    int totalSecond =
        ReadPositavNumber("Please Enter Total Seconds:");

    Print(SecondToTaskDuration(totalSecond));

    return 0;
}
