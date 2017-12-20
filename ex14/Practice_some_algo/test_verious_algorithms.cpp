#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

template <class T>
class Com{
public:
  bool operator() (T c){
    return !(isalpha(c));
  }
};


template <class T2>
class Low{
public:
  T2 operator() (T2 c){
    return tolower(c);
  }
};

int main(void){

  string a;
  Com<char> com;

  cin >> a;

  a.erase(remove_if(a.begin(),a.end(),com),a.end());

  cout << a << endl;

  string b;
  Low<char> low;
  transform(a.begin(),a.end(),back_inserter(b),low);

  cout << b << endl;

  return 0;
}
