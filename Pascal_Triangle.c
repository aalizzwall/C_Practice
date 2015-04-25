#include <stdio.h>
#include <stdlib.h>
void main (int argc, char* argv[]){
  int i,j,m,n;
  int size = atoi(argv[1]);
  int tree[size][size];
  i=0;
  j=0;
  m=0;
  n=0;
  printf("[");
  while (i+j < size * 2 ) {
    if ( i==0 || j==0){
      tree[i][j] = 1;
    } else {
      tree[i][j]=tree[i-1][j] + tree[i][j-1];
    }
    if (j < size -i) {
      /*printf(" ");*/
    } else {
      if (i == 0 && j == 0){
        /*printf("%d", tree[i][j]);*/
      } else {
        if ( m+n == size-1){
          printf("%d", tree[m++][n--]);
          if (n != -1){
            printf(",");
          }
        }
      }
    }
    j++;
    if(j == size){
      if (i+j == size * 2){
        break;
      }
      /*printf("\n");*/
      j = 0;
      i++;
      n = i - 1;
      m = 0;
    }
  }
  printf("]");
}
