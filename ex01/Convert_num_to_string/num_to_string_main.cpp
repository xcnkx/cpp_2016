// num_to_string_main.cpp
// COMPLETE: include the proper headers
#include "num_to_string.h"
#include <assert.h>

int main(void) {
  unsigned int i = 10;
  // COMPLETE convert to string and assert that this is 
  // equal to the string "10"
  assert(unsignedIntToString(i) == "10");

  int j = -10;
  // COMPLETE convert to string and assert that this is 
  // equal to the string "-10"
  assert(intToString(j) == "-10");

  float f = 3.14159f;
  // COMPLETE convert to string and assert that this is
  // equal to the string "3.14159"
  assert(floatToString(f) == "3.14159");
}
