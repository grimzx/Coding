#include <stdio.h>
#define N 100

double media_aritm(int v[N], int n){

  double media;
  int k = 0;

  for(int i = 0; i < n; i++){

    media += v[i];
    k++;

  }

  media = media / k;

  return media;
}


int min_vector(int v[N], int n){

  int min = v[0];

  for(int i = 0; i < n; i++){

    if (min > v[i]){
      min = v[i];
    }
  }
  return min;
}

int vector(int v[N], int n, double media){

  int k = 0;

  for(int i = 0; i < n; i++){
    if (v[i] > media){
      k++;
    }

  }

  return k;
}

int max_vector(int v[N], int n){

  int max = v[0];
  int pos = 0;

  for(int i = 0; i < n; i++){

    if (max < v[i]){
      max = v[i];
      pos = i;
    }
  }

  return pos;
}

int main(){

  int n, v[N];

  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    scanf("%d", &v[i]);
  }
  printf("min = %d\n", min_vector(v, n));
  printf("poz_max = %d\n", max_vector(v, n));
  printf("ma = %.2f\n", media_aritm(v, n));
  printf("gt_ma = %d", vector(v, n, media_aritm(v, n)));
  return 0;
}
