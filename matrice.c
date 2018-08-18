#include <stdio.h>

#define N 100


void transpose_matrix(int m[N][N], int n)
{
	int i, j, tmp;

	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			tmp = m[i][j];
			m[i][j] = m[j][i];
			m[j][i] = tmp;
		}
	}
}


void print_matrix(int m[N][N], int n)
{
	int i, j;

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void suma_matrix(int m[N][N], int n){

  int suma = 0;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){

      if (i < j) {
        suma += m[i][j];
        }
    }
  }

  printf("Suma: %d\n", suma);

}

void second_matrix(int m[N][N], int n){

  for (int i = 1; i <= n-1; i++){
    for(int j = 1; j <= n-i; j++){
      m[i][j] = 0;
      printf("%d ", m[i][j]);
    }
  }

  printf("\n");

  for (int i = 2; i <= n; i++){
    for(int j = n + 2 - i; j <= n; j++){
      printf("%d ", m[i][j]);
    }
  }
}

void read_matrix(){

  int n;
  int m[N][N];
  printf("Dimensiunea: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      printf("m[%d][%d]: ", i, j);
      scanf("%d", &m[i][j]);
    }
  }

  print_matrix(m, n);
//  suma_matrix(m, n);
  second_matrix(m, n);
//  transpose_matrix(m, n);
//	print_matrix(m, n);

}

int main(void)
{

  read_matrix();


	return 0;
}
