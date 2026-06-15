#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter value of n:";
    cin>>n;
    int arr[n-1];
    cout<<"enter "<<n-1<<"elements:";
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int expectedSum=n*(n+1)/2;
    int missing= expectedSum-sum;
    cout<<"missing number is:"<<missing;
    return 0;
}