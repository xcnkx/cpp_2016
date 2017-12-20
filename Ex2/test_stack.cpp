// test_stack.cpp
#include <cassert>
#include "stack.h"

int main(void) {
  Stack stack(100);

  for (int i = 0; i < 10; ++i) {
    stack.push(i);
  }

  assert(stack.full() == false);

  int i = 9;
  while (!stack.empty()) {
    int element = stack.top();
    assert(element == i);
    stack.pop();
    i = i - 1;
  }

  return 0;
}
