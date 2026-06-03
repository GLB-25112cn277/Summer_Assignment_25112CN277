#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the number:";
    cin>>n;
    cout<<"the factors of the number are:";
    for(i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    return 0;
}