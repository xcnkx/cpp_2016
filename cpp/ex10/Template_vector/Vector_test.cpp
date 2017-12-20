#include "Vector_N.h"
#include <iostream>

using namespace std;

int main(void){

  int a[3] = {0,1,2};
  int b[3] = {1,2,3};
  double c[4] = {4.5,1.3,2.4,7.9};
  double d[4] = {1.1,2.9,3.7,7.0};
  int i;

  cout << "Test1--------------------" << endl;

  Vec<int,3> vec1(a);
  cout << "vec1 = {";
  for(i=0;i<3;i++) cout << vec1(i) << " ,";
  cout << "}" << " :dim of vec1 = "<< vec1.dimension() << endl;

  Vec<int,3> vec2(b);
  cout << "vec2 = {";
  for(i=0;i<3;i++) cout << vec2(i) << " ,";
  cout << "}" << " :dim of vec2 = "<< vec2.dimension() << endl;
  
  Vec<int,3> vec3 = vec1 + vec2;
  cout << "vec3 =  vec1 + vec2 = {";
  for(i=0;i<3;i++) cout << vec3(i) << " ,";
  cout << "}" << endl;

  Vec<int,3> vec4 = vec1 - vec2;
  cout << "vec4 =  vec1 - vec2 = {";
  for(i=0;i<3;i++) cout << vec4(i) << " ,";
  cout << "}" << endl;

  
  cout << "Norm of vec1 and vec2 is " << vec1 * vec2 << endl;






 cout << "Test2--------------------" << endl;

  Vec<double,4> vec5(c);
  cout << "vec5 = {";
  for(i=0;i<4;i++) cout << vec5(i) << " ,";
  cout << "}" << " :dim of vec5 = "<< vec5.dimension() << endl;

  Vec<double,4> vec6(d);
  cout << "vec6 = {";
  for(i=0;i<4;i++) cout << vec6(i) << " ,";
  cout << "}" << " :dim of vec6 = "<< vec6.dimension() << endl;
  
  Vec<double,4> vec7 = vec5 + vec6;
  cout << "vec7 =  vec5 + vec6 = {";
  for(i=0;i<4;i++) cout << vec7(i) << " ,";
  cout << "}" << endl;

  Vec<double,4> vec8 = vec5 - vec6;
  cout << "vec8 =  vec5 - vec6 = {";
  for(i=0;i<4;i++) cout << vec8(i) << " ,";
  cout << "}" << endl;

  
  cout << "Norm of vec1 and vec2 is " << vec5 * vec6 << endl;


  cout << "The end-----------------" << endl;

  return 1;
}


