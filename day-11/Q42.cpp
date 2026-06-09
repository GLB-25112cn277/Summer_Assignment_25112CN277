#include<iostream>
using namespace std;
int max(int n1, int n2){
    if(n1>n2)
    return n1;
    else 
    return n2; 
}
int main()
{
    int n1,n2;
    cout<<"enter two numbers:";
    cin>>n1>>n2;
    cout<<"maximum number="<<max(n1,n2);
    return 0;
}