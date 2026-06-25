#include<iostream>
using namespace std;
int main(){
    int a[50],b[50],c[100];
    int n1,n2,i,j,k;
    cout<<"enter number of elements of 1st array:";
    cin>>n1;
    cout<<"enter elements of 1st sorted array:";
    for(i=0;i<n1;i++){
cin>>a[i];
    }
    cout<<"enter number of elements of 2nd array:";
    cin>>n2;
    cout<<"enter elements of 2nd sorted array:";
    for(i=0;i<n2;i++){
        cin>>b[i];
    }
    i=j=k=0;
    while(i<n1&&j<n2){
        if(a[i]<b[j]){
            c[k++]=a[i++];
        }
        else{
            c[k++]=b[j++];
        }
    }
    while(i<n1)
c[k++]=a[i++];
while(j<n2)
c[k++]=b[j++];
cout<<"merged array:";
for(int i=0;i<k;i++)
    cout<<c[i]<<" ";
return 0;
}