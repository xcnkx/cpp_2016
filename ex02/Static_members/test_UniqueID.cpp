// test_UniqueID.cpp
#include <cassert>
#include "UniqueID.h" //include header file



int main(void) {
  UniqueID uid1;
  assert(uid1.getID() == 1);
 

  UniqueID uid2;
  assert(uid2.getID() == 2);


  UniqueID uid3;
  assert(uid3.getID() == 3);


  return 0;
}
