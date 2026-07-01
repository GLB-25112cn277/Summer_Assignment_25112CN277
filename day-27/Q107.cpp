#include <iostream>
using namespace std;

int main()
{
    int id[10], n = 0, choice, search, i;
    string name[10];
    float salary[10];

    do
    {
        cout << "*** SALARY MANAGEMENT SYSTEM ***"<<endl;
        cout << "1. Add Employee"<<endl;
        cout << "2. Display Records"<<endl;;
        cout << "3. Search Employee"<<endl;;
        cout << "4. Exit"<<endl;
        cout << "Enter your choice: "<<endl;;
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Employee ID: "<<endl;
            cin >> id[n];

            cout << "Enter Employee Name: "<<endl;
            cin >> name[n];

            cout << "Enter Salary: "<<endl;
            cin >> salary[n];

            n++;

            cout << "Record Added Successfully!"<<endl;
        }
        else if (choice == 2)
        {
            if (n == 0)
            {
                cout << "No Records Found."<<endl;
            }
            else
            {
                cout << "Employee Salary Records:"<<endl;

                for (i = 0; i < n; i++)
                {
                    cout << "Employee ID: " << id[i]<<endl;
                    cout << "Name: " << name[i]<<endl;
                    cout << "Salary: " << salary[i]<<endl;
                }
            }
        }
        else if (choice == 3)
        {
            cout << "Enter Employee ID to Search: "<<endl;
            cin >> search;

            for (i = 0; i < n; i++)
            {
                if (id[i] == search)
                {
                    cout << "Employee Found!"<<endl;
                    cout << "Employee ID: " << id[i]<<endl;
                    cout << "Name: " << name[i]<<endl;
                    cout << "Salary: " << salary[i] << endl;
                    break;
                }
            }
if (i == n)
            {
                cout << "Employee Not Found."<<endl;
            }
        }
        else if (choice == 4)
        {
            cout << "Thank You!"<<endl;
        }
        else
        {
            cout << "Invalid Choice!"<<endl;
        }

    } while (choice != 4);

    return 0;
}