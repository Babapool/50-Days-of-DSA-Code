#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter the string:";
    cin>>str;

    int n = str.length();
 
    // Swap character starting from two corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);

    cout<<"The reversed string is:"<<str;

    return 0;
}