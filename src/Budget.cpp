#include "Budget.h"

Budget::Budget()
{
    value = 0;
}

Budget::Budget(double v, int i){

value = v;
id = i;
};

void Budget::increaseBudget(double v_incease){

value = value + v_incease;
};

void Budget::setValue(double set_v){

value = set_v;
};

void Budget::setId(int set_i){

id = set_i;

};

double Budget::getValue(){

return value;
}

int Budget::getId(){

return id;
}

void Budget::print(){

cout <<" Amount of the budget is " << value << "\t and Id of the budget is " << id;
}
