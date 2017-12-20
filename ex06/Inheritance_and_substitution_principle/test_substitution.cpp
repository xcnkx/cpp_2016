#include <iostream>
#include "Person.h"
#include "Student.h"

void print_information (const Person& p)
{
  // complete here by printing the name of p
  std::cout<<"NAME:"<<p.get_name()<<std::endl;
}

void print_information (const Person* p)
{
  // complete here by printing the name of p
  std::cout<<"NAME:"<<p->get_name()<<std::endl;
}

int main(void)
{
  Student s1("Tanaka", 2, 12345);

  print_information(s1);
  print_information(&s1);

  return 0;
}
