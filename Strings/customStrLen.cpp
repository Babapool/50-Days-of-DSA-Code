#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int count=0;
    cout<<"Enter the string of your choice:";
    cin>>s;

    for(int i=0;s[i]!='\0';i++)
    {
        count++;
    }

    cout<<"The length of the string is:"<<count;
}