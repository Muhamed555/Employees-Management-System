#include "Department.h"

Department::Department(){
department_name = "";

}

Department::Department(int id, string name){
department_id = id;
department_name = name;
}
void Department::setDepartmentId(int i){
department_id = i;

}

void Department::setDepartmentName(string dm){
department_name = dm;
}



int Department::getDepartmentId(){

return department_id;
}

string Department::getDepartmentName(){

return department_name;
}
