#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"enter the number:";
    cin>>n;
    for(i=1;i<n;i++){
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        cout<<"the number is perfect";
    }
    else
    {
        cout<<"the number is not perfect";
    }
    return 0;
}