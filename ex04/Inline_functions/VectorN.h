// VectorN.h

struct VectorN {
    int _dim;
    float* _data;

    VectorN(int dim) : _dim(dim), _data(new float[dim]) {}

    ~VectorN() { delete[] _data; }

    void set(int pos, float value) { 
      assert(pos >= 0 && pos < _dim);
      _data[pos] = value;
    }

    float get(int pos) {
      assert(pos >= 0 && pos < _dim);
      return _data[pos];
    }
};

