#include<iostream>
using namespace std;
int lcm(int n1,int n2)
{
    for(int i=1;i<=n1*n2;i++)
    {
        if(i%n1==0 && i%n2==0)
        {
            return i;
            break;
        }
    }
}
int main()
{
    int n1,n2;
    cout<<"enter the numbers:"<<endl;
    cin>>n1>>n2;
    int gcd;
    gcd=(n1*n2)/lcm(n1,n2);
    cout<<"GCDis:"<<gcd<<endl;
return 0;
}
