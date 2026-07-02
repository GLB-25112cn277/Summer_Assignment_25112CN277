#include<iostream>
using namespace std;
int main(){
    string title[100];
    int id[100];
    bool issued[100];
    int n=0,choice,searchId;
    char ch;
    cout<<"*** LIBRARY MANAGEMENT SYSTEM ***"<<endl;
    cout<<"1. add a book"<<endl;
    cout<<"2. issue a book"<<endl;
    cout<<"3. search a book"<<endl;
    cout<<"4. display all books"<<endl;
    cout<<"5. return a book"<<endl;
    cout<<"6. exit"<<endl;
    cout<<"enter your choice:"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
        cout<<"enter book ID:"<<endl;
        cin>>id[n];
        cin.ignore();
        cout<<"enter book title:"<<endl;
        getline(cin,title[n]);
        issued[n]=false;
        n++;
        cout<<"book added successfully"<<endl;
        break;
        case 2:
        if(n==0){
            cout<<"no books available"<<endl;
        }
        else{
            cout<<"book list:"<<endl;
            for(int i=0;i<n;i++){
                cout<<"ID: "<<id[i]<<" Title: "<<title[i]<<"status:"<<endl;
                if(issued[i])
                cout<<"issued"<<endl;
                else
                cout<<"available"<<endl;
            }
        }
        break;
        case 3:
        cout<<"enter book ID to search:"<<endl;
        cin>>searchId;
        for(int i=0;i<n;i++){
            if(id[i]==searchId){
                cout<<"book found!"<<endl;
                cout<<"title:"<<title[i]<<endl;
                cout<<"status:";
                if(issued[i])
                cout<<"issued"<<endl;
                else
                cout<<"available"<<endl;
            break;
            }
            if(i==n-1)
                cout<<"book not found!"<<endl;
        }
        break;
        case 4:
        cout<<"enter book ID to issue:"<<endl;
        cin>>searchId;
        for(int i=0;i<n;i++){
            if(id[i]==searchId){
                if(!issued[i]){
                    issued[i]=true;
                    cout<<"book issued successfully"<<endl;
                }
                else{
                    cout<<"book is already issued"<<endl;
                }
                break;
            }
            if(i==n-1)
            cout<<"book not found!"<<endl;
        }
        break;
        case 5:
        cout<<"enter book ID to return:"<<endl;
        cin>>searchId;
        for(int i=0;i<n;i++){
            if(id[i]==searchId){
                if(issued[i])
                {
                    issued[i]=false;
                    cout<<"book returned successfully!"<<endl;
                }
                else{
                    cout<<"book was not issued"<<endl;
                }
                break;
            }
            if(i==n-1)
            cout<<"book not found!"<<endl;
        }
        break;
        case 6:
        cout<<"thank you!"<<endl;
        break;
        default:
        cout<<"invalid choice!"<<endl;
    }while(choice!=6);
    return 0;
}