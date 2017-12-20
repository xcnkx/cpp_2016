#include <iostream>
#include "memory.h"


using util::shared_ptr;
using util::make_shared;


template <class T>
struct Node {
  int index;
  T data;
};


int main(void) {
  float *f = new float;
  *f = 25.0f;
  shared_ptr<float> pf(f);
  shared_ptr<float> pf2 = pf;
  
  std::cout << pf.get_count() << " " << pf2.get_count() << std::endl;
  
  
  shared_ptr<int> p = make_shared(0);  
  if (p.get_count() == 1) {
    std::cout << "only one pointer points to the resource of p" << std::endl;
  }

  Node<float> n;
  n.index = 0;
  n.data = 3.0f;
  shared_ptr<Node<float> > pn = make_shared(n);

  return 0;
}
