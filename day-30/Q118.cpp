#include<iostream>
#include<string>
using namespace std;
int main(){
    const int SIZE=10;
    string title[SIZE];
    string author[SIZE];
    int id[SIZE];
    bool issued[SIZE];
    int n=0,choice,searchId;
    do{
        cout<<" *** MINI LIBRARY MANAGEMENT SYSTEM ***"<<endl;
        cout<<"1. add book"<<endl;
        cout<<"2. display book"<<endl;
        cout<<"3. search book"<<endl;
        cout<<"4. issue book"<<endl;
        cout<<"5. exit"<<endl;
        cout<<"enter your choice:";
        cin>>choice;
        switch (choice)
        {
        case 1:
        if(n<SIZE){
            cout<<"enter book Id:";
            cin>>id[n];
            cout<<"enter book title:";
            cin>>title[n];
            cout<<"enter author name:";
            cin>>author[n];
            issued[n]=false;
            n++;
            cout<<"book added successfully!"<<endl;
        }
        else{
            cout<<"library is full!"<<endl;
        }
        break;
    case 2:
    if(n==0){
        cout<<"no boks available!"<<endl;
    }
    else{
        for(int i=0;i<n;i++){
            cout<<"ID:"<<id[i]<<endl;
            cout<<"title:"<<title[i]<<endl;
            cout<<"author:"<<author[i]<<endl;
            if(issued[i])
            cout<<"issued"<<endl;
            else
            cout<<"available"<<endl;
        }
    }
    break;
    case 3:
    cout<<"enter book ID to search:";
    cin>>searchId;
    for(int i=0;i<n;i++){
        if(id[i]==searchId)
        {
            cout<<"book found!"<<endl;
            cout<<"ID:"<<id[i]<<endl;
            cout<<"title:"<<title[i]<<endl;
            cout<<"author:"<<author[i]<<endl;
            if(issued[i])
            cout<<"status:issued"<<endl;
            else
            cout<<"status:available"<<endl;
            break;
        }
        if(i==n-1)
        cout<<"book not found!"<<endl;
    }
    break;
    case 4:
    cout<<"enter book Id to issue:";
    cin>>searchId;
    for(int i=0;i<n;i++){
        if(id[i]==searchId){
            if(!issued[i]){
issued[i]=true;
cout<<"book issued successfully!"<<endl;
            }
            else{
                cout<<"book is already issued!"<<endl;
            }
            break;
        }
        if(i==n-1)
        cout<<"book not found!"<<endl;
    }
    break;
    case 5:
    cout<<"thank you!"<<endl;
    break;
    default:
    cout<<"invalid choice!"<<endl;
        }
    }while(choice!=5);
    return 0;
}