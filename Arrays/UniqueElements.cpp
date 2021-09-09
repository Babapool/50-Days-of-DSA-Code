#include<iostream>
#include<climits>
using namespace std;

int uniqueElement(int arr[],int n){
    int unique=0;
   
    for(int i=0;i<n;i++)
    {
        unique=unique^arr[i];
    }
        if(unique==0)
        {
            return -1;
        }
        else
        {
            return unique;
        }
    
}

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
    
    cout<<"The unique element present in the array is: "<<uniqueElement(a,n);
   
    return 0;   
}
