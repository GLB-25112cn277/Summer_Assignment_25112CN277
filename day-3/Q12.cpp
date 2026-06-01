#include<iostream>
using namespace std;
int gcd(int n1,int n2)
{
    return (n2==0)?n1:gcd(n2,n1%n2);
}
int lcm(int n1,int n2)
{
    return (n1*n2)/gcd(n1,n2);
}
int main()
{
    int n1,n2;
    cout<<"enter two numbers:"<<endl;
    cin>>n1>>n2;
    cout<<"LCM is:"<<lcm(n1,n2)<<endl;

    return 0;
}