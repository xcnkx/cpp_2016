
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

  map<string,int> num;
  vector<string> l;
  vector<string>::iterator lit;
  double x = 0;
  double y,z,e,f;
  //
  // 1) Read a line from cin


  copy(istream_iterator<string> (cin),istream_iterator<string> (),back_inserter(l));

  lit = l.begin();

  cout << "a" << endl;

  if(l.size() == 3){
    num[l[0]] = atoi(l[2].c_str());
    cout <<l[0] <<  "=" << num[l[0]] << endl;
  }

  else{

    if(l[2] == "cos"){
      num[l[0]] = cos(atoi(l[3].c_str()));
      cout << z << endl;
    }

    if(l[2] == "sqrt"){
      num[l[0]] = sqrt(atoi(l[3].c_str()));
      cout << z << endl;
    }



    if(l[3] == "*"){
      num[l[0]] = atoi(l[2].c_str()) * num[l[4]];
      cout << l[0] <<  "=" << num[l[0]] << endl;
    }
    
    if(l[3] == "^"){
      num[l[0]] = pow(atoi(l[2].c_str()),num[l[4]]);
      cout << z << endl;
    }

    l.clear();
  }


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
