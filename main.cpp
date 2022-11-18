#include <iostream>
#include "Project.h"
#include "Staff.h"
using namespace std;


int main()
{
Project p;
Staff s;
cout<<"\n \t \t Welcome to The Employees System ! \n" << endl;
cout << "\t \t \t Made by MohamedElsayed :) \n" << endl;

bool keep = true;
while (keep){
int answer;
cout << "\t  (1) Add a new project" << endl;
cout << "\t  (2) Display all projects" << endl;
cout << "\t  (3) Add a budget into an existing project" << endl;
cout << "\t  (4) Increase the budget of a certain project" << endl;
cout << "\t  (5) Add an employee" << endl;
cout << "\t  (6) Print all employees" << endl;
cout << "\t  (7) Edit an employee" << endl;
cout << "\t  (8) Search an employee" << endl;
cout << "\t  (9) Delete an employee" << endl;
cout << "\t  (10) Exit the system\n" << endl;
cout<<"Your answer: ";
cin >> answer;

switch(answer){

case 1:
    s.addProject();
    break;
case 2:
    s.printAllProjects();
    break;
case 3:
    s.addbudgetXt();
    break;
case 4:
    s.increaseBudget();
    break;
case 5:
    s.addEmployee();
    break;
case 6:
    s.printAllEmployees();
    break;
case 7:
    s.editEmployee();
    break;
case 8:
    s.searchEmployee();
    break;
case 9:
    s.deleteEmployee();
    break;
case 10:
    keep = false;
    cout << "\n \t \t >> Thank you For using our program :) << " << endl;
    break;



}}




return 0;
}
