#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "Person.h"

class Student : public Person {
 private:
  int _student_id;
  int _year;
  
 public:
  void set_student_id(int id);
  int get_student_id () const;
  void set_year (int y);
  int get_year () const;
 Student(const std::string& name, int  year, int id) : Person(name), _year(year), _student_id(id) {};

};

#endif
