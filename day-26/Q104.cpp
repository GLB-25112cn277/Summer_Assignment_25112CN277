#include<iostream>
using namespace std;
int main(){
    int answer;
    int score=0;
    cout<<"*****QUIZ GAME*****"<<endl;
    cout<<"Q1. What is the capital of India?"<<endl;
    cout<<"1. New Delhi"<<endl;
    cout<<"2. Mumbai"<<endl;
    cout<<"3. Kolkata"<<endl;
    cout<<"4. Chennai"<<endl;
    cout<<"enter your answer:";
    cin>>answer;
if(answer==1)
{
    cout<<"correct answer!"<<endl;
    score++;
}
cout<<"Q2. How many days are there in a week?"<<endl;
cout<<"1. 5"<<endl;
cout<<"2. 6"<<endl;
cout<<"3. 7"<<endl;
cout<<"4. 8"<<endl;
cout<<"enter your answer:";
cin>>answer;
if(answer==3)
{
    cout<<"correct answer!"<<endl;
    score++;
}
cout<<"Q3. What is the largest planet in our solar syatem?"<<endl;
cout<<"1. Earth"<<endl;
cout<<"2. Mars"<<endl;
cout<<"3. Jupiter"<<endl;
cout<<"4. Saturn"<<endl;
cout<<"enter your answer:";
cin>>answer;
if(answer==3)
{
    cout<<"correct answer!"<<endl;
    score++;
}
cout<<"your total score is:"<<score<<endl;
return 0;
}