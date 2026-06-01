#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n1,n2,i,p=0,f=0,j;
    cout<<"enter the first range";
    cin>>n1;
    cout<<"enter the second range";
    cin>>n2;
    for(i=n1;i<=n2;i++)
    {
        for(j=2;j<=sqrt(i);j++){
            if(i%j==0)
            p++;
        }
        if(p==0 && i!=1)
        {
            f++;
            cout<<i<<" ";
        }
        p=0;
    }
    
    return 0;
}
        