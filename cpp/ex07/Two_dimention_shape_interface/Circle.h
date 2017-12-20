#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape2D.h"

class Circle : public Shape2D{
 public:
  Circle(const Point2D& center,float radius);
  virtual std::string get_name();
  virtual float compute_area();
  virtual void translate(float tx,float ty);
  ~Circle();

 private:
  Point2D c_center;
  float c_radius;
};


#endif
