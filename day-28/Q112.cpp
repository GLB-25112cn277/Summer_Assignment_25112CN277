#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name[100], phone[100];
    int n = 0;
    int choice;
    string searchName;

    do
    {
        cout << "*** CONTACT MANAGEMENT SYSTEM ***"<<endl;
        cout << "1. Add Contact"<<endl;
        cout << "2. Display Contacts"<<endl;
        cout << "3. Search Contact"<<endl;
        cout << "4. Exit"<<endl;
        cout << "Enter your choice: "<<endl;
        cin >> choice;
 switch(choice)
        {
            case 1:
                cout << "Enter Name: ";
                cin.ignore();
                getline(cin, name[n]);

                cout << "Enter Phone Number: ";
                getline(cin, phone[n]);
                n++;
                cout << "Contact Added Successfully!<<endl";
                break;
                case 2:
                if(n==0){
                    cout<<"no contacts avaialable!"<<endl;
                }
                else{
                    cout<<" contact list"<<endl;
                    for(int i=0;i<n;i++){
                        cout<<"name:"<<name[i]<<endl;
                        cout<<"phone:"<<phone[i]<<endl;
                    }
                }
                break;
                case 3:
                cout<<"enter name to search:"<<endl;
                cin.ignore();
                getline(cin,searchName);

for(int i = 0; i < n; i++)
                {
                    if(name[i] == searchName)
                    {
                        cout << "Contact Found!"<<endl;
                        cout << "Name : " << name[i] << endl;
                        cout << "Phone: " << phone[i] << endl;
                        break;
                    }

                    if(i == n - 1)
                    {
                        cout << "Contact Not Found!"<<endl;
                    }
                }
                break;

            case 4:
                cout << "Thank You!"<<endl;
                break;

            default:
                cout << "Invalid Choice!"<<endl;
        }
    }while(choice!=4);
    return 0;
}