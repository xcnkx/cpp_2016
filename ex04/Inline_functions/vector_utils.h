#ifndef VEC
#define VEC
inline float compute_l2_norm(VectorN v){
  int i;
  float norm = 0;
  for(i=0;i<v._dim;i++){
    norm += v.get(i) * v.get(i);
  }

  return std::sqrt(norm);
}

inline float compute_linf_norm(VectorN v){
  float max = 0;
  int i;
  for(i=0;i<v._dim;i++){
    if(max < std::sqrt(v._data[i])) max = v._data[i];
  }
  return max;
}

#endif
