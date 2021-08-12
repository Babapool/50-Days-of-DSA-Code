/*
Q7: Check whether a number is a perfect number or not
*/
#include <iostream>
using namespace std;

int main()
{
    int n,sum=0;
    
    cout << "Enter the no you want to check of its Perfect number status:";
    cin >>n;

    for(int i=1; i<n; i++)
    {
        if(n%i==0)
            sum=sum+i;
    }

    if(n==sum)
        cout<<n<<" is a perfect number";
    
    else
        cout<<n<<" is not a perfect number";
    
        
    return 0;
}