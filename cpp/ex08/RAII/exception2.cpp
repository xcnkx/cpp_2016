// exception.cpp
#include <stdexcept>
#include <cstdio>
#include <iostream>

using namespace std;
 
void doSomeComputation() {
  throw runtime_error("failure during doing some computation");
}

class LogFile{

public:
  FILE* logfile;
  LogFile(const char* filename){ 
    logfile = fopen(filename,"w+");
    if (!logfile) throw runtime_error("failed to open file");
}
  ~LogFile(){ 
    cout << "closing logfile" << endl;
    fclose(logfile);
  }
};


void example() {
  LogFile log("logfile.txt");
  
  fputs("log1", log.logfile);
  
  doSomeComputation();
}

int main(void) {
  cout << "Calling example()" << endl;
  try{
    example();
  } catch(runtime_error& e){
    cout << e.what() << endl;
  }
  cout << "After calling example()" << endl;
  return 0;
}

