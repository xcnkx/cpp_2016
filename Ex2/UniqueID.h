#include <iostream>

using namespace std;

class UniqueID {
  int id;
 public:
  UniqueID();
  inline int getID() const{ return id;}
};
