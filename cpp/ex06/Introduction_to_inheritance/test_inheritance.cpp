// test_inheritance.cpp
#include <iostream>
#include "Person.h"
#include "Student.h"

int main(void) {
  Student s("Tanaka", 2, 12345);
  std::cout << "Student's name: " << s.get_name() << std::endl;
  std::cout << "Student's id: " << s.get_student_id() << std::endl;
  return 0;
}
