// palindrome.cpp
#include <string>
#include <iostream>
#include <cassert>

#include "palindrome.h"

using namespace std;

bool isPalindrome(string str){
  int q = 1;
  string b,c;
  string::iterator it;

  Com<char> com;
  Low<char> low;

  str.erase(remove_if(str.begin(),str.end(),com),str.end());
  transform(str.begin(),str.end(),back_inserter(b),low);
  reverse_copy(b.begin(),b.end(),back_inserter(c));

  if(b == c) return true;
  else return false;
}



int main(void) {
  string palindrome1 = "Don't nod";
  string palindrome2 = "A Toyota! Race fast... safe car: a Toyota";
  string not_palindrome = "Random string";

  assert(isPalindrome(palindrome1));
  assert(isPalindrome(palindrome2));
  assert(!isPalindrome(not_palindrome));

  cout << "Tests passed" << endl;

  return 0;
}
