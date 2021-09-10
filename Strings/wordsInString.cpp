#include<iostream>
using namespace std;

int main()
{
    string str;
    int word=1;

    cout<<"Enter the string:";
    cin>>str;

    for(int i=0;str[i]!='\0';i++)
    {
        if (str[i]=' ')
        word++;
    }

    cout<<"No of words:"<<word;

    return 0;
}