#include<iostream>
using namespace std;
const int MAX = 50;

int empID[MAX];
string empName[MAX];
float empSalary[MAX];
int total = 0;
void addEmployee()
{
    cout << "Enter Employee ID: "<<endl;
    cin >> empID[total];
    cout << "Enter Employee Name: ";
    cin >> empName[total];
    cout << "Enter Employee Salary: ";
    cin >> empSalary[total];
     total++;
        cout << "Employee Added Successfully!"<<endl;
    }
    void displayEmployee()
    {
        if (total == 0)
        {
            cout << "No Employee Records Found!"<<endl;
            return;
        }
        cout << "Employee Records:"<<endl;
        for(int i=0;i<total;i++){
            cout<<"ID:"<<empID[i]<<endl;
            cout<<"name:"<<empName[i]<<endl;
            cout<<"salary:"<<empSalary[i]<<endl;
        }
    }
    void searchEmployee()
    {
        int id;
        cout << "Enter Employee ID to Search: "<<endl;
        cin >> id;
        for (int i = 0; i < total; i++)
        {
            if (empID[i] == id)
            {
                cout << "Employee Found!"<<endl;
                cout << "ID: " << empID[i] << endl;
                cout << "Name: " << empName[i] << endl;
                cout << "Salary: " << empSalary[i] << endl;
                return;
            }
        }
        cout << "Employee Not Found!"<<endl;
    }
        void updateSalary()
        {
            int id;
            cout << "Enter Employee ID: "<<endl;
            cin >> id;
            for (int i = 0; i < total; i++)
            {
                if (empID[i] == id)
                {
                    cout << "Enter New Salary: ";
                    cin >> empSalary[i];
        
                    cout << "Salary Updated Successfully!"<<endl;
                    return;
                }
            }
            cout << "Employee Not Found!"<<endl;
        }
            void deleteEmployee()
            {
                int id;
                cout << "Enter Employee ID to Delete: "<<endl;
                cin >> id;
                for (int i = 0; i < total; i++)
                {
                    if (empID[i] == id)
                    {
                        for (int j = i; j < total - 1; j++)
                        {
                            empID[j] = empID[j + 1];
                            empName[j] = empName[j + 1];
                            empSalary[j] = empSalary[j + 1];
                        }
            
                        total--;
                        cout << "Employee Deleted Successfully!"<<endl;
                        return;
                    }
                }
                cout << "Employee Not Found!"<<endl;
            }
            int main()
            {
                int choice;
            
                do
                {
                    cout << "*** Employee Management System ***"<<endl;
                    cout << "1. Add Employee"<<endl;
                    cout << "2. Display Employees"<<endl;
                    cout << "3. Search Employee"<<endl;
                    cout << "4. Update Salary"<<endl;
                    cout << "5. Delete Employee"<<endl;
                    cout << "6. Exit"<<endl;
                    cout << "Enter Your Choice: "<<endl;
                    cin >> choice;
                    switch (choice)
                    {
                        case 1:
                            addEmployee();
                            break;
                        case 2:
                        displayEmployee();
     break;
      case 3:
      searchEmployee();
      break;
   case 4:
       updateSalary();
          break;
           case 5:
           deleteEmployee();
            break;
         case 6:
            cout << "Thank You!"<<endl;
            break;
          default:
           cout << "Invalid Choice!"<<endl;
            }
       } while (choice != 6);
       return 0;
    }