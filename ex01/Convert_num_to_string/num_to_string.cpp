#include "num_to_string.h"
#include <sstream>
std::string unsignedIntToString(unsigned int a){
  std::ostringstream os;
  os<<a;
  return os.str();
  }

std::string intToString(int b){
   std::ostringstream os;
  os<<b;
  return os.str();
}

std::string floatToString(float c){
  std::ostringstream os;
  os<<c;
  return os.str();
}
