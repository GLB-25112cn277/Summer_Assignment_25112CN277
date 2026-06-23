#include<iostream>
using namespace std;
int main(){
string str;
    int flag=1;
    cout<<"enter a string:";
    cin>>str;
    for(int i=0;i <=str.length()/2;i++){
     if(str[i]!=str[str.length()-1-i]){ 
        flag=0;
        break;
     }
}
if(flag==1){
    cout<<"pallindrome string";
}
else{
    cout<<"not a pallindrome string";
}
return 0;
}