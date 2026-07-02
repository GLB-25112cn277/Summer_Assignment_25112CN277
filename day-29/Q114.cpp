#include <iostream>
using namespace std;

int main()
{
    int a[100], n;
    int choice, sum = 0;

    do
    {
        cout << "*** MENU-DRIVEN ARRAY OPERATION SYSTEM ***"<<endl;
        cout << "1. Input Array"<<endl;
        cout << "2. Display Array"<<endl;
        cout << "3. Find Largest Element"<<endl;
        cout << "4. Find Smallest Element"<<endl;
        cout << "5. Find Sum and Average"<<endl;
        cout << "6. Exit"<<endl;
        cout << "Enter your choice: "<<endl;
        cin >> choice;
switch(choice)
        {
            case 1:
                cout << "Enter number of elements: ";
                cin >> n;

                cout << "Enter array elements:"<<endl;
                for(int i = 0; i < n; i++)
                {
                    cin >> a[i];
                }
                break;
            case 2:
                cout << "Array Elements: ";
                for(int i = 0; i < n; i++)
                {
                    cout << a[i] << " ";
                }
                cout << endl;
                break;
                case 3:
              {
            int largest = a[0];
           for(int i = 1; i < n; i++)
          {
             if(a[i] > largest)
            largest = a[i];
           }
         cout << "Largest Element = " << largest << endl;
         break;
       }      
        case 4:
      {
      int smallest = a[0];
      for(int i = 1; i < n; i++)
       {
      if(a[i] < smallest)
     smallest = a[i];
      }
    cout << "Smallest Element = " << smallest << endl;
    break;
    }case 5:
      sum = 0;
      for(int i = 0; i < n; i++)
       {
     sum += a[i];
      }
    
      cout << "Sum = " << sum << endl;
       cout << "Average = " << (float)sum / n << endl;
       break;
        case 6:
         cout << "Thank You!" << endl;
         break;
       default:
       cout << "Invalid Choice!" << endl;
       }
    
        } while(choice != 6);
      return 0;
    }