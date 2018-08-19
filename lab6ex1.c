#include <stdio.h>

#define MAX	100

void read_matrix(int a[MAX][MAX], int n)
{
	int i, j;

	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
      printf("a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
    }
  }
}

int main(void)
{
	int a[MAX][MAX], n, i, j;

  printf("Dimensiunea: ");
  scanf("%d", &n);
	read_matrix(a, n);

  for(i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}

	return 0;
}
