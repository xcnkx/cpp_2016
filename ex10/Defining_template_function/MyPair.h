#ifndef TEM_CLASS
#define TEM_CLASS

template < class T1, class T2 >
  
  class MyPair{
 public:
  T1 first;
  T2 second;
  
  MyPair<T1,T2> (const T1& a, const T2& b): first(a), second(b){}
};

template < typename T1, typename T2 >
  MyPair<T1, T2> make_myPair(const T1& a, const T2& b){
  MyPair<T1, T2> mypair(a, b);
  return mypair;
}


#endif
