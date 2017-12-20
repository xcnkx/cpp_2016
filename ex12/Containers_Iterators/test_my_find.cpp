#include <list>
#include <iostream>
#include <cassert>

#include "my_find.h"

using namespace std;

int main(void) {
 std::list<int> l;
 l.push_back(1); 
 l.push_back(2);
 l.push_back(5);
 l.push_back(1);
 l.push_back(2);

 std::list<int>::iterator it;
 it = my_find(l.begin(), l.end(), 2);
 assert(it != l.end()); // found

 it = my_find(l.begin(), l.end(), 11);
 assert(it == l.end()); // not found

 cout << "Tests passed" << endl;

 return 0;
}
