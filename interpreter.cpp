#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <sstream>
#include <cstdlib>
#include <iterator>
#include <cmath>


using namespace std;


/*
 *  Parses simple arithmetic expressions of the form:
 *  z = C, z = x, z = fun x, z = x + y
 *  where x and y can be symbolic variables or real
 *  numbers. Uses a symbol table to store the mapping between
 *  variable names and their values.
 *  
 *
 * $ ./interpreter.exe
 * >> x = 10
 * x =  10
 * 
 * >> y = 15 * x
 * y = 150
 *
 * >> z = 2 ^ x
 * z = 1024
 *
 * >> x = 25
 * x =  25
 *
 * >> e = sqrt x
 * e = 5
 * >> f = cos 0
 * f = 1
 *  >> [Ctrl-d]
 */
void interpreter() {
  // Complete:
  int x,y,z,e,f;
  Char c1,c2,;
  cout << ">> x =" << endl;
  cin >> x;
  cout << "x = " << x << endl;
  cout << ">> y = " << endl;
  cin >> y >> c1 >> c2;
  cout << "y = " << y * x << endl;
  cout << ">> z = " << endl;
  cin >> z >> c1 >> c2;
  cout >> "z = " >> zsprt(x)

  // 1) Read a line from cin
  // 2) Tokenize it (split the input string based on whitespaces)
  // 3) Depending on the number of tokens from 2, select 
  //    the type of actions (assignment or function call or operation)
  // 4) Repeat
  //
  // Use a std::map as a symbol table, to store value associated to 
  // symbolic variables. 
}


int main(void) {
  interpreter();
  
  return 0;
}
