#include "Complex.h"

template<class T>
T Complex::getReal() const{
  return real;
}

template<class T>
T Complex::getImaginary() const{
  return imag;
}

template<class T>
void Complex::setReal(T re){
  real = re;
}

template<class T>
void Complex::setImaginary(T im){
  imag = im;
}
