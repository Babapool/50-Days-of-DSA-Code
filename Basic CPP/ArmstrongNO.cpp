/*
Q8: Check whether a number is a Armstrong number or not
*/
#include <iostream>
using namespace std;

int main()
{
    int n,res=0,rem;
    
    cout << "Enter the no you want to check of its Armstrong number status:";
    cin >>n;
    int temp=n;

    while(temp!=0)
    {
        rem=temp%10;
        res=res+(rem*rem*rem);

        temp=temp/10;
    }

   if(res==n)
    cout<<n<<" is an Armstrong number";

    else
        cout<<n<<" is not an Armstrong number";

 return 0;
}