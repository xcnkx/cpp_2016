#include "stack.h"
#include <iostream> // I use std::cerr for printing stderr message. So I need to include iostream.
                     


bool Stack::empty(){
  if(_size == 0) return true;
  else return false;
}


bool Stack::full(){
  if(_size == _max_size) return true;
  else return false;
}

int Stack::size(){
  return _size;
}

void Stack::push(int x){
  if(_size == _max_size){
    std::cerr << " overflow!! ";
  }
  else{
    _top++;
    _data[_top] = x;
    _size++;
  }
}

void Stack::pop(){
  if(_top == -1){
    std::cerr << " underflow!! ";
  }
  else{
    _top--;
    _size--;
  }
}
 

int Stack::top(){
  return _data[_top];
}



