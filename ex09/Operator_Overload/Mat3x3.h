
#ifndef MAT3X3
#define MAT3X3

#include <iostream>

class Mat3x3{

 private:
  double array[3][3];

 public:

  Mat3x3();
  Mat3x3(double darray[3][3]);
   

  Mat3x3 operator+ (const Mat3x3 other);
  Mat3x3 operator- (const Mat3x3 other);
  Mat3x3 operator* (const Mat3x3 other);
  Mat3x3& operator+= (const Mat3x3& other);
  Mat3x3& operator-= (const Mat3x3& other);
  Mat3x3& operator*= (const Mat3x3& other);
  const Mat3x3 operator- ();
  double& operator() (int row,int col);
  bool operator== (const Mat3x3& other) const;
  friend std::ostream& operator<< (std::ostream& os, const Mat3x3 mat);

};

#endif
