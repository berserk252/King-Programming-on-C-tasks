// repdigit.c (глава 8)
/* Проверяет числа на наличие повторных цифр */

#include <stdbool.h> /* C99 only */
#include <stdio.h>

int main(void)
{
	bool digit_seen[10] = {false};
	bool numbers[10] = {false};
	bool flag = false;
	int digit;
	long n;
	
	printf("Enter a number: ");
	scanf("%ld", &n);
	
	while (n > 0) 
	{
		digit = n % 10;
		
		if (digit_seen[digit])
		{
			flag = true;
			numbers[digit] = true;
		}
		
		if (!digit_seen[digit])
		{
			digit_seen[digit] = true;
		}	
		
		n /= 10;
	}

	if (flag == true)
	{
		printf("Numbers that have been repeated is:");
		
		for(int i = 0; i != 10; i++)	
		{
			if(numbers[i])
			{
				printf("%d ", i);
			}
		}
			puts("");
	}
	else
		printf("Number isn't reapeting\n");

	return 0;
}
