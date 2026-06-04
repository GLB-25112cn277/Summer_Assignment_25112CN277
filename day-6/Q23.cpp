#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"enter the number:";
cin>>n;
while(n>0)
{
    count=count+(n&1);
    n=n>>1;
}
cout<<"number of bits is:"<<count;
return 0;
}