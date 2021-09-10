#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    string s0;
    string s1("Hi there");
    string s2="hello";
    string s3(s2);
    string s4=s3;
    char a[]={'a','b','c','d','\0'};
    string s5(a);

    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;

    if(s0.empty())
        cout<<"s0 is empty"<<endl;
    else
        cout<<"s0 is full";

    s0.append("bruv");
    cout<<s0;
    cout<<"Length of s0 is:"<<s0.length()<<endl;

    s0.clear();
    cout<<"Lenght of s0 is :"<<s0.length();
    if(s0.empty())
        cout<<"s0 is empty"<<endl;
    else
        cout<<"s0 is full";

    s0="apple";
    s1="banana";
    cout<<s0.compare(s1)<<endl;
    if(s1>s0){
        cout<<"s1 is grater"<<endl;
    }
    string s="I am learning DSA";
    int index=s.find("learn");
    cout<<index<<endl;


    return 0;
}
