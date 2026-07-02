#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    int totalSeats=50;
    int booked=0;
    int tickets,choice;
    do{
        cout<<"*** TICKET BOOKING SYSTEM ***"<<endl;
        cout<<"1. book tickets"<<endl;
        cout<<"2. cancel tickets"<<endl;
        cout<<"3. check available tickets"<<endl;
        cout<<"4. exit"<<endl;
        cout<<"enter your choice:"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"enter your name:";
            cin.ignore();
            getline(cin,name);
            cout<<"enter number of tickets:";
            cin>>tickets;
            if(booked+tickets<=totalSeats){
                booked=booked+tickets;
                cout<<"ticket booked successfully!"<<endl;
            }
            else{
                cout<<"not enough seats available!"<<endl;
            }
            break;
            case 2:
            cout<<"enter number of tickets to cancel:";
            cin>>tickets;
            if(tickets<=booked)
            {
                booked=booked-tickets;
                cout<<"ticket cancelled successfully!"<<endl;
            }
            else{
                cout<<"invalid number of tickets!"<<endl;
            }
            break;
            case 3:
            cout<<"total seats:"<<totalSeats;
            cout<<"booked seats:"<<booked;
            cout<<"available seats:"<<totalSeats-booked;
            break;
            case 4:
            cout<<"thank you!";
            break;
            default:
            cout<<"invalid choice!"<<endl;
        }
    }
    while(choice!=4);
return 0;
}