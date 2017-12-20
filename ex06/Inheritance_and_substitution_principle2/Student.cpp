#include "Student.h"
#include <iostream>

void Student::set_student_id(int id){
  _student_id = id;
};
int Student::get_student_id() const{
  return _student_id;
};
void Student::set_year(int y){
  _year = y;
};
int Student::get_year() const{
  return _year;
};
void Student::print() const{
  std::cout<< "Name:"<< _name << " " << "ID:"<< _student_id << " " << "YEAR:"<< _year<< std::endl;
}
 
