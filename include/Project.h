#ifndef PROJECT_H
#define PROJECT_H
#include <iostream>
#include "Budget.h"
#include <string>

using namespace std;


class Project
{
private:
    int id;
    string location;
    double currentCost;
    string manager;
    Budget *budgets;

    int budgets_size;
    int budgets_count;
public:
    Project();
    Project(int, string, double, string);
    ~Project();
    void printBudgets();
    void addNewBudget();
    void increaseBudget(double);

    // Getters
    int getID();
    string getLocation();
    double getCurrentCost();
    string getManager();
    int isMatched(int,double);



};

#endif // PROJECT_H
