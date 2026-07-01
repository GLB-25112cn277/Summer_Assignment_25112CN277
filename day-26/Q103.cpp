#include<iostream>
using namespace std;
int main(){
    int choice;
    float balance=5000,amount;
    cout<<"welcome to the bank"<<endl;
    cout<<"1. check balance"<<endl;
cout<<"2. deposit money"<<endl;
cout<<"3. withdraw money"<<endl;
cout<<"4. exit"<<endl;
cout<<"enter your choice: ";
cin>>choice;
switch(choice){
    case 1:
    cout<<"your balance="<<balance<<endl;
    break;
    case 2:
    cout<<"enter amount to deposit:"<<endl;
    cin>>amount;
    balance+=amount;
    cout<<"updated balance="<<balance<<endl;
    break;
    case 3:
    cout<<"enter amount to withdraw:"<<endl; 
    cin>>amount;
    if(amount<=balance)
    {
        balance=balance-amount;
        cout<<"please collect your cash"<<endl;
        cout<<"remaining balance="<<balance<<endl;
    }
    else
    {
        cout<<"insufficient balance"<<endl;
    }
    break;
    case 4:
    cout<<"thank you for using our services"<<endl;
    break;
    default:
    cout<<"invalid choice!"<<endl;
}
return 0;
}