#include <stdio.h>

#define MAX	100


void inmultire_matrix(int a[MAX][MAX],int b[MAX][MAX], int n)
{
	int c[MAX][MAX];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			for(int k = 0; k < n; k++){
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	for(int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			printf("%d ", c[i][j]);
		printf("\n");
	}

	printf("\n");

}

void read_matrix(int a[MAX][MAX],int b[MAX][MAX], int n)
{
	int i, j;

	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
      printf("a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
    }
  }

	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			printf("b[%d][%d]: ", i, j);
			scanf("%d", &b[i][j]);
		}
	}

	inmultire_matrix(a, b, n);

}

int main(void)
{
	int a[MAX][MAX], b[MAX][MAX], n, i, j;

  printf("Dimensiunea: ");
  scanf("%d", &n);
	read_matrix(a, b, n);

  for(i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	printf("\n");

	for(i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%d ", b[i][j]);
		printf("\n");
	}

	printf("\n");

	return 0;
}
