// vector2.h
#ifndef VECTOR2_H
#define VECTOR2_H

struct Vector2 {
  float _x, _y;
  Vector2(){
    _x = 0.f;
    _y = 0.f;
  }
  Vector2(float x, float y){
    _x = x;
    _y = y;
  }
};

#endif
