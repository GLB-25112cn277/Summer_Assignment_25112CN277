#include<iostream>
using namespace std;
int main(){
    int n1;
    cout<<"enter number of elements of first array:";
    cin>>n1;
    int a[n1];
    cout<<"enter array 1 elements:";
    for(int i=0;i<n1;i++){
        cin>>a[i]; 
    }
        int n2;
        cout<<"enter number of elements of second array:";
        cin>>n2;
        int b[n2];
cout<<" enter array 2 elements:";  
        for(int i=0;i<n2;i++){
        cin>>b[i];
    }
    int c[n1+n2];
    for(int i=0;i<n1;i++){
        c[i]=a[i];
    }
    for(int i=0;i<n2;i++){
        c[n1+i]=b[i];
    }
    cout<<"merged array:";
    for(int i=0;i<n1+n2;i++){
        cout<<c[i]<<" ";
    }
    return 0;
}