#ifndef QUEUE_H
#define QUEUE_H

#include <vector>
#include <stack>


template <typename T, typename Container=std::vector<T> > 
class Queue {
public:
    typedef typename Container::value_type value_type;
    typedef typename Container::size_type  size_type;
    typedef Container container_type;

    std::stack<T> stack1;
    std::stack<T> stack2;

explicit Queue(const Container& contents = Container()){}


bool empty() const{
  if( stack2.empty() == true ) return true;
  else return false;
}


size_type size() const{
  return stack2.size();
}


value_type& front(){
  return stack2.top();
}


const value_type& front() const{
 return stack2.top();
}


value_type& back(){
  return stack1.top();
}


const value_type& back() const{
  return stack1.top();
}


void push(const value_type& x){
  stack1.push(x);
  std::stack<T> stack3 = stack1;
    
  while(stack2.empty() != true) stack2.pop();

  while(stack3.empty() != true){
    stack2.push(stack3.top());
    stack3.pop();
  }
}


void pop(){
  stack2.pop();
  std::stack<T> stack3 = stack2;

while(stack1.empty() != true) stack1.pop();

  while(stack3.empty() != true){
    stack1.push(stack3.top());
    stack3.pop();
  }
}
};

#endif
