#include <iostream>
using namespace std;

int mem[1000];

int memorizationfibonacci(int n)
{
    if(n<=1)
    {
        mem[n]=n;
        return n;
    }
    else{
        if(mem[n-1]== -1){
            mem[n-1]=memorizationfibonacci(n-1);
        }
          if(mem[n-2]== -1){
            mem[n-2]=memorizationfibonacci(n-2);
        }
        mem[n]=mem[n-1] +mem[n-2];
        return mem[n];
    }
}

int main()
{
    int n;
   for(int i=0;i<=100;i++)
   {
       mem[i]=-1;
   }

    cout<<"Enter the number of terms you want to print:";
    cin>>n;
   cout <<n<<"th term of the fibonacci series:"<<memorizationfibonacci(n);
    return 0;
}