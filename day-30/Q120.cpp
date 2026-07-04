#include<iostream>
#include<string>
using namespace std;
const int MAX=50;
string website[MAX];
string username[MAX];
string password[MAX];
int count=0;
void addPassword(){
    if(count==MAX){
        cout<<"storage full!"<<endl;
        return;
    }
    cout<<"enter website:";
    cin>>website[count];
    cout<<"enter username:";
    cin>>username[count];
    cout<<"enter password:";
    cin>>password[count];
    count++;
    cout<<"password saved successfully!"<<endl;
}
void viewPassword()
{
    if(count==0){
        cout<<"no password saved"<<endl;
        return;
    }
    cout<<"saved passwords:"<<endl;
    for(int i=0;i<count;i++){
        cout<<"website:"<<website[i]<<endl;
        cout<<"username:"<<username[i]<<endl;
        cout<<"password:"<<password[i]<<endl;
    }
}
void searchPassword()
{
    string site;
    cout<<"enter website to search:";
    cin>>site;
    for(int i=0;i<count;i++){
        if(website[i]==site){
        cout<<"website:"<<website[i]<<endl;
        cout<<"username:"<<username[i]<<endl;
        cout<<"password:"<<password[i]<<endl;
        return;
    }
}
cout<<"website not found!"<<endl;
}
void updatePassword()
{
    string site;
    cout<<"enter website:";
    cin>>site;
    for(int i=0;i<count;i++)
    {
        if(website[i]==site){
            cout<<"enter new password:";
            cin>>password[i];
            cout<<"password updated successfully!"<<endl;
            return;
        }
    }
    cout<<"website not found!"<<endl;
}
void deletePassword(){
    string site;
    cout<<"enter website:";
    cin>>site;
    for(int i=0;i<count;i++){
        if(website[i]==site){
            for(int j=i;j<count-1;j++){
                website[j]=website[j+1];
                username[j]=username[j+1];
                password[j]=password[j+1];
            }
            count--;
            cout<<"password deleted successfully!"<<endl;
            return;
        }
    }
    cout<<"website not found!"<<endl;
}
int main(){
    int choice;
    do{
        cout<<"*** PASSWORD MANAGER ***"<<endl;
        cout<<"1. add password"<<endl;
        cout<<"2. view password"<<endl;
        cout<<"3. search password"<<endl;
        cout<<"4. update password"<<endl;
        cout<<"5. delete password"<<endl;
        cout<<"6. exit"<<endl;
        cout<<"enter choice:"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
            addPassword();
            break;
            case 2:
            viewPassword();
            break;
            case 3:
            searchPassword();
            break;
            case 4:
           updatePassword();
           break;
           case 5:
           deletePassword();
           break;
           case 6:
           cout<<"thank you!"<<endl;
           break;
           default:
           cout<<"invalid choice!"<<endl;
        }
    }
    while(choice!=6);
    return 0;
}
