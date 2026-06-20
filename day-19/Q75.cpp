#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter number of rows and columns:";
    cin>>r>>c;
    int arr[10][10];
    cout<<"enter the matrix:";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"transpose of matrix:";
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}