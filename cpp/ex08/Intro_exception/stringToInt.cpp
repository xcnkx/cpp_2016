// stringToInt.cpp
#include <stdexcept>
#include <string>
#include <sstream>
#include <iostream>

int stringToInt(const std::

string& input) {
  std::stringstream instream;
  instream << input;
  int number;
  instream >> number;

 if (instream.fail()) {
    // Error: the input can not be converted
   throw std::invalid_argument("Error: the input can not be converted");
  }

  char left;
  instream >> left;
  if (!instream.fail()) {
    // Error: there are some characters left after the int
   throw std::invalid_argument("Error: there are some characters left after the int");
  }

  // everything went fine: returns the int
  return number;
 }

int main(void) {

  try{
    std::string test1 = "11";
    std::cout << stringToInt(test1) << std::endl; 
  } catch(std::invalid_argument& e){
    std::cout <<  e.what() << std::endl;
  }
  
  try{
    std::string test2 = "cc11";
    std::cout << stringToInt(test2) << std::endl;
  } catch(std::invalid_argument& e){
    std::cout <<  e.what() << std::endl;
  }
  
  try{
    std::string test3 = "11cc";
    std::cout << stringToInt(test3) << std::endl;
  } catch(std::invalid_argument& e){
    std::cout <<  e.what() << std::endl;
  }
  
  std::cout << "Tests passed" << std::endl;
  
  return 0;
}
