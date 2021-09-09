#include<iostream>
#include<climits>
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
    
    int largest=INT_MIN;
    int smallest=INT_MAX;
    for(i=0;i<n;i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }

        if(a[i]<smallest)
        {
            smallest=a[i];
        }

    }
	cout<<"Largest element of Array: "<<largest<<endl;
	cout<<"Smallest element of Array: "<<smallest<<endl;

    return 0;   
}





