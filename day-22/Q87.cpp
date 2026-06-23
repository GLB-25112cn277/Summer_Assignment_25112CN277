#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"enter a string:";
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        int count =1;
        if(str[i]==' ')
        continue;
        for(int j=i+1;j<str.length();j++){
            if(str[i]==str[j]){
                count++;
                str[j]='0';
            }
        }
        if(str[i]!='0')
cout<<str[i]<<"="<<count<<endl;
}
return 0;
}