#ifndef FOREIGN_STUDENT_H
#define FOREIGN_STUDENT_H

#include <string>
#include "Student.h"

class ForeignStudent : public Student{
 private:
  std::string country;

 public:
  std::string get_country() const;
  void set_country(const std::string& c);

  //constructor
 ForeignStudent(const std::string& name, int year, int student_id, const std::string& country) : Student(name,year,student_id){
    ForeignStudent::country = country;
      };
};

#endif
