#include<iostream>
using namespace std;
int main(){
    string name;
    int accNo;
    float balance=0,amount;
    int choice;
    do{
        cout<<"*** BANK ACCOUNT SYSTEM ***"<<endl;
        cout<<"1. create account"<<endl;
        cout<<"2. deposit money"<<endl;
        cout<<"3. withdraw money"<<endl;
        cout<<"4. check balance"<<endl;
        cout<<"5. exit"<<endl;
        cout<<"enter your choice:"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"enter account holder name:"<<endl;
            cin.ignore();
            getline(cin,name);
            cout<<"enter account number:"<<endl;
            cin>>accNo;
            balance=0;
            cout<<"account created successfully!"<<endl;
            break;
            case 2:
            cout<<"enter amount to deposit:"<<endl;
            cin>>amount;
                balance=balance+amount;
                cout<<"amount deposit successfully!"<<endl;
                break;
                case 3:
                cout<<"enter amount to withdraw:"<<endl;
                cin>>amount;
                if(amount<=balance){
                    balance=balance-amount;
                    cout<<"amount withdraw successfully!"<<endl;
                }
                else{
                    cout<<"insufficient balance!"<<endl;
                }
                break;
                case 4:
                cout<<"account holder name:"<<name<<endl;
                cout<<"account number:"<<accNo<<endl;
                cout<<"account balance:"<<balance<<endl;
                break;
                case 5:
                cout<<"thank you!"<<endl;
                break;
                default:
                cout<<"invalid choice!"<<endl;
            }
            }
            while(choice!=5);
            return 0;
}