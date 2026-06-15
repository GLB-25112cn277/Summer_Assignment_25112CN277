#include<iostream>
using namespace std;
int main()
{
    int n,sum;
    cout<<"enter number of elements:";
    cin>>n;
    int arr[n];
    cout<<"enter array elemnts:";
    for(int i=0;i<n;i++){
    cin>>arr[i];}
    cout<<"enter required sum:";
    cin>>sum;
    bool found=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                cout<<"pair found:"<<arr[i]<<"and"<<arr[j]<<endl;
                found=true;
            }
        }
    }
    if(!found){
        cout<<"no pair found";
    }
    return 0;
}