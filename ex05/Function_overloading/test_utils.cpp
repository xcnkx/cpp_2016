// test_utils.cpp
#include "VectorN.h"





static void assertFloat(float a, float b) {
  assert(std::fabs(a - b) < 1e-5f);
}

int main(void) {
  int dim = 10;
  
  // vector of floating point numbers
  VectorNF vf(dim);
  for (int i = 0; i < dim; ++i) { vf.set(i, 1.0f); }
  
  float l2 = compute_l2_norm(vf);
  assertFloat(l2, std::sqrt(10.0f));
 
  
  float linf = compute_linf_norm(vf);
  assertFloat(linf, 1.0f);
 
  

  // vector of integers 
  VectorNI vi(dim);
  for (int i = 0; i < dim; ++i) { vi.set(i, 1); }

  l2 = compute_l2_norm(vi);
  assertFloat(l2, std::sqrt(10.0f));

  linf = compute_linf_norm(vi);
  assertFloat(linf, 1);
 

  return 0;
}
