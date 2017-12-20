// test_Bounded_min.cpp

#include <iostream>
#include <cassert>
#include "utils.h"

using namespace std;

int main(void) {
  Bounded_min<int> b_min(0, 10);
  assert(b_min(1, 3) == 1);
  assert(b_min(-1, 15) == 0);
  assert(b_min(-1, -5) == 0);
  assert(b_min(12, 14) == 10);

  cout << "Tests passed" << endl;

  return 0;
}
