#include<iostream>
using namespace std;
int rev=0;
int reversenumber(int n)
{
    if(n==0)
    return rev;
    rev=rev*10+n%10;
    return reversenumber(n/10);
}
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<<"reverse of the number="<<reversenumber(n);
    return 0;
}