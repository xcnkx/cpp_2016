// test_pointers.cpp
// COMPLETE include necessary headers
#include <iostream>

int main(void)
{
  int i;
  //
  // 1. declare a variable dblPtr as a pointer to a double
  double* dblPtr;
  // 2. allocate memory on the heap corresponding to one double and make dblPtr points to this location
  dblPtr = new double;
  // 3. store the value 3.14159 at the memory location pointed to by dblPtr
  *dblPtr = 3.1459;
  // 4. print out the content of the memory location pointed to by dblPtr
  std::cout << *dblPtr  << std::endl;
  // 5. delete the memory pointed to by dblPtr
  delete(dblPtr);
  //

  unsigned int a[5] = {1, 2, 3, 4, 5};
  // 6. declare a variable intPtr as a pointer to an unsigned int
  unsigned int *intPtr;
  // 7. make intPtr points to the beginning of the array a
  intPtr = a;
  // 8. print out what intPtr points to and the content of a[0]
  std::cout << "intPtr points to " << *intPtr << ". And content of a[0] is "<< a[0] << std::endl;
  // 9. increase intPtr by 1 and check that what it points to corresponds to a[1]
  intPtr++;
 std::cout << "intPtr points to " << *intPtr << ". And content of a[1] is "<< a[1] << std::endl;
  // 10. make intPtr points to the fourth element of the array by increasing it by 2
  //     and check that what it points to corresponds to a[3]
 intPtr+=2;
 std::cout << "intPtr points to " << *intPtr << ". And content of a[1] is "<< a[3] << std::endl;

  // 
  int n = 10;
  // 11. declare a variable "fltArray" as a pointer to float and 
  // make it point to an array of "n" element of type "float" created on the heap
  float* fltArray = new float[n];
  // 12. store in each fltArray[i] (for i=0 to n-1) the value float(i) / 5.0f;
  for(i=0;i<n;i++){
    fltArray[i] = (float)i  / 5.0f;
  // 13. print out each element of fltArray
    std::cout << fltArray[i] << " " ;
  }
  std::cout << std::endl;
  // 14. delete the previously allocated memory
    delete[] fltArray;

  //
  int m = 5;
  double** dblArray;
  // 14. allocate memory for a 2d array of size m * n on the heap (i.e. m arrays of size n). 
  // Make dblArray points to this 2d array.
  dblArray = new double*[m];
  for(i=0;i<m;i++) dblArray[i] = new double[n];

  for (int i = 0; i < m; i++)
    for (int j = 0; j < n; j++)
      dblArray[i][j] = (3.14 * i) / (j+1.0);

  // 15. print out each element of dblArray
  for (int i = 0; i < m; i++){
    for (int j = 0; j < n; j++){
      std::cout << dblArray[i][j];
      std::cout << " ";
    }
    std::cout << std::endl;
  }
  // 16. delete the memory allocated for the 2d array
  delete[] dblArray;

  return 0;
}
