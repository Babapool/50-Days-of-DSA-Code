/*
Q1: Check which number is greater
*/

#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Enter 2 numbers:" << endl;
    cin>>a>>b;
    if(a>b)
        cout<<a<<" is greater than "<<b;
    else
        cout<<b<<" is greater than "<<a;

    return 0;
}
