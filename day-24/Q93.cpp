#include<iostream>
#include<string>
using namespace std;
int main(){
string str1,str2;
cout<<"enter 1st string:";
cin>>str1;
cout<<"enter 2nd string:";
cin>>str2;
if(str1.length()!=str2.length()){
    cout<<"not a rotation";
}
else{
    string temp = str1+str1;
    if(temp.find(str2)!=string::npos)
    cout<<"string are rotation of each other";
    else
    cout<<"string are not rotation of each other";
}
return 0;
}