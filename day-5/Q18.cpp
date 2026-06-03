#include<iostream>
using namespace std;
int main()
{
    int n,temp,digit,sum=0;
    cout<<"enter the number:";
    cin>>n;
    temp=n;
    while(temp>0)
    {
        digit=temp%10;
       int fact=1;
        for(int i=1;i<=digit;i++){
            fact=fact*i;
        }
        sum+=fact;
        temp=temp/10;
    }
    if(sum==n)
    {
        cout<<"the number is strong";
    }
    else
    {
        cout<<"the number is not strong";
    }
    return 0;
    }

