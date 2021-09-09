#include<iostream>
using namespace std;

double taylor(double n,double x)
{
	double taylor=1;
	double num=1;
	double den=1;
	for(int i=1;i<=n;i++)
	{
		num=num*x;
		den=den*i;
		taylor=taylor+(num/den);
	}
	return taylor;
}

int main()
{
    double n,x;
    cout<<"Enter value of x:";
    cin>>x;
    cout<<"Enter the value of n(terms):";
    cin>>x;

    cout<<"The value of Taylor series of values of x and n are:"<<taylor(x,n);

    return 0;
}