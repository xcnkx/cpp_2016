// reverse.cpp
#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

// COMPLETE: write an implementation of reverse()
vector<char> reverse(vector<char> ori){
  vector<char> newv;
  vector<char>::reverse_iterator rit;
  for(rit=ori.rbegin();rit!=ori.rend();++rit)
    newv.push_back(*rit);
  return newv;
}


int main(void) {
  vector <char> input;
  input.push_back('a');
  input.push_back('b');
  input.push_back('c');

  vector <char> reversed;
  reversed.push_back('c');
  reversed.push_back('b');
  reversed.push_back('a');

  assert(reverse(input) == reversed);
  cout << "Test passed" << endl;

  return 0;
}
