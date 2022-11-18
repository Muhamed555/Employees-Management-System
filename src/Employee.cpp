#include "Employee.h"

Employee::Employee(string sc)
{
    social_security_number = sc;
}

void Employee::setScNum(string scNum){

social_security_number = scNum;

}

string Employee::getScNum(){

return social_security_number;
}
