#include<iostream>
using namespace std;

int main()
{
    string str;
	cout<<"Enter the string:";
    cin>>str;
	cout<<"Size of an element of the string is: "<<sizeof(str[0])<<endl;;
	cout<<"Size of the entire string is"<<sizeof(str);

    //sizeof(str[n]) -> gives size of a particular nth element of the string
    //sizeof(str) -> gives size of the entire string

    return 0;
}