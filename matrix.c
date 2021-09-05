/*
Un fisier contine elementele unei matrici patratice. Pe un rand se gasesc
elementele unei linii a matricei separate prin spatii. Nu se cunoaste ordinul
matricei patratice. Sa se afiseze pe ecran diagonala secundara a matricei, asa cum
este ea reprezentata in matrice. Elementele matricei sunt numere reale

Input:
1 2 3 4
5 6 7 8
9 1 2 3
4 5 6 7
Output:
4.00 7.00 1.00 4.00
*/
#include <stdio.h>
#include <math.h>
#define FIN "matrix.in"
#define FOUT "matrix.out"

int main(int argc, char const *argv[]) {

  freopen(FIN, "r", stdin);

  freopen(FOUT, "w", stdout);

  float vec[100],

        matrix[100][100];

  int k = 0;

  float x;

  while(scanf("%f", &x) > 0  ) {

    vec[k++] = x;

  }

  //compile in this way: gcc matrix.c -o r -lm to link sqrt
  //get the order of the matrix
  int n = sqrt( k );

  //init k = 0
  k = 0;

  //loop i
  for(int i = 0; i < n; ++i) {

    //loop j
    for(int j = 0; j < n; ++j) {

        //get the element of the matrix
        matrix[i][j] = vec[k++];
    }
  }

  for(int i = 0; i < n; ++i) {

    for(int j = 0; j < n; ++j) {

        printf("%.2f ", matrix[i][j]);
    }

    printf("\n");
  }

  printf("\n");

  for(int i = 0; i < n; ++i) {

    for(int j = 0; j < n; ++j) {

        if(i == n - j - 1) printf("%.2f ", matrix[i][n - i - 1]);
    }
  }

  return 0;
}
