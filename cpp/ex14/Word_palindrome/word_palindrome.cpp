// word_palindrome.cpp
#include <string>
#include <iostream>
#include <cassert>

#include "palindrome.h"
#include <sstream>
#include <vector>


using namespace std;

bool isWordPalindrome(string str){
  string b,item;
  Com<char> com;
  Low<char> low;
  stringstream ss(str);
  vector<string> vec,vec2;
  vector<string>::iterator it,it2;

  while(ss >> item){
  item.erase(remove_if(item.begin(),item.end(),com),item.end());
  transform(item.begin(),item.end(),back_inserter(b),low);
  back_inserter(vec) = b;
  b.erase(b.begin(),b.end());
  }

  reverse_copy(vec.begin(),vec.end(),back_inserter(vec2));
 
  it=vec.begin();
  it2=vec2.begin();
  while(it!=vec.end() && it2!=vec2.end()){
    if(*it != *it2) return false;
    ++it;
    ++it2;
  }
  return true;

}

int main(void) {
  string word_palindrome1 = "this is this";
  string word_palindrome2 = "it's an its";
  string not_word_palindrome1 = "don't nod";


  assert(isWordPalindrome(word_palindrome1));
  assert(isWordPalindrome(word_palindrome2));
  assert(!isWordPalindrome(not_word_palindrome1));

  cout << "Tests passed" << endl;
  return 0;
}
