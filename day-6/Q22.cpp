#include<iostream>
using namespace std;
int main()
{
    int binary,decimal=0,i=1,rem;
    cout<<"enter the binary number:";
    cin>>binary;
    while(binary>0)
    {
        rem=binary%10;
        decimal=decimal+rem*i;
        binary=binary/10;
        i=i*2;
    }
    cout<<"decimal number is:"<<decimal;
    return 0;
}