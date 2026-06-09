#include<iostream>
using namespace std;
int prime(int n){
    for(int i=2;i<n;i++){
        if(n==i)
        return true;
        if(n%i==0)
        return false;
    }
}
    int main()
    {
        int n;
        cout<<"enter the number:";
        cin>>n;
        if(n>1&& prime(n))
        cout<<"prime number";
        else
        cout<<"not a prime number";
        return 0;
    }
