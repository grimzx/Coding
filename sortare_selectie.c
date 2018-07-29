#include <stdio.h>
#define N 100

int sortare_selectie(int v[N], int n){

  int aux = 0;

  for(int i = 0; i < n - 1; i++){
    for(int j = i + 1; j < n; j++){
      if (v[i] > v[j]){
        aux = v[j];
        v[j] = v[i];
        v[i] = aux;
      }
    }
  }

  for(int i = 0; i < n; i++){
    printf("%d ", v[i]);
  }

  return 0;
}

int main(){

  int v[N];
  int n;

  printf("Dimensiunea: ");
  scanf("%d", &n);

  for(int i = 0 ; i < n; i++){
    printf("Introduceti v[%d]: ", i);
    scanf("%d", &v[i]);
  }

  sortare_selectie(v, n);

  return 0;
}
