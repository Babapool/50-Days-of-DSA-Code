/*
Q4: Check if a year is a leap year or not
*/
#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter the year you want to check:";
    cin >>year;

    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
            cout<<year<<" is leap year";
    }

    else
        cout<<year<<" is not a leap year"; 

    return 0;
}