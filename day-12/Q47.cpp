#include<iostream>
using namespace std;
void fibonacci(int n)
{
    int a=0,b=1,i;
    for(i=1;i<=n;i++)
    {
        cout<<a<<" ";
        int next=a+b;
        a=b;
        b=next;
    }
    
}
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<<"the fibonacci series is:";
    fibonacci(n);
    return 0;
}