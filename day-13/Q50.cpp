#include<iostream>
using namespace std;
int main(){
    int arr[5],sum=0;
    float avg;
    cout<<"enter 5 elements:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
avg=sum/5;
cout<<"sum="<<sum<<endl;
cout<<"average="<<avg;
return 0;
}