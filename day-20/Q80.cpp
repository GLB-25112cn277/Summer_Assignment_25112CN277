#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter rows and columns:";
    cin>>r>>c;
    int arr[10][10];
    cout<<"enter the matrix:";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int j=0;j<c;j++){
      int sum=0;
      for(int i=0;i<r;i++){
        sum+=arr[i][j];
      }
      cout<<"sum of columns"<<j+1<<"="<<sum<<endl;
    }
    return 0;
}