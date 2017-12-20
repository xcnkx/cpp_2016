#include <iostream>
#include "Person.h"
#include "Student.h"
#include "ForeignStudent.h"

int main(void) {
  ForeignStudent fs("Jack", 2, 1577, "HK");
  std::cout << "Name: " << fs.get_name() << std::endl;
  std::cout << "Country: " << fs.get_country() << std::endl;

  ForeignStudent fs2("James", 4, 15, "Australia");
  // fs2 = fs;
  std::cout << "Name: " << fs2.get_name() << std::endl;
  std::cout << "Country: " << fs2.get_country() << std::endl;

  return 0;
}
