#include<iostream>
using namespace std;
int main(){
    int n,flag=1;
    cout<<"enter order of matrix:";
    cin>>n;
    int arr[10][10];
    cout<<"enter matrix elements:";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]!=arr[j][i]){
                flag=0;
                break;
            }
        }
    }
            if (flag==1)
            {
cout<<"matrix is symmetric";
        }
        else{
            cout<<"matrix is not symmetric";
        }
        
    return 0;
}