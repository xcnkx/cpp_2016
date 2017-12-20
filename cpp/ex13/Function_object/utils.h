#ifndef BOUNDED_MIN
#define BOUNDED_MIN

template<class T>

class Bounded_min{
 public:
 Bounded_min(const T& min_bound, const T& max_bound): min(min_bound), max(max_bound){}
  T operator() (T first, T second){ 
    sel = first < second ? first : second;
    if(sel < min) return min;
    else if(max < sel) return max;
    return sel;
  }
 private:
    T min,max,sel;
};

#endif
