#include "ForeignStudent.h"

std::string ForeignStudent::get_country() const{
  return country;
};
void ForeignStudent::set_country(const std::string& c){
  country = c;
};
