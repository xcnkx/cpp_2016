// test_access.cpp
#include <iostream>
#include "Person.h"
#include "Student.h"

int main(void) {
  Student s("Tanaka", 2, 12345);
  s.print();
  return 0;
}
