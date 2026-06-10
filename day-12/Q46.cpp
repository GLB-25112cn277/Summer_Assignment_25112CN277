#include<iostream>
using namespace std;
int armstrong(int n){
   int  r,sum=0,temp;
   temp=n;
   while (n>0)
   {
    r=n%10;
    sum=sum+r*r*r;
    n=n/10; 
   }
   if(sum==temp)
   return true;
   else
   return false;
}
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    if(armstrong(n))
    cout<<"armstrong number";
    else
    cout<<"not armstrong number";
    return 0;

}
   
