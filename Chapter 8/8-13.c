// repdigit.c (глава 8)
/* Проверяет числа на наличие повторных цифр */

#include <stdbool.h> /* C99 only */
#include <stdio.h>

int main(void)
{
	bool digit_seen[10] = {false};
	int numbers[10] = {0};
	bool flag = false;
	int digit;
	long n;
	
	printf("Enter a number: ");
	scanf("%ld", &n);
	
	while (n > 0) 
	{
		digit = n % 10;
		
		numbers[digit]++;
		
		
		n /= 10;
	}

	printf("Number: 0 1 2 3 4 5 6 7 8 9\n");
	printf("Number: ");
		
	for(int i = 0; i != 10; i++)	
	{
		printf("%d ", numbers[i]);
		
	}
	puts("");
	

	return 0;
}
