#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
public:
 Person(const std::string& n) : _name(n) {}

 void set_name(const std::string& s) {
  _name = s;
 }

 std::string get_name() const { 
  return _name; 
 }

private:
 std::string _name;
};

#endif // PERSON_H
