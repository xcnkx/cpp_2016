#include "swap.h"
void swap(int* a,int* b){
  int box = *a;
  *a = *b;
  *b = box;
}

void swap(int& a,int& b){
  int box = a;
  a = b;
  b = box;
}
