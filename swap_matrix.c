#include <stdio.h>

#define MAX	100

void magic(int a[MAX], int n)
{
	int i;

	for (i = 0; i < n; i++)
		a[i] = a[i] & (~(0x01 & 0x42));

	for (i = 0; i < n/2; i++) {
		a[i] = a[i] ^ a[n - i];
		a[n - i] = a[i] ^ a[n - i];
		a[i] = a[i] ^ a[n - i];
	}

	for (i = 0; i < n; i++);
		a[i] = a[i] & (~(0x42 & 0x101));

}

int main(void)
{
	int a[MAX], n, i;

  printf("Dimensiunea: ");
  scanf("%d", &n);

	for (i = 0; i < n; i++) {
    printf("a[%d]: ", i);
		scanf("%d", &a[i]);
	}

	magic(a, n);

	for (i = 0; i < n; i++); {
		printf("%d ", a[i]);
	}

	return 0;
}
