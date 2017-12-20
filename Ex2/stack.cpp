#include <iostream>
#include "stack.h"

using namespace std;

bool Stack::empty(){
  if(size()==0) return true;
  else return false;
}

bool Stack::full(){
  if(size()==_max_size) return true;
  else return false;
}

int Stack::size(){
  return _top+1;
}

void Stack::push(int i){
  if(!full()){
    _data[++_top]=i;
  }
  else{
    cerr<<"Stack overflow error !"<<endl<< "Possible Data Loss !"<<endl;
  }
}

void Stack::pop(){
  if(!empty()){
    _top--;
  }
  else cerr<<"Stack underflow error !"<<endl;
}

int Stack::top(){
  return _data[_top];
}
