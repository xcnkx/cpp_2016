// num_to_string_main.cpp
// COMPLETE: include the proper headers
#include <iostream>
#include <sstream>
#include <iomanip>
#include "num_to_string.h"

int main(void) {
  unsigned int i = 10;
  // COMPLETE convert to string and assert that this is equal
  // equal to the string "10"
  std::cout<<unsignedIntToString(i)<<std::endl;

  int j = -10;
  // COMPLETE convert to string and assert that this is equal
  // equal to the string "-10"
  std::cout<<intToString(j)<<std::endl;

  float f = 3.14159f;
  // COMPLETE convert to string and assert that this is
  // equal to the string "3.14159"
  std::cout<<floatToString(f)<<std::endl;
}
