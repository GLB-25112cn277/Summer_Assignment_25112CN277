#include<iostream>
#include<string>
using namespace std;
int main(){
    string str,word="",longest="";
    cout<<"enter a sentence:";
    getline(cin,str);
    for(int i=0;i<=str.length();i++){
        if(str[i]!=' '&& i<str.length()){
            word = word+str[i];
        }
        else{
            if(word.length()>longest.length()){
                longest=word;
            }
            word="";
        }
    }
cout<<"longest word:"<<longest;
return 0;
 }
