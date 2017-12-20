// VectorN.h

#ifndef VECTORN_H
#define VECTORN_H

#include <cmath>
#include <assert.h>

struct VectorNF {
    int _dim;
    float* _data;

    VectorNF(int dim) : _dim(dim), _data(new float[dim]) {}

    ~VectorNF() { delete[] _data; }

    void set(int pos, float value) { 
      assert(pos >= 0 && pos < _dim);
      _data[pos] = value;
    }

    float get(int pos) {
      assert(pos >= 0 && pos < _dim);
      return _data[pos];
    }
};

struct VectorNI {
    int _dim;
    int* _data;

    VectorNI(int dim) : _dim(dim), _data(new int[dim]) {}

    ~VectorNI() { delete[] _data; }

    void set(int pos, int value) { 
      assert(pos >= 0 && pos < _dim);
      _data[pos] = value;
    }

    int get(int pos) {
      assert(pos >= 0 && pos < _dim);
      return _data[pos];
    }
};


inline float compute_l2_norm(VectorNF v){
  int i;
  float norm = 0;
  for(i=0;i<v._dim;i++){
    norm += v.get(i) * v.get(i);
  }

  return std::sqrt(norm);
}

inline float compute_linf_norm(VectorNF v){
  float max = 0;
  int i;
  for(i=0;i<v._dim;i++){
    if(max < std::sqrt(v._data[i])) max = v._data[i];
  }
  return max;
}


inline float compute_l2_norm(VectorNI v){
  int i;
  int norm = 0;
  for(i=0;i<v._dim;i++){
    norm += v.get(i) * v.get(i);
  }

  return std::sqrt(norm);
}

inline float compute_linf_norm(VectorNI v){
  int max = 0;
  int i;
  for(i=0;i<v._dim;i++){
    if(max < std::sqrt(v._data[i])) max = v._data[i];
  }
  return max;
}


#endif
