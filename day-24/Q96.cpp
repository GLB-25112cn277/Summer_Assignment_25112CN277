#include<iostream>
#include<string>
using namespace std;
int main(){
    string str,result="";
    cout<<"enter a string:";
    cin>>str;
    for (int i=0;i<str.length(); i++)
    {
     bool found= false;
     for(int j=0;j<str.length();j++){
        if(str[i]==result[j]){
            found=true;
            break;
        }
     } 
     if(!found){
        result=result+str[i];
     }
    }
  cout<<"string after removing duplicates:"<<result;
  return 0;  
}
