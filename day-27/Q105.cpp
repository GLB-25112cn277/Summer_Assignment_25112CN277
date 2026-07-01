#include<iostream>
using namespace std;
int main(){
    int roll[10],n=0,choice,search,i;
    string name[10];
    float marks[10];
    do{
cout<<" *** Student Record Management System ***"<<endl;
cout<<"1. Add Student Record"<<endl;
cout<<"2. Display Students"<<endl;
cout<<"3. Search Student"<<endl;
cout<<"4. Exit"<<endl;
cout<<"Enter your choice: ";
cin>>choice;
if(choice==1){
    cout<<"enter roll number:";
    cin>>roll[n];
    cout<<"enter name:";
    cin>>name[n];
    cout<<"enter marks:";
    cin>>marks[n];
    n++;
    cout<<"record added successfully"<<endl;
}
else if(choice==2)
    {
        if(n==0){
            cout<<"no records found"<<endl;
        }
        else{
            cout<<"sturdent records:"<<endl;
            for(i=0;i<n;i++){
                cout<<"Roll Number: "<<roll[i]<<endl;
                cout<<"Name: "<<name[i]<<endl;
                cout<<"Marks: "<<marks[i]<<endl;
            }
        }
     }
    
        else if(choice==3){
cout<<"enter roll number to search:";
cin>>search;
for(i=0;i<n;i++){
    if(roll[i]==search){
        cout<<"student found!"<<endl;
        cout<<"roll number:"<<roll[i]<<endl;
        cout<<"name:"<<name[i]<<endl;
        cout<<"marks:"<<marks[i]<<endl;
        break;
    }
}
if(i==n){
    cout<<"student not found!"<<endl;
}
}
   else if(choice==4){
    cout<<"thank you!"<<endl;
   }  
else{
    cout<<"invalid choice!"<<endl;
}   
} 
while(choice!=4);
 return 0;
}
