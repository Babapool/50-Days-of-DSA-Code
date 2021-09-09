#include<iostream>
using namespace std;

void linearSearch(int a[],int n)
{
    int key,i;
	cout<<"Enter the element you want to search:";
	cin>>key;
	for( i=0;i<=n-1;i++)
	{
		if(a[i]==key)
		{
			cout<<"Element "<<i<<" found at "<<i<<" index"<<endl;
			break;
		}
		
	}
  if(i==n)
  {
    cout<<"Element not found"<<endl;
  }
	
}

int main()
{
	int a[100];
    int n;
	
	cout<<"Enter size of array:";
	cin>>n;


  cout<<"Enter the elements:";
	for(int i =0;i<n;i++)
	{
		cin>>a[i];
	}

    linearSearch(a,n);
	return 0;
}