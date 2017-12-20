#include "Mat3x3.h"

Mat3x3::Mat3x3(){
  int i,j;
    for(i=0;i<3;i++)
      for(j=0;j<3;j++)
	if (i != j) array[i][j] = 0;
	else array[i][j] = 1;
}

Mat3x3::Mat3x3(double darray[3][3]){
    int i,j;
    for(i=0;i<3;i++)
      for(j=0;j<3;j++)
	array[i][j] = darray[i][j];
}

Mat3x3 Mat3x3::operator+ (const Mat3x3 other){
  Mat3x3 result = *this;
  result += other;
  return result;
}

Mat3x3 Mat3x3::operator- (const Mat3x3 other){
  Mat3x3 result = *this;
  result -= other;
  return result;
}

Mat3x3 Mat3x3::operator* (const Mat3x3 other){
  Mat3x3 result = *this;
  result *= other;
  return result;
}

Mat3x3& Mat3x3::operator+= (const Mat3x3& other){
  int i,j;
  for(i=0;i<3;i++)
      for(j=0;j<3;j++)
	array[i][j] += other.array[i][j];
  return *this;
}

Mat3x3& Mat3x3::operator-= (const Mat3x3& other){
  int i,j;
  for(i=0;i<3;i++)
      for(j=0;j<3;j++)
	array[i][j] += -other.array[i][j];
  return *this;
}

Mat3x3& Mat3x3::operator*= (const Mat3x3& other){
  int i,j,k;
  double count;
  Mat3x3 result;
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      count = 0;
      for(k=0;k<3;k++)
	count += array[i][k] * other.array[k][j];
      result.array[i][j] = count;
    }
  }

  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      array[i][j] = result.array[i][j];

  return *this;
}

const Mat3x3 Mat3x3::operator- (){
 int i,j;
 Mat3x3 result;
  for(i=0;i<3;i++)
      for(j=0;j<3;j++)
	result.array[i][j] = -array[i][j];
  return result;
}

double& Mat3x3::operator() (int row,int col){
  return array[row][col];
}


bool Mat3x3::operator== (const Mat3x3& other) const{
int i,j;
 Mat3x3 result;
  for(i=0;i<3;i++)
      for(j=0;j<3;j++)
	if(array[i][j] != other.array[i][j]) return 0;
  return 1;
}

std::ostream& operator<< (std::ostream& os, const Mat3x3 mat){
int i,j;
 for(i=0;i<3;i++){
   for(j=0;j<3;j++){
	os << mat.array[i][j] << " ";
   }
   os << std::endl;
 }
  return os;
}
