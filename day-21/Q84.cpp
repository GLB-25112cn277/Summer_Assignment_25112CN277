#include<iostream>
using namespace std;
int main(){
    char str[100];
    cout<<"enter a lowercase string:";
    cin>>str;
    for(int i=0;str[i]!=0;i++){
        str[i]=str[i]-32;
    }
cout<<"uppercase string:"<<str;
return 0;
}