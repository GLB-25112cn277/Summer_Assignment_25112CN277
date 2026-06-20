#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter order of matrix:";
    cin>>n;
    int arr[10][10];
    cout<<"enter the matrix:";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"sum of diagonal elements:";
    for(int i=0;i<n;i++){
       
        sum+=arr[i][i];
    }   
    cout<<"sum of diagonal elements="<< sum;
return 0;
}