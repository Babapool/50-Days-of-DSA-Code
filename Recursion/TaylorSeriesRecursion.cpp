#include<iostream>
using namespace std;

double taylor(int x, int n)
{
    static double num=1;
    static double den=1;
    static double term;

    if(n==0)
    {  
        return 1;
    }

    else
    {
        term=taylor(x,n-1);
        num=num*x;
        den=den*n;
        return (term +num/den);
    }
}

int main()
{
    int x,n;
    cout<<"Enter value of x:";
    cin>>x;
    cout<<"Enter the value of n(terms):";
    cin>>x;

    cout<<"The value of Taylor series of values of x and n are:"<<taylor(x,n);

    return 0;
}
