#include <iostream>
#include<climits>
using namespace std;

void printArray(int a[],int n)
{
    cout<<"\nElements of the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

void leftShift(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
         n--;
    }

}

void leftRotate(int a[],int n)
{
    int temp=a[0];
     for(int i=0; i<n-1; i++)
    {
        a[i] = a[i+1];
    }
    a[n-1] = temp;
}

void rightRotate(int a[],int n)
{
    int temp=a[n-1];

    for(int i=n-1;i>0;i--)
    {
        a[i]=a[i-1];
    }

    a[0]=temp;
}

int main()
{
    int n,choice;
    int a[1000];

    cout<<"Enter size of the array:";
    cin>>n;

    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    printArray(a,n);

    cout<<"You have the following choices:"<<endl;
    cout<<"1.Left Shift\n2.Left Rotate\n3. Right Rotate"<<endl;
    cout<<"Enter your choice:";
    cin>>choice;

    switch(choice)
    {
        case 1: 
        cout<<"Left Shifting:";
        leftShift(a,n);
        printArray(a,n);
        break;

        case 2:
         leftRotate(a,n);
        cout<<"\nAfter left rotate:"<<endl;
        printArray(a,n);
        break;

        case 3:
        rightRotate(a,n);
        cout<<"\nAfter right rotate:"<<endl;
        printArray(a,n);
        break;

        default:
        cout<<"You have entered wrong choice"<<endl;

    }
   
   return 0;

}