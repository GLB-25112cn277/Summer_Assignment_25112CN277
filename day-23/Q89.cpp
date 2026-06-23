#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"enter a string:";
    getline(cin,str);
    for(int i=0;i<str.length();i++){
     int count=0;
     for(int j=0;j<str.length();j++){
        if(str[i]==str[j])
            count++;
     }
     if(count==1){
        cout<<"first non-repeating character is:"<<str[i];
        break;
     }
    }
return 0;
}