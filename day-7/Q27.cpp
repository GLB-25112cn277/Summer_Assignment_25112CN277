#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==0)
    return 0;
    return n%10+sum(n/10);
}
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<<"the sum of the digits is "<<sum(n);
    return 0;
}