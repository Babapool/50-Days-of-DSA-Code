/*
Q9: Check whether a number is a Prime number or not
*/
#include <iostream>
using namespace std;

int main()
{
    int n,count=0;
    
    cout << "Enter the no you want to check:";
    cin >>n;
    
    if(n==1)
        cout<<"1 is neither prime nor composite";

    else
    {
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
                count++;
        }

    if(count==0)
    {
        cout<<n<<" is a prime number";
    }

    else
        cout<<n<<" is a composite number";
    }
   
        
    return 0;
}