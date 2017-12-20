#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape2D.h"

class Rectangle : public Shape2D{
 public:
  Rectangle(Point2D left_corner,float width,float height);
  virtual std::string get_name();
  virtual float compute_area();
  virtual void translate(float tx,float ty);
  ~Rectangle();

 private:
  Point2D corner;
  float r_width, r_height;
};

#endif
