#include<iostream>
using namespace std;
int main(){
    int arr[10],even=0,odd=0;
    cout<<"enter 10 elements:";
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        even++;
        else
        odd++;
    }
    cout<<"even elements="<<even<<endl;
    cout<<"odd elements="<<odd<<endl;
    return 0;
}
