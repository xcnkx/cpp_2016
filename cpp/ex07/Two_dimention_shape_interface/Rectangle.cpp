#include "Rectangle.h"

Rectangle::Rectangle(Point2D left_corner,float width,float height): corner(left_corner), r_width(width), r_height(height){}

std::string Rectangle::get_name(){return "rectangle";}

float Rectangle::compute_area(){return r_width * r_height;}

void Rectangle::translate(float tx,float ty){
  corner.x += tx;
  corner.y += ty;
}

Rectangle::~Rectangle(){}


