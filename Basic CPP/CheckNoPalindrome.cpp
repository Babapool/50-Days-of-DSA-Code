/*
Q11: Check whether the number is palindrome or not
*/
#include <iostream>
using namespace std;

int main()
{
    int n,rev=0,rem;
    
    cout << "Enter the no :";
    cin >>n;
    int temp=n;

    while(temp!=0)
    {
        rem=temp%10;
        rev=rev*10+rem;

        temp=temp/10;
    }
    
    if(n==rev)
        cout<<n<<" is a Palindrome number";
    else
        cout<<n<<" is not a Palindrome Number";
        
    return 0;
}