#ifndef STAFF_H
#define STAFF_H
#include <iostream>
#include "Member.h"
#include "Project.h"
#include "Budget.h"

using namespace std;

class Staff
{

private:
    Member *employees;
    Project *projects;

    int employees_size;
    int projects_size;

    int employees_count;
    int projects_count;

    int budgets_size;
    int budgets_count;

public:
    Staff();
    ~Staff();
    void addEmployee();
    void editEmployee();
    void deleteEmployee();
    void printPayroll();
    void addProject();
    void searchEmployee();
    void printAllProjects();
    void addbudgetXt();
    void printBudgets();
    void increaseBudget();
    void printAllEmployees();



};

#endif // STAFF_H
