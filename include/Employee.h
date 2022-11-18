#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>

using namespace std;

class Employee
{
   private:
       string social_security_number;
   public:
    Employee(string);
    void setScNum(string);
    string getScNum();
};

#endif // EMPLOYEE_H
