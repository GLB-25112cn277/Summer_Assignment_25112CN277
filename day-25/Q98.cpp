#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1,str2;
    cout<<"enter 1st string:";
    cin>>str1;
    cout<<"enter 2nd string:";
    cin>>str2;
    cout<<"common characters are:";
    for(int i=0;i<str1.length();i++)
    {
        for(int j=0;j<str2.length();j++){
            if(str1[i]==str2[j]){
                cout<< str1[i] <<" ";
            break;  //avoid printing the same characters multiple times
         }
        }
    }
    return 0;
}
