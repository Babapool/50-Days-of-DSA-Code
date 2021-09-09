#include <iostream>
using namespace std;

int factorial(int n)
{

    if(n==1||n==0)
        return 1;

    else if (n<-1)
        return -1;

    else
    {
        
     return n*factorial(n-1);
        
    }


}
int main()
{
    int a;
    cout<<"Enter the number you want to find the factorial:";
    cin>>a;
    cout<<"Factorial of "<<a<<" is:"<<factorial(a);
}