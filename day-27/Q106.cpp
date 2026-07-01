#include<iostream>
using namespace std;
int main(){
    int id[10],n=0,choice,search,i;
    string name[10],department[10];
    float salary[10];
    do{
        cout<<"*** EMPLOYEE RECORD MANAGEMENT SYSTEM ***"<<endl;
        cout<<"1.add employee:"<<endl;
        cout<<"2.display employee:"<<endl;
        cout<<"3.search employee:"<<endl;
        cout<<"4.exit:"<<endl;
        cout<<"enter your choice:"<<endl;
        cin>>choice;
        if(choice==1){
            cout<<"enter employee id:"<<endl;
            cin>>id[n];
            cout<<"enter employee name:"<<endl;
            cin>>name[n];
            cout<<"enter employee department:"<<endl;
            cin>>department[n];
            cout<<"enter employee salary:"<<endl;
            cin>>salary[n];
            n++;
            cout<<"record added successfully"<<endl;
        }
        else if(choice==2){
            if(n==0){
                cout<<"no employee records found"<<endl;
            }
            else{
                cout<<"employee records:"<<endl;
                for(int i=0;i<n;i++){
                    cout<<"id: "<<id[i]<<endl;
                    cout<<"name: "<<name[i]<<endl;
                    cout<<"department: "<<department[i]<<endl;
                    cout<<"salary: "<<salary[i]<<endl;
                }
            }
        }
    else if(choice==3){
        cout<<"enter employee id to search:"<<endl;
    cin>>search;
    for(i=0;i<n;i++){
        if(id[i]==search){
            cout<<"employee found!"<<endl;
            cout<<"id:"<<id[i]<<endl;
            cout<<"name:"<<name[i]<<endl;
            cout<<"department:"<<department[i]<<endl;
            cout<<"salary:"<<salary[i]<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"employee notfound!"<<endl;
    }
    }
    else if(choice==4){
        cout<<"thank you!"<<endl;
    }
    else{
        cout<<"invalid choice!"<<endl;
    }
}while(choice!=4);
return 0;
}