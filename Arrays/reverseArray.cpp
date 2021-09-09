#include<iostream>
using namespace std;

int main()
{

    int a[100];
	int i,n;

	cout<<"Enter size of array you want:";
	cin>>n;

     cout<<"Enter elements of Array:";
	for( i=0;i<n;i++)
	{
	     cin>>a[i];
	}
    
    cout<<"\nThe Array is:";
    for( i=0;i<n;i++)
	{
	    cout<<a[i]<<" ";
	}
    cout<<endl;

    int start=0;
    int end=n-1;

    while(start==end || start<end)
    {
       
        swap(a[start],a[end]);
         start++;
        end--;
        
    }

      cout<<"\nThe Reversed Array is:";
    for( i=0;i<n;i++)
	{
	    cout<<a[i]<<" ";
	}
    cout<<endl;


    /* Alternate ways
    1. int temp,s,e;
  for(int i=0;i<size/2;i++)
  {
    temp=array[i];
    array[i]=array[size-i-1];
    array[size-i-1]=temp;


  }

  2. for(int i=n;i<0;i--)
  {
      cout<<a[i];
  }
  */
   
    return 0;   
}