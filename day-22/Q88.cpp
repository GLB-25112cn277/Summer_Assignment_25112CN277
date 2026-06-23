#include<iostream>
using namespace std;
int main(){
    string str,result="";
    cout<<"enter a string:";
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        if(str[i]!=' ')
        result=result+str[i];
    }
    cout<<"string without spaces:"<<result;
    return 0;
}