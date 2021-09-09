#include<iostream>
using namespace std;

double taylorByhomer(double n, double x)
{
   static double temp=1;
   if(n==0)
   {
       return temp;
   }
   else
   {
       temp=1+(x/n*temp);
       return taylorByhomer(n-1,x);
   }
}


int main()
{
    double x,n;
    cout<<"Enter value of x:";
    cin>>x;
    cout<<"Enter the value of n(terms):";
    cin>>x;

    cout<<"The value of Taylor series by Homer's rule for values of x and n are:"<<taylorByhomer(x,n);

    return 0;
}
