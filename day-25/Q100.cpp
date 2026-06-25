#include<iostream>
#include<string>
using namespace std;
int main(){
   string word[10],temp;
    int n;
    cout<<"enter number of words:";
    cin>>n;
    cout<<"enter words:";
    for(int i=0;i<n;i++){
        cin>>word[i];
    }
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++)
{
    if(word[i].length()>word[j].length()){
temp=word[i];
word[i]=word[j];
word[j]=temp;
    }
}
}
cout<<"words sorted by length:";
for(int i=0;i<n;i++){
    cout<<word[i]<<endl;
}
return 0;
}