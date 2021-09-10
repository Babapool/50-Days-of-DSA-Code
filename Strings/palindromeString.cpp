#include<iostream>
using namespace std;

int main()
{
    string str,originalstr;
    cout<<"Enter the string:";
    cin>>str;
    originalstr=str;

    int n = str.length();
 
    // Swap character starting from two corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);

    // cout<<"The reversed string is:"<<str<<endl;

    if(originalstr==str)
    {
        cout<<str<<" is a palindrome string"<<endl;
    }

    else    
        cout<<originalstr<<" is not a palindrome string"<<endl;

    return 0;
}