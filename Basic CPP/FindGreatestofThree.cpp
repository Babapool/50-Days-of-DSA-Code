/*
Q3: Find the greatest of 3 nos
*/
#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter any three numbers:";
    cin >>a>>b>>c;

    if (a>b && a>c)
        cout<<a<<" is the greater of the 3 nos";
    
    else if(b>a && b>c)
        cout<<b<<" is the greater of the 3 nos";
    
    else
        cout<<c<<" is the greater of the 3 nos";

    return 0;
}