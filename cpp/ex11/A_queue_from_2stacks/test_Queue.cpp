#include <iostream>
#include <cassert>
#include "Queue.h"

int main (void) {
  int i;
 Queue<int> q;
 
  for (i = 0; i < 3; ++i) {
   q.push(i);
 }


  i=0;
 while (!q.empty()) {
  int front = q.front();
  assert(front == i);
  q.pop();
  i++;
 }

 return 0;
}
