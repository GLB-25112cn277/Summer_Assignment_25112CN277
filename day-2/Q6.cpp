#include<iostream>
using namespace std;
int main()
{
    int n,s=0,r,i;
    cout<<"enter a number:";
    cin>>n;
for(i=n;i!=0;i=i/10)
{
    r=i%10;
    s=s*10+r;

}

    cout<<"the reverse of the number is:"<<s;
    return 0;
    }
