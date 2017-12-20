// test_UniqueID.cpp
#include <cassert>

// COMPLETE include the proper headers
#include "UniqueID.h"

UniqueID::UniqueID(){
  static int counter = 1;
  id = counter++;
}

int main(void) {
  UniqueID uid1;
  assert(uid1.getID() == 1);

  UniqueID uid2;
  assert(uid2.getID() == 2);

  UniqueID uid3;
  assert(uid3.getID() == 3);

  return 0;
}
