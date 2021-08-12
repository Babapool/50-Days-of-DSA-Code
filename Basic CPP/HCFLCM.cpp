/*
Q12: Find the HCF and LCM of the two numbers
*/
#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Enter the two nos :";
    cin >>a>>b;
    int n=a*b;
    
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }

    cout<<"HCF is: "<<a<<endl;
    
    int lcm=n/a;

    cout<<"LCM is:"<<lcm;
        
    return 0;
}