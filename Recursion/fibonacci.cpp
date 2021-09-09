#include <iostream>
using namespace std;

using namespace std;

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fib(n - 2) + fib(n - 1);
    }
}

int main()
{
    int n;
    cout<<"Enter the number of terms you want to print:";
    cin>>n;
    cout <<n<<"th term of the fibonacci series:"<<fib(n);

    return 0;
}