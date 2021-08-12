/*
Q10: Find sum of digits of the number
*/
#include <iostream>
using namespace std;

int main()
{
    int n,sum=0,rem;
    
    cout << "Enter the no :";
    cin >>n;
    int temp=n;

    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem;

        temp=temp/10;
    }
    
    cout<<"Sum of the digits of "<<n<<" are:"<<sum;
        
    return 0;
}