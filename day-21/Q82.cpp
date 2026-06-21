#include<iostream>
using namespace std;
int main(){
    char str[100];
    int rev=0;
    cout<<"enter a string:";
    cin>>str;
    while(str[rev]!=0){
        rev++;
    }
    cout<<"reverse string=";
    for(int j=rev-1;j>=0;j--){
        cout<<str[j];
    }
    return 0;
}