#include<iostream>
using namespace std;
int main()
{
    int n,i;
    int a=0,b=1;
    cout<<"enter the number:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<a<<" ";
        int next=a+b;
        a=b;
        b=next;
    }
    cout<<"the fibonacci series is:"<<endl;
    return 0;
}