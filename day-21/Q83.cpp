#include<iostream>
using namespace std;
int main(){
    char str[100];
    int vowels=0,consonants=0;
    cout<<"enter a string:";
    cin>>str;
    for(int i=0;str[i]!=0;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E' ||str[i]=='I'||str[i]=='O'||str[i]=='U') 
       {
         vowels++;
    }
    else{
        consonants++;
    }
}
cout<<"vowels="<<vowels<<endl;
cout<<"consonants="<<consonants<<endl;
return 0;
}