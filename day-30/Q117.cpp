#include<iostream>
#include<string>
using namespace std;
int main(){
    const int SIZE=10;
    int roll[SIZE];
    string name[SIZE];
    float marks[SIZE];
    int n=0,choice,searchRoll;
    do{
        cout<<"*** STUDENT RECORD SYSTEM ***"<<endl;
        cout<<"1. add student"<<endl;
        cout<<"2. display student"<<endl;
        cout<<"3. search student"<<endl;
        cout<<"4. exit"<<endl;
        cout<<" enter your choice:"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
            if(n<SIZE){
                cout<<"enter roll number:";
                cin>>roll[n];
                cout<<"enter name:";
                cin>>name[n];
                cout<<"enter marks:";
                cin>>marks[n];
                n++;
                cout<<"student record added successfully!"<<endl;
            }
            else{
                cout<<"record is full!"<<endl;
            }
            break;
            case 2:
            if(n==0){
                cout<<"no records found!"<<endl;
            }
            else{
                for(int i=0;i<n;i++){
              cout<<"roll:"<<roll[i]<<endl;
              cout<<"name:"<<name[i]<<endl;
              cout<<"marks:"<<marks[i]<<endl;
                }
            }
            break;
            case 3:
            cout<<"enter roll number to search:";
            cin>>searchRoll;
            for(int i=0;i<n;i++){
                if(roll[i]==searchRoll){
                    cout<<"student found!"<<endl;
                    cout<<"roll number:"<<roll[i]<<endl;
                    cout<<"name:"<<name[i]<<endl;
                    cout<<"marks:"<<marks[i]<<endl;
                    break;
                }
                if(i==n-1)
{
    cout<<"student not found!"<<endl;
}      
    }
    break;
    case 4:
    cout<<"thank you!"<<endl;
    break;
    default:
    cout<<"invalid choice!"<<endl;
        }
    }
    while(choice!=4);
    return 0;
}