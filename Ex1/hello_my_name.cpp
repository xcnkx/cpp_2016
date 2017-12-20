// hello_my_name.cpp

// COMPLETE:
// import strind and stream declaration
#include <iostream>
#include <sstream>

int main(void) {
  std::string my_name;
  // COMPLETE:
  // print "What is your name"
  // read name from input
  // print "hello xx" where xx is the name read
  
  std::cout<<"What is your name ?"<<std::endl;
  
  std::cin>>my_name;
  
  std::cout<<"Hello "<< my_name <<"!"<<std::endl;

}
