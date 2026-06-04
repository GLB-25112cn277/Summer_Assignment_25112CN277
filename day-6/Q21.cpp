#include<iostream>
using namespace std;
int main()
{
    int n,rem,binary=0,i=1;
    cout<<"enter the number:";
    cin>>n;
    while(n>0)
    {
        rem=n%2;
        binary=binary+rem*i;
        n=n/2;
        i=i*10;
    }
    cout<<"binary number is:"<<binary;
    return 0;
}