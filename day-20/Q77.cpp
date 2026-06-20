#include<iostream>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    cout<<"enter rows and columns of 1st matrix:";
    cin>>r1>>c1;
    cout<<"enter rows and columns of 2nd matrix:";
    cin>>r2>>c2;
    if(c1!=r2){
        cout<<"multiplication not possible";
        return 0;
    }
    int a[10][10],b[10][10],mul[10][10];
    cout<<"enter 1st matrix:";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>a[i][j];
        }
    }
    cout<<"enter 2nd matrix:";
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            mul[i][j]=0;
            for(int k=0;k<c1;k++){
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    cout<<"product of matrices:";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}