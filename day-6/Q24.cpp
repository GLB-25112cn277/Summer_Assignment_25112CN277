#include<iostream>
using namespace std;
int main()
{
    int n,x,ans=1;
    cout<<"enter the power:";
    cin>>n;
    cout<<"enter the base:";
    cin>>x;
    for(int i=1;i<=n;i++)
    {
        ans=ans*x;
    }
    cout<<"result is:"<<ans;
    return 0;
}