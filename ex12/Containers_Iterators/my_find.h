#ifndef MY_FIND
#define MY_FIND

template <class IT, class T >

IT my_find(IT first, IT last, const T& search){
  IT it;
  for(it=first;it!=last;++it)
    if(*it == search) return it;
  return it;
}

#endif
