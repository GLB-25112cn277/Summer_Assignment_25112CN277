#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int n1,n2,s=0,r,i;
    cout<<"enter the first number:";
    cin>>n1;
    cout<<"enter the second number:";
    cin>>n2;
    cout<<"armstrong numbers between "<<n1<<" and "<<n2<<" are:"<<endl;
for(i=n1;i<=n2;i++)
{
    int n =i;
    s=0;
    while(n>0){
        r=n%10;
        s=s+r*r*r;
        n=n/10;
    }

    
if(s==i)
{
    cout<<i<<" ";
}
}
return 0;

}