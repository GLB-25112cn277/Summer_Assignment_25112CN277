#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"enter number of elements:";
    cin>>n;
    int arr[n];
    cout<<"enter array elments:";
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }int x;
    cout<<"enter element:";
    cin>>x;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            count++;
        }
    }
    cout<<"frequency="<<count;
    return 0;
}