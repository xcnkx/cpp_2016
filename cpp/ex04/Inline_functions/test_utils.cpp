// test_utils.cpp
#include <cmath>
#include <assert.h>
#include "VectorN.h"
#include "vector_utils.h"



static void assertFloat(float a, float b) {
  assert(std::fabs(a - b) < 1e-5f);
}

int main(void) {
  int dim = 10;
  VectorN v(dim);
  for (int i = 0; i < dim; ++i) { v.set(i, 1.0f); }

  float l2 = compute_l2_norm(v);
  assertFloat(l2, std::sqrt(10.0f));

  float linf = compute_linf_norm(v); 
  assertFloat(linf, 1.0f);

  return 0;
}
