#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    int choice;
    do{
        cout<<"*** MENU-DRIVEN STRING OPERATIONS ***"<<endl;
        cout<<"1. input string"<<endl;
        cout<<"2. display string"<<endl;
        cout<<"3. find length"<<endl;
        cout<<"4. reverse string"<<endl;
        cout<<"5. convert to uppercase"<<endl;
        cout<<"6. exit"<<endl;
        cout<<"enter your choice:"<<endl;
        cin>>choice;
        cin.ignore();
        switch(choice){
            case 1:
            cout<<"enter a string:"<<endl;
            getline(cin,str);
            break;
            case 2:
            cout<<"string: "<<str<<endl;
            break;
            case 3:
            cout<<"length= "<<str.length()<<endl;
            break;
            case 4:
            {
                string rev="";
                for(int i=str.length()-1;i>=0;i--){
                    rev=rev+str[i];
                }
                cout<<"reversed string:"<<rev<<endl;
            break;      
          }
          case 5:
          {
            string upper=str;
            for(int i=0;i<upper.length();i++){
                if(upper[i]>='a'&& upper[i]<='z'){
                    upper[i]=upper[i]-32;
                }
            }
            cout<<"uppercase string:"<<upper<<endl;
            break;
          }
          case 6:
          cout<<"thank you!"<<endl;
          break;
          default:
          cout<<"invalid choice!"<<endl;
        }
    }while(choice!=6);
    return 0;
}