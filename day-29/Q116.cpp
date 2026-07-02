#include <iostream>
#include <string>
using namespace std;

int main()
{
    int id[100], quantity[100];
    string name[100];
    int n = 0, choice, searchId;

    do
    {
        cout << "*** INVENTARY MANAGEMENT SYSTEM ***"<<endl;
        cout << "1. Add Product"<<endl;
        cout << "2. Display Products"<<endl;
        cout << "3. Search Product"<<endl;
        cout << "4. Update Quantity"<<endl;
        cout << "5. Exit"<<endl;
        cout << "Enter your choice: "<<endl;
        cin >> choice; 
        switch(choice)
           {
         case 1:
          cout << "Enter Product ID: ";
         cin >> id[n]; 
         cin.ignore();
          cout << "Enter Product Name: ";
           getline(cin, name[n]);
          cout << "Enter Quantity: ";
           cin >> quantity[n];
           n++;
           cout << "Product Added Successfully!"<<endl;
             break;
        case 2:
          if(n == 0)
         {
        cout << "No Products Available!"<<endl;
       }
        else
           {
          cout << " Product List"<<endl;
           for(int i = 0; i < n; i++)
         {
          cout << "ID: " << id[i] << endl;
        cout << "Name: " << name[i] << endl;
        cout << "Quantity: " << quantity[i] << endl;
           }
         }
       break;     
         case 3:
         cout << "Enter Product ID to Search: ";
          cin >> searchId;
         for(int i = 0; i < n; i++)
        {
          if(id[i] == searchId)
          {
          cout << "Product Found!"<<endl;
          cout << "ID: " << id[i] << endl;
         cout << "Name: " << name[i] << endl;
         cout << "Quantity: " << quantity[i] << endl;
          break;
         }
        if(i == n - 1)
        {
         cout << "Product Not Found!"<<endl;
          }
          }
        break;
       case 4:
        cout << "Enter Product ID: ";
        cin >> searchId;
         for(int i = 0; i < n; i++)
              {
                if(id[i] == searchId)
              {
              cout << "Enter New Quantity: ";
             cin >> quantity[i];
             cout << "Quantity Updated Successfully!"<<endl;
              break;
             }                   
            if(i == n - 1)
           {
             cout << "Product Not Found!"<<endl;
          }
         }
           break;                         
         case 5:
         cout << "Thank You!"<<endl;
         break;                  
        default:
      cout << "Invalid Choice!"<<endl;
      }            
     } while(choice != 5);                          
     return 0;
  }