//reverse.c
/* реверсирует ряд чисел */

#include <stdio.h>
#define N 10

int main(void)
{
	int i, a[N];
	printf("Enter %d numbers: ", N);
	
	for (i = 0; i < (int)(sizeof(a) / sizeof(a[0])); i++)
		scanf("%d", &a[i]);
		
	printf("Reverse:");
		
	for (i = (int)(sizeof(a) / sizeof(a[0])) - 1; i >= 0; i--)
		printf(" %d", a[i]);
		
	printf("\n");
		
	return 0;
}

