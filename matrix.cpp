#include <iostream>
using namespace std;

double** matrixmulti (double arr [] [], double b [] []){
  double c [3] [3] = {{0}};
 
  for (int i = 0, i < 3, ++i){
    for (int f = 0, f < 3, ++f){
      for (int j = 0, j < 3, ++j){
        c[i][f] += a[i][j] * b[j][f];
      }
    }
  }
  
  return c;
}

int main (){

  double a [] []={{1,0,0},{0,1,0},{1,1,0}};
  double b [] []={{1,1,1},{0,1,1},{0,0,1}};
  double c [] []= matrixmulti (a,b);
  

}
