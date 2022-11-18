#include "Project.h"
#include <string>
#include <iostream>
using namespace std;

Project::Project()
{

budgets_size = 5;
budgets_count = 0;
location = " ";
currentCost = 0;
manager = "";
id = 0;


budgets = new Budget[budgets_size];

}

Project::Project(int i,string loc, double current, string man)
{
    id = i;
    location = loc;
    currentCost = current;
    manager = man;
    budgets_size = 5;
    budgets_count = 0;

    budgets = new Budget[budgets_size];
}

Project::~Project(){
delete [] budgets;
}

void Project::addNewBudget(){

if(budgets_count < budgets_size){

    int id;
    double value;
    cout<<"=========================================" << endl;
    cout << "Please enter the budget of the project: ";
    cin >> value;

    cout<< "Pleas enter the id of the budget: ";
    cin >> id;
    cout<<"=========================================" << endl;

    Budget *b = new Budget(value, id);

    budgets[budgets_count++] = *b;
}


}

void Project::printBudgets(){

for(int i = 0; i < budgets_count; i++){
    cout << "The id of the budget is " << budgets[i].getId() << endl;
    cout << "The amount of the budget is " << budgets[i].getValue() << endl;
    cout << "==========================" << endl;
}}

int Project::getID(){

return id;
};




string Project::getLocation(){

return location;

}

string Project::getManager(){

return manager;

}

double Project::getCurrentCost(){

return currentCost;
}



int Project::isMatched(int k, double a){

for(int i = 0; i < budgets_count; i++){

    if( budgets[i].getId() == k){

        budgets[i].increaseBudget(a);

}
  else if(budgets[i].getId() != k){

    return false ;
  }}

}






