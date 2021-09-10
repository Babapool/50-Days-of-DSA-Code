#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter the string with extra spaces:";
    cin>>str;

    int no=1;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        { 
            if ( str[i+1]==' ')
            
            {
            continue;
            }
            else 
            no++;
        
        }
    }
    if(str[0]==' ')
    {
        no--;
    }
    if(str[str.size()-1]==' ')
    {
        no--;
    }
    cout<<"The number of words are: "<<no;

 return 0;
    
}