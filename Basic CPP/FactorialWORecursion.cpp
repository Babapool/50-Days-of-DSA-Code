/*
Q5: Find the factorial of the number without recusrion
*/
#include <iostream>
using namespace std;

int main()
{
    int no;
    long fac=1;
    cout << "Enter the no whose factorial you want to calculate:";
    cin >>no;

    if(no==1 || no==0)
        cout<<"Factorial of "<<no<<" is "<<fac;

    else if(no>1)
    {
        for (int i = 2; i <= no; i++)
        {
            fac *= i;
        }
        
     cout<<"Factorial of "<<no<<" is "<<fac;    
    } 

    else
        cout<<-1;

    return 0;
}