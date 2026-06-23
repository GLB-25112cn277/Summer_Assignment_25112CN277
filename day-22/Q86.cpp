#include<iostream>
using namespace std;
int main(){
    string str;
    int count=1;
    cout<<"enter a sentence:";
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            count++;
        }
    }
    cout<<"number of words="<<count;
    return 0;
}