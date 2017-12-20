#ifndef VEC_N
#define VEC_N

template < typename T, int dim >
  class Vec{
 private:
  T element[dim];

 public:
  Vec(){
    int i;
    for(i=0;i<dim;i++) element[i] = 0;
  }

  Vec(T array[dim]){
    int i;
    for(i=0;i<dim;i++) element[i] = array[i];
  }

  T operator() (int index){
    return element[index];
  }

  int dimension(){
    return dim;
  }

  Vec< T, dim> operator- (){
    Vec< T, dim> ret;
    int i;
    for(i=0;i<dim;i++) ret.element[i] = -element[i];

    return ret;
  }

};






template < typename T ,int dim>

  Vec<T, dim> operator+ (Vec<T, dim> a, Vec<T, dim> b){
  T array[dim];
  int i;
  for(i=0;i<dim;i++) array[i] = a(i)+b(i);
  Vec< T, dim > ret(array);
  return ret;
}

template < typename T ,int dim>

  Vec<T, dim> operator- (Vec<T, dim> a, Vec<T, dim> b){
  return a + (-b);
}

template < typename T ,int dim>

 T operator* (Vec<T, dim>& a, Vec<T, dim>& b){
  T scalar_pro = 0;
  int i;
  for(i=0;i<dim;i++) scalar_pro += a(i) * b(i);
  return scalar_pro;
}

template < typename T ,int dim>

  T compute_norm(const Vec<T, dim>& a){
  T norm = 0;
  int i;
  for(i=0;i<dim;i++) norm += a(i) * a(i);
  return sqrt(norm);
}

#endif

