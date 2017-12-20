#include "Shape2D.h"
#include "Polygon.h"

Polygon::Polygon(Point2D* vertices, int num): p_num(num){
  p_vertices = new Point2D[p_num];
  p_vertices = vertices;
}

std::string Polygon::get_name(){return "polygon";}

float Polygon::compute_area(){
  float area;
  int i;
  for(i=0;i<p_num;i++){
    if(i == p_num - 1) area += p_vertices[i].x *  p_vertices[0].y -  p_vertices[i].y *  p_vertices[0].x;
    else area += p_vertices[i].x *  p_vertices[i+1].y -  p_vertices[i].y *  p_vertices[i+1].x;
  }

  return area/2;
}

void Polygon::translate(float tx,float ty){
   int i;
    for(i=0;i<p_num;i++){
      p_vertices[i].x += tx;
      p_vertices[i].y += ty;
    }
}

Polygon::~Polygon(){delete[] p_vertices;}
