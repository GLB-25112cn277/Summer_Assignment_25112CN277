#include<iostream>
using namespace std;
int main()
{
    int n,i,p;
    cout<<"enter a digit:";
    cin>>n;
   for(i=1;n>0;n=n/10) {
    p=n%10;
    i=i*p;
   }
   cout<<"the product of the digits is:"<<i;
   return 0;
}     
