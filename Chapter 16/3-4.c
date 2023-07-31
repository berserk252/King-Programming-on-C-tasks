#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

struct complex {
	double a;
	double b;
};

struct complex make_complex(double, double, struct complex);
struct complex add_complex(struct complex, struct complex);

int main( void )
{
	struct complex c1, c2, c3;
	
	return 0;
}

struct complex make_complex(double num1, double num2, struct complex c1)
{
	c1.a = num1;
	c1.b = num2;
	
	return c1;
}

struct complex add_complex(struct complex c1, struct complex c2)
{
	struct complex c3;
	
	c3.a = c1.a + c2.a;
	c3.b = c1.b + c2.b;
	
	return c3;
}
