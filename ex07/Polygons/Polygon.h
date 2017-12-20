#ifndef POLYGON_H
#define POLYGON_H

#include "Shape2D.h"

class Polygon: public Shape2D{

 public:
  Polygon(Point2D* vertices, int num);
  virtual std::string get_name();
  virtual float compute_area();
  virtual void translate(float tx,float ty);
  ~Polygon();

 private:
  Point2D* p_vertices;
  int p_num;
};

#endif
