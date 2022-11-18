#include "Staff.h"

Staff::Staff(){

employees_size = 5;
projects_size = 5;

employees_count = 0;
projects_count = 0;

budgets_size = 5;
budgets_count = 0;

projects = new Project[projects_size];
employees = new Member[employees_size];
}


Staff::~Staff(){

delete [] projects;
delete [] employees;
}



void Staff::addProject(){

if(projects_count < projects_size){

    int id, size_budgets;
    string location;
    double currentCost;
    string manager;
    cout<<"Enter the id of the project: ";
    cin >> id;
    cout<<"Enter the location of the project: ";
    cin>> location;
    cout<<"Enter the currentCost of the project: ";
    cin>>currentCost;
    cout<<"Enter the name of the manager: ";
    cin >> manager;
    cout << "\n >>>>>>> Done! \n \n " << endl;


    Project *p = new Project(id,location, currentCost, manager);
    projects[projects_count++] = *p;


}
}



void Staff::printAllProjects(){
if(projects_count == 0){cout << "\n \t >>>>> Sorry there are no projects to display !" << endl;}
for(int i = 0; i < projects_count; i++){
cout<<"==================================================================" << endl;
cout << "( " << i + 1 << " ) " << "Project id is " << projects[i].getID() << endl;
cout << "( " << i + 1 << " ) " << "Project location is " << projects[i].getLocation() << endl;
cout << "( " << i + 1 << " ) " << "Project current cost is " << projects[i].getCurrentCost() << endl;
cout << "( " << i + 1 << " ) " << "Project manager is " << projects[i].getManager() << "\n" << endl;

projects[i].printBudgets();
cout<<"==================================================================" << endl;

}
if(projects_count == 0) cout << "\n >>>>> There are no projects ! \n" << endl;
}

void Staff::addbudgetXt(){

int id;
cout<<"What is the id of the project ? ";
cin >> id;
int i;
for( i = 0; i < projects_count; i++){
    if(projects[i].getID() == id){
        int budgets_number;
        cout<<"How many budgets do you want to add ? ";
        cin >> budgets_number;
        for(int j = 0; j < budgets_number; j++){
        projects[i].addNewBudget();}


    }
    else if(projects[i].getID() != id)
{ cout<<"\n >>>>>>>>>> Sorry this project doesn't exist! \n " << endl;}

}

}



void Staff::increaseBudget(){
int id;
double budget_amount;
if(budgets_count == 0){cout << "\n \t >>>>> Sorry There are no budgets to increase! " << endl;}

else{
cout << "Please enter the id of the budget: ";
cin >> id;
cout << "Please enter the amount of budget: ";
cin >> budget_amount;
}
int i;
for(i = 0; i < projects_count; i++){

projects[i].isMatched(id,budget_amount);

}

cout << "\n >>>>>>> Done! \n \n " << endl;


}

// ==================================================================================================

void Staff::addEmployee(){

if(employees_count < employees_size){

  int id, id_department;
  string name, name_department, phone, email;
  double payroll;

  cout <<"Please enter the id of the employee: ";
  cin >> id;
  cout << "Please enter the name of the employee: ";
  cin >> name;
  cout << "Please enter the phone of the employee: ";
  cin >> phone;
  cout << "Please enter the email of the employee: ";
  cin >> email;
  cout << "Please enter the salary of the employee: ";
  cin >> payroll;
  cout << "Please enter the ID of the department: ";
  cin >> id_department;
  cout << "Please enter the name of the department: ";
  cin >> name_department;

  cout << "\n >>>>>>> Done! \n \n " << endl;


  Member *m = new Member(id_department, name_department, id, name, phone, email, payroll);
  employees[employees_count++] = *m;


}

}

void Staff::printAllEmployees(){

if(employees_count == 0){cout << "\n \t >>>> There are no employees to display !" << endl;}
else{
for(int i = 0; i < employees_count; i++){

 cout<<"==================================================================" << endl;
 cout<< " (" << i + 1 << ") " <<  "The Id of the employee is " << employees[i].getID() << endl;
 cout<< " (" << i + 1 << ") " <<  "The name of the employee is " << employees[i].getName() << endl;
 cout<< " (" << i + 1 << ") " <<  "The phone of the employee is " << employees[i].getPhone() << endl;
 cout<< " (" << i + 1 << ") " <<  "The email of the employee is " << employees[i].getEmail() << endl;
 cout<< " (" << i + 1 << ") " <<  "The salary of the employee is " << employees[i].getPayroll() << endl;
 cout<< " (" << i + 1 << ") " <<  "The id of the department is " << employees[i].getDepartmentId() << endl;
 cout<< " (" << i + 1 << ") " <<  "The name of the department is " << employees[i].getDepartmentName() << "\n" << endl;

 cout<<"==================================================================" << endl;

}
}

if(employees_count == 0) cout << "\n >>>>> There are no employees ! \n" << endl;

}

void Staff::editEmployee(){
int employee_id;
if(employees_count == 0){cout << "\n \t >>>> There are no employees to edit !" << endl;}

else{
cout << "Please enter the id of the employee: ";
cin >> employee_id;
}
int id, department_id;
string name, phone, email, department_name;
double salary;

for(int i = 0; i < employees_count; i++){
    if(employees[i].getID() == employee_id){

        cout<<"Please add the new id of the employee: ";
        cin >> id;
        employees[i].setID(id);
        cout << "Please enter the new name of the employee: ";
        cin >> name;
        employees[i].setName(name);
        cout <<"Please enter the new phone of the employee: ";
        cin >> phone;
        employees[i].setPhone(phone);
        cout << "Please enter the new email of the employee: ";
        cin >> email;
        employees[i].setEmail(email);
        cout << "Please enter the new salary of the employee: ";
        cin >> salary;
        employees[i].setPayroll(salary);
        cout <<" Please enter the new department id: ";
        cin >> department_id;
        employees[i].setDepartmentId(department_id);
        cout << "Please enter the new department name: ";
        cin >> department_name;
        employees[i].setDepartmentName(department_name);


        cout << "\n >>>>>>> Done! \n \n " << endl;

    }
    else{cout<<">>>> Sorry this employee doesn't exist." << endl;}

}

}




void Staff::searchEmployee(){

int id;
if(employees_count == 0){cout << "\n \t >>>> There are no employees to search !" << endl;}
else{
cout << "Please enter the id of the employee you're looking for: ";
cin >> id;
}
for(int i = 0; i < employees_count; i++){

    if(employees[i].getID() == id){

        employees[i].printInformation(); // Get the information from the member class
    }

}
}


void Staff::deleteEmployee(){

int id;
if(employees_count == 0) cout << "sorry No employees exist! " << endl; // If there are no users
else{
cout << "Please enter the id of the employee you want to delete: ";
cin >> id;
}
bool deleted = false;

for(int i = 0; i < employees_count; i++){
    if(employees[i].getID() == id){

        if(i == employees_count -1){

            employees_count --;


        }else{

         employees[i] = employees[employees_count - 1];
         employees_count--;


        }
     deleted = true;
     break;
    }}

    if(deleted){ cout << "\n>>>>>> Employee has been deleted \n " << endl;}
    else cout << "\n>>>>>> This employee doesn't exist! \n" <<endl;


}


