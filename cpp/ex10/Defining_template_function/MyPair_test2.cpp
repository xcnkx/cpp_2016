#include <string>
#include <iostream>
#include "MyPair.h"

using namespace std;

template < typename F, typename S >
void print_pair(const MyPair<F, S>& pair) {
     cout << pair.first << " " 
      << pair.second << endl;
}


int main(void) {
  print_pair(make_myPair(string("one"), 1));

  return 0;
}
