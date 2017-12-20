// hello_my_name.cpp

// COMPLETE:
// import strind and stream declaration
#include <iostream>

int main(void) {
  std::string my_name;
  // COMPLETE:
  // print "What is your name"
  std::cout<<"what is your name\n";
  // read name from input
  std::cin>>my_name;
  // print "hello xx" where xx is the name read
  std::cout<<"hello " + my_name + "\n";
}
