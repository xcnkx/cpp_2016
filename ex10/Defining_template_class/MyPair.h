#ifndef TEM_CLASS
#define TEM_CLASS

template <class T1, class T2>

class MyPair{
 public:
  T1 first;
  T2 second;

 MyPair(const T1& a, const T2& b): first(a), second(b){}
};

#endif
