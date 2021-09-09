#include<iostream>
using namespace std;

int binarySearch(int a[],int n,int key)
{
	    int s=0;
	    int e=n-1;
	    while(s<=e){
	        int mid=(s+e)/2;
	        if(a[mid]==key){
	            return mid;
	        }
	        if(a[mid]>key){
	            e=mid-1;
	       
	        }
	        else{
	            s=mid+1;
	        }
	    }
	    return -1;
}

int main()
{
	    int a[100];
	    int i;
	    int n,key;

	    cout<<"Enter size of array you want:";
	    cin>>n;

        cout<<"Enter elements of Array:";
	    for( i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	   cout<<"Enter the key you  want to search ";
	   cin>>key;
	   cout<<"Elements is present at"<<binarySearch(a,n,key)<<" index position"<<endl;

    return 0;
}