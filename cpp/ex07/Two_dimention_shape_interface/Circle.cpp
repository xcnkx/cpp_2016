#include "Circle.h"
#include "Shape2D.h"

Circle::Circle(const Point2D& center,float radius): c_center(center),c_radius(radius){}

std::string Circle::get_name(){return "circle";}

float Circle::compute_area(){return c_radius * c_radius * 3.141593f;}

void Circle::translate(float tx,float ty){
  c_center.x += tx;
  c_center.y += ty;
}

Circle::~Circle(){}


