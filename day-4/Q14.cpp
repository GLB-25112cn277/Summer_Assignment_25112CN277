#include<iostream>
using namespace std;
int solve(int n)
{
    if(n==0 or n==1)
        return n;
    return solve(n-1)+solve(n-2);
}
int main()
{
    int a=0,b=1;
    int n,i;
    cout<<"enter the term:";
    cin>>n;
    cout<<"solve(n) is: "<<solve(n)<<endl;
    return 0;

}