#include <iostream>
#include <fstream>
#include <list>
#include <iterator>

using namespace std;

int main(void){
  ofstream of("output.txt");
  list<int> l;
  list<int> oddl;
  list<int>::iterator lit;

  copy(istream_iterator<int> (cin),istream_iterator<int> (),back_inserter(l));

 for(lit=l.begin();lit!=l.end();++lit)
   if(*lit % 2 == 1) oddl.push_back(*lit);

 copy(oddl.begin(),oddl.end(),ostream_iterator<int>(of," "));

 return 0;
}
