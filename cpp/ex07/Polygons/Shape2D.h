#ifndef SHAPE2D_H
#define SHAPE2D_H

#include <string>

class Shape2D{
 public:
  Shape2D(){}
  virtual std::string get_name() = 0;
  virtual float compute_area() = 0;
  virtual void translate(float tx,float ty) = 0;
  virtual ~Shape2D(){}
};

struct Point2D{

 public:
  float x,y;
 Point2D(): x(0), y(0){}
 Point2D(float a,float b): x(a), y(b){}
};

#endif
