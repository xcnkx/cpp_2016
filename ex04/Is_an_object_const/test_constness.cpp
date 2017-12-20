// test_constness.cpp
#include <assert.h>
#include "constness.h"

void pass_const(const Constness& o) {
  assert(o.is_const() == true);
}

void pass_ref( Constness& o) {
  assert(o.is_const() == false);
}

void pass_normal(Constness o) {
  assert(o.is_const() == false);
}

int main(void) {
  Constness o;
  pass_const(o);
  pass_ref(o);
  pass_normal(o);

  const Constness const_obj = o;
  assert(const_obj.is_const() == true);

  return 0;
}
