#include<iostream>
using namespace std;
int main()
{
    int n;
    int factorial=1;
    cout<<"enter the number";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    cout<<"the factorial is "<<factorial;
    return 0;
    }