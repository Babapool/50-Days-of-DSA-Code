#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter the string:";
    cin>>str;

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            str[i]=str[i]-'a'+'A';
        }
    }

    cout<<"Uppercase String is:"<<str;

    return 0;
}