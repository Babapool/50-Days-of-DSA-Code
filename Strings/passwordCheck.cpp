#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter password you want to validate:";
    cin>>str;
    
    int length=str.length();
    int upper=0;
    int lower=0;
    int number=0;
    int special=0;

    if(length>10)
    {
        for(int i=0;str[i]!='\0';i++)
        {
            if(str[i]>='A' && str[i]<='Z')
            {
                upper++;
            }
            if(str[i]>='a' && str[i]<='b')
            {
                lower++;
            }
            if(str[i]>='0' && str[i]<='9')
            {
                number++;
            }
            else
            {
                special++;
            }
        }
    }
    if(upper>0 && lower>0 && number>0 && special>0)
    {
        cout<<"Password is valid"<<endl;
    }
    else
    {
        cout<<"Password is invalid"<<endl;
    }

    return 0;

}