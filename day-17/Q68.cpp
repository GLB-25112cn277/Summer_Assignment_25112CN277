#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"enter number of elements of 1st array:";
    cin>>n1;
    int a[n1];
    cout<<"enter array 1 elements:";
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    cout<<"enter number of elements of 2nd array:";
    cin>>n2;
    int b[n2];
    cout<<"enter array 2 elements:";
    for(int i=0;i<n2;i++){
        cin>>b[i];
    }
    cout<<"common elements are:";
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(a[i]==b[j]){
                cout<<a[i]<<" ";
                break;
            }
        }
    }
    return 0;

}