// test_normalize.cpp
// COMPLETE include the necessary headers
#include <math.h>
#include <iostream>
#include <cmath>
#include <assert.h>
#include "vector2.h"

// fails unless a == b (within some epsilon)
static void assertFloat(float a, float b) {
  assert(std::fabs(a - b) < 1e-5f);
}

void normalize(float& c,float& d){
float norm =  sqrt(c*c + d*d);
 c /= norm;
 d /=norm;

}

 float norm(struct Vector2 v){
  return sqrt(v._x * v._x + v._y * v._y);
}

int main(void) {
  Vector2 v(1.f, 0.f);
  // COMPLETE:
  // normalize v and checks that it has 
  // unit norm
  normalize(v._x,v._y);
  std::cout << "Norm is " << norm(v) << std::endl;
  if( norm(v) == 1 ) std::cout<< "Vector v has unit norm\n";

  assertFloat(norm(v), 1.0f);

  v._x = 1.f;
  v._y = 1.f;

  // COMPLETE:
  // normalize v
  normalize(v._x,v._y);
  
  assertFloat(norm(v), 1.0f);

  return 0;
}
