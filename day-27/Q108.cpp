#include<iostream>
using namespace std;
int main(){
    string name;
    int roll;
    int m1,m2,m3,m4,m5;
    int total;
    float percentage;
    char grade;
    cout<<"*** MARKSHEET GENETRATION SYSTEM ***"<<endl;
    cout<<"enter student name:"<<endl;
    cin>>name;
    cout<<"enter roll number:"<<endl;
    cin>>roll;
    cout<<"enter marks of 5 subjects:"<<endl;
    cin>>m1>>m2>>m3>>m4>>m5;
    total=m1+m2+m3+m4+m5;
    percentage=total/5.0;
    if(percentage>=90){
        grade='A';
    }
    else if(percentage>=80){
        grade='B';
    }
    else if(percentage>=70){
        grade='C';
    }
    else if(percentage>=60){
        grade='D';
    }
    else{
        grade='F';
    }
    cout<<"*** MARKSHEET ***"<<endl;
    cout<<"student name: "<<name<<endl;
    cout<<"roll number: "<<roll<<endl;
    cout<<"total marks: "<<total<<endl;
    cout<<"percentage: "<<percentage<<endl;
    cout<<"grade: "<<grade<<endl;
    return 0;
}