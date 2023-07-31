// repdigit.c (глава 8)
/* Проверяет числа на наличие повторных цифр */

#include <stdbool.h> /* C99 only */
#include <stdio.h>

int main(void)
{
	bool digit_seen[10] = {false};
	int digit;
	long n;
	
	while(1)
	{
		printf("Enter a number(-1 for exit): ");
		scanf("%ld", &n);
		
		if(n == -1)
		{
			break;
		}
	
		while (n > 0) 
		{
			digit = n % 10;
			
			if (digit_seen[digit])
				break;
			
			digit_seen[digit] = true;
			
			n /= 10;
		}
	
		if (n > 0)
			printf("Numbers has been reapeting\n");
		else
			printf("Numbers hasn't been reapeting\n");
			
		for(int i = 0; i != 10; i++)
		{
			digit_seen[i] = false;
		}
	}
		
	return 0;
}

