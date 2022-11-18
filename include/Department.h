#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include <iostream>

using namespace std;

class Department
{
   protected:
       int department_id;
       string department_name;

   public:

     Department();
     Department(int, string);
    // Getters
    string getDepartmentName();
    int getDepartmentId();

    // Setters
    void setDepartmentName(string);
    void setDepartmentId(int);
};

#endif // DEPARTMENT_H
