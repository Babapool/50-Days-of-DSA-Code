#include<iostream>
using namespace std;

int nCr(int n,int r)
{
    if(n<0||r<0||n<r)
        return -1;

    else
    {
        if(n==r)
            r=0;

        if (r==0)
            return 1;
        else if(r==1)
            return n;
        else if(r==1)
            return n;
        else
            return nCr(n-1,r-1)+nCr(n-1,r);
    }
    
}

int main()
{
    int n,r;
    cout<<"Enter value of n:";
    cin>>n;
    cout<<"Enter value of r:";
    cin>>r;
    cout<<"Value of nCr is:"<<nCr(n,r);

    return 0;
}