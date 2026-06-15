#include<iostream> 
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements:";
    cin>>n;
    int arr[n];
    cout<<"enter array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxfreq=0,element;
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>maxfreq){
            maxfreq=count;
            element=arr[i];
        }
    }
    cout<<"element with maximum frequency:"<<element<<endl;
    cout<<"frequency:"<<maxfreq<<endl;
    return 0;
}