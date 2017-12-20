#include <iostream>
#include <sstream>
#include <iomanip>
std::string unsignedIntToString(unsigned int data)
{
  std::stringstream ssdata;
  ssdata << data<<std::endl;
  return ssdata.str();
}
std::string intToString(int data)
{
  std::stringstream ssdata;
  ssdata << data<<std::endl;
  return ssdata.str();
}
  
std::string floatToString(float data)
{
  std::stringstream ssdata;
  ssdata << data<<std::endl;
  return ssdata.str();
}
  
