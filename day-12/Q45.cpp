#include<iostream>
using namespace std;
int palindrome(int n){
    int s=0,r,i;
    for(i=n;i!=0;i=i/10){
        r=i%10;
        s=s*10+r;
    }
    
    if(s==n and n>0)
    return true;
    else
    return false;
   }
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    if(palindrome(n))
    cout<<"number is palindrome";
    else
    cout<<"number is not palindrome";
    return 0;
}