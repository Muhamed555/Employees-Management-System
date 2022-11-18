#ifndef MEMBER_H
#define MEMBER_H
#include <iostream>
#include "Department.h"

using namespace std;

class Member : public Department
{
   private:
       int id;
       string name;
       string phone;
       string email;
       double payroll;


   public:
       Member(int, string, int, string, string, string, double);
       Member();

       // Getters
       int getID();
       string getName();
       string getPhone();
       string getEmail();
       double getPayroll();

       // Setters
       void setID(int);
       void setName(string);
       void setPhone(string);
       void setEmail(string);
       void setPayroll(double);
       void printDepartment();
       void printInformation();
};

#endif // MEMBER_H
