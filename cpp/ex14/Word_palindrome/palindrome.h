#ifndef PALI
#define PALI 

#include <algorithm>
#include <cctype>


template <class T>
class Com{
public:
  bool operator() (T c){
    return !(isalpha(c));
  }
};

template <class T2>
class Low{
public:
  T2 operator() (T2 c){
    return tolower(c);
  }
};

#endif
