#include <stdio.h>

#define N 100

void elimin_vector(int v[N], int n, int pos){

  for(int i = pos; i < n; i++){
    v[i] = v[i + 1];
  }

  for(int i = 0; i < n - 1; i++){
    printf("%d ", v[i]);
  }

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

int min_vector(int v[N], int n){

  int min = v[0];
  int pos = 0;

  for(int i = 0; i < n; i++){

    if (min > v[i]){
      min = v[i];
      pos = i;
    }
  }

  return pos;
}

void lab5(int v[N], int n)
{
    int i;

    for (i = 0; i < n; i++) {
	printf("%d ", v[i]);
    }
    printf("\n");
}

void operations(int v[N]){

  char c;

  printf("Alegeti:\n");
  scanf("%c", &c);

  switch (c) {
    case 'q':
    break;

    case 'm':
    elimin_vector(v, 5, min_vector(v,5));
    break;

    case 'M':
    elimin_vector(v, 5, max_vector(v,5));
    break;

    case 'p':
    lab5(v, 5);
    break;
  }
}


void sum_left_neighbour(int v[N], int n){

  int i;

    for(i = 1; i <= n; i++) {
    v[i] += v[i-1];
  }
}

void sum_right_neighbour(int v[N], int n)
{
    int i;

    for (i = 0; i < n - 1; i++) {
        v[i] += v[i+1];
    }
}

int main(void)
{
    int v[N] = {3, 2, 1, 4, 5};

    //lab5(v, 5);
    //sum_right_neighbour(v, 5);
    //lab5(v, 5);
    //sum_left_neighbour(v, 5);
    operations(v);

    return 0;
}
