/*
Q6: Find the factors of the number
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cout << "Enter the no whose factorial you want to calculate:";
    cin >>n;

    cout<<"The factors of "<<n<<" are:"<<endl;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            cout<<" "<<i;
    }
        
    return 0;
}