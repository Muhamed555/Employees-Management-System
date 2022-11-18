#ifndef BUDGET_H
#define BUDGET_H
#include <iostream>

using namespace std;


class Budget
{
private:
    double value;
    int id;
public:

    Budget();
    Budget(double, int);
    void increaseBudget(double);
    void print();

    // Setters
    void setValue(double);
    void setId(int);

    // Getters

    double getValue();
    int getId();

};

#endif // BUDGET_H
