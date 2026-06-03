#include<iostream>
using namespace std;
int main()
{
    int n,i,largest=1;
    cout<<"enter the number:";
    cin>>n;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            largest=i;
            n=n/i;
        }
    }
    cout<<"the largest prime factor is:"<<largest;
    return 0;
}