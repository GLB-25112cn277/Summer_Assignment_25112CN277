#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number of elements:";
    cin>>n;
    int arr[n];
    cout<<"enter array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest=arr[0];
    int secondlargest=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>largest){
                secondlargest=largest;
                largest=arr[i];
            }
            else if(arr[i]>secondlargest){
                secondlargest=arr[i];
            }
            }
        cout<<"second largest element="<<secondlargest;
    
        return 0;
    }
