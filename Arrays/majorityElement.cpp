#include <iostream>
#include<climits>
using namespace std;

void findMajority(int arr[], int n) {
     
    int flag = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = i; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > (n / 3)) {
            cout << arr[i] << " ";
            flag = 1;
        }
    }
    if (!flag)
        cout << "No Majority Element" << endl;
}
int main()
{
    int n;
    int a[1000];

    cout<<"Enter size of the array:";
    cin>>n;

    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    findMajority(a,n);
}