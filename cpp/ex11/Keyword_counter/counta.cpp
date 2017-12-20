#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

int main(void){

  map<string,int> m;
  char filename[100];
  string str;
  ifstream in;

  //input keyword to map
  in.open("keywords.txt");
  if(in.fail())  cout << "Keyword File open failed." << endl;

  while(true){
    in >> str;
    if(in.fail()) break;
    m[str] = 0;
  }
  in.close();
  
  //check file open
  cout << "What is file name? :" ;
  cin >> filename;
  in.open(filename);
  if(in.fail())  cout << "Check File open failed." << endl;



  typedef map<string,int>::iterator itera;
  itera p;

  //keyword check
  while(true){
    in >> str;
    if(in.fail()) break;
    for(p = m.begin(); p != m.end();++p)
      if(str.find(p->first,0) != string::npos)  p->second++; //this problem allow to count even if keyword is in string or comment.

  }

  //print out keyword and number used
  for(p = m.begin(); p != m.end();++p)
    if(p->second != 0) cout << "Keyword: "<< p->first << " occurred: " << p->second << " times" << endl;
  
  in.close();

  return 0;
}
