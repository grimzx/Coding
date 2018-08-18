#include <stdio.h>
#define N 100

int binarySearchHigh(int v[N], int l, int limitaInferioara) {
  int low = 0, high = l - 1;

  while (low <= high) {

    int x = low + (high - low) / 2;

    if (v[x] == limitaInferioara) {

      return x;
    }

    if (v[x] < limitaInferioara) {
      low = x + 1;
    } else {
      high = x - 1;
    }
  }

  return low;
}

int binarySearchLow(int v[N], int l, int limitaSuperioara) {
  int low = 0, high = l - 1;

  while (low <= high) {

    int x = low + (high - low) / 2;

    if (v[x] == limitaSuperioara) {

      return x;
    }

    if (v[x] < limitaSuperioara) {
      low = x + 1;
    } else {
      high = x - 1;
    }
  }

  return high;
}


int main(){

  int v[N], n, x, y;

  printf("Dimensiunea: ");
  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    printf("V[%d]: ", i);
    scanf("%d", &v[i]);
  }

  while(1){

  printf("X: ");
  scanf("%d", &x);

  if(x == -1) break;

  printf("Y: ");
  scanf("%d", &y);

  printf("HIGH:%d\n", binarySearchHigh(v, n, x));
  printf("LOW:%d\n", binarySearchLow(v, n, y));
  printf("%d\n", binarySearchLow(v, n, y) - binarySearchHigh(v, n, x) + 1);


  }
  return 0;
}
