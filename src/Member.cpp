#include "Member.h"
#include <iostream>

using namespace std;

Member::Member(): Department(){

}

Member::Member(int i_department, string n_department, int i, string n, string p, string e, double s) : Department(i_department, n_department){
id = i;
name = n;
phone = p;
email = e;
payroll = s;

}


void Member::printInformation(){


cout<<"==================================================================" << endl;
 cout<<"The Id of the employee is " << id<< endl;
 cout<<"The name of the employee is " << name << endl;
 cout<<"The phone of the employee is " << phone<< endl;
 cout<<"The email of the employee is " << email<< endl;
 cout<<"The salary of the employee is " << payroll<< endl;
 cout<<"The id of the department is " << department_id << endl;
 cout<<"The name of the department is " << department_name<< "\n" << endl;

 cout<<"==================================================================" << endl;



}




// Getters

int Member::getID(){
return id;

}

string Member::getName(){
return name;
}

string Member::getPhone(){
return phone;
}
string Member::getEmail(){

return email;
}

double Member::getPayroll(){
return payroll;
}

// Setters

void  Member::setID(int i){
id = i;
}

void Member::setName(string n){
name  = n;
}

void Member::setEmail(string e){
email = e;
}

void Member::setPhone(string p){
phone = p;
}

void Member::setPayroll(double payroll){
payroll = payroll;
}

