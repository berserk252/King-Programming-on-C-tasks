#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

struct fraction {
	int nomerator;
	int denominator;
};

struct fraction GCD( struct fraction a);
struct fraction add( struct fraction f1, struct fraction f2);
struct fraction subs( struct fraction f1, struct fraction f2);
struct fraction mult( struct fraction f1, struct fraction f2);
struct fraction divide( struct fraction f1, struct fraction f2);

int main( void )
{
	struct fraction f1 ={
		6,
		8
	};
	struct fraction f2 = {
		9,
		6
	};
	
	f1 = GCD(f1);
	f2 = GCD(f2);
	
	add(f1, f2);
	subs(f1, f2);
	mult(f1, f2);
	divide(f1, f2);
	
	
	return 0;
}

struct fraction GCD( struct fraction a)
{
	int num;
	
	for(int count = 1; count <= a.nomerator; count++)
	{
		if(a.nomerator % count == 0 && a.denominator % count == 0)
		{
			
			num = count;
		}
	}
	
	a.nomerator /= num;
	a.denominator /= num;
	
	printf("%d %d\n", a.nomerator, a.denominator);
	
	return a;
}

struct fraction add( struct fraction f1, struct fraction f2)
{	
	int num;
	if(f1.denominator != f2.denominator)
	{
		if(f1.denominator > f2.denominator)
		{
			num = f1.denominator / f2.denominator;
			f2.nomerator = f2.nomerator * num;
			f2.denominator = f2.denominator * num;
		}
		else
		{
			num = f2.denominator / f1.denominator;
			f1.nomerator = f1.nomerator * num;
			f1.denominator = f1.denominator * num;
		}
	}
	
	f1.nomerator = f1.nomerator + f2.nomerator;
	
	printf("Adding sum : nomerator is %d, denominator is %d\n", f1.nomerator, f1.denominator);
		
	return f1;
}

struct fraction subs( struct fraction f1, struct fraction f2)
{
	int num;
	if(f1.denominator != f2.denominator)
	{
		if(f1.denominator > f2.denominator)
		{
			num = f1.denominator / f2.denominator;
			f2.nomerator = f2.nomerator * num;
			f2.denominator = f2.denominator * num;
		}
		else
		{
			num = f2.denominator / f1.denominator;
			f1.nomerator = f1.nomerator * num;
			f1.denominator = f1.denominator * num;
		}
	}
	
	f2.nomerator = f2.nomerator - f1.nomerator;
	
	printf("Subtracting sum : nomerator is %d, denominator is %d\n", f2.nomerator, f2.denominator);
		
	return f2;
}

struct fraction mult( struct fraction f1, struct fraction f2)
{
	int num;
	for(int count = 1; count <= f1.nomerator; count++)
	{
		if(f1.nomerator % count == 0 && f2.denominator % count == 0)
		{
			num = count;
		}
	}
	
	f1.nomerator /= num;
	f2.denominator /= num;
	
	for(int count = 1; count <= f1.nomerator; count++)
	{
		if(f2.nomerator % count == 0 && f1.denominator % count == 0)
		{
			num = count;
		}
	}
	
	f2.nomerator /= num;
	f1.denominator /= num;
	
	f1.nomerator *= f2.nomerator;
	f1.denominator *= f2.denominator;
	
	printf("Multiplication sum : nomerator is %d, denominator is %d\n", f1.nomerator, f1.denominator);
}

struct fraction divide( struct fraction f1, struct fraction f2)
{
	int hold, num;
	
	hold = f2.nomerator;
	f2.nomerator = f2.denominator;
	f2.denominator = hold;
	
	for(int count = 1; count <= f1.nomerator; count++)
	{
		if(f1.nomerator % count == 0 && f2.denominator % count == 0)
		{	
			num = count;
		}
	}
	
	f1.nomerator /= num;
	f2.denominator /= num;
	
	for(int count = 1; count <= f1.nomerator; count++)
	{
		if(f2.nomerator % count == 0 && f1.denominator % count == 0)
		{
			num = count;
		}
	}
	
	f2.nomerator /= num;
	f1.denominator /= num;
	
	f1.nomerator *= f2.nomerator;
	f1.denominator *= f2.denominator;
	
	printf("Divide sum : nomerator is %d, denominator is %d\n", f1.nomerator, f1.denominator);
}
