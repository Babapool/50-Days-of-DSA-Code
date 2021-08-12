/*
Q2: Check if a number lie between 10 and 90
*/
#include <iostream>
using namespace std;

int main()
{
    int no;
    cout << "Enter a number you like:";
    cin >> no;

    if (10 < no && no < 90)
        cout << no << " is between 10 and 90";

    else if (10 > no)
        cout << no << " is less than 10";

    else
        cout << no << " is greater than 90";

    return 0;
}