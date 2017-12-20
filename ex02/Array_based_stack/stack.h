#ifndef STACK_H
#define STACK_H

class Stack {
public:
 Stack(int max_size) : _size(0), _max_size(max_size), 
   _top(-1), _data(new int[max_size]) {}

 ~Stack() { delete[] _data; }

 // interface
 
 // check whether the stack is empty
 bool empty();

 // check whether the stack is full
 bool full();

 // return the number of elements
 int size();

 // insert element on top
 // print an error message on stderr for overflow
 void push(int);

 // remove element on top
 // print an error message on stderr for underflow
 void pop();

 // acces the topmost element
 int top();

private:
  int _size;
  int _max_size;
  int _top;
  int* _data;

};
#endif 
