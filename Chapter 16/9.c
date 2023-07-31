#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

struct color {
	int red;
	int green;
	int blue;
};

struct color make_color (int red, int green, int blue);
int getRed (struct color c);
int equal_color (struct color color1, struct color color2);
struct color brighter (struct color c);
struct color darker (struct color c);

int main( void )
{
	struct color MAGNETA = {
		255,
		0,
		255
	};
	struct color MAGNETA2 = {
		255,
		0,
		255
	};
	int r;
	int a;
	
	MAGNETA = make_color(MAGNETA.red, MAGNETA.green, MAGNETA.blue);
	r = getRed(MAGNETA);
	printf("Red is %d\n", r);
	a = equal_color (MAGNETA, MAGNETA2);
	if(a == 1)
	{
		printf("The colors is equal\n");
	}
	else
	{
		printf("The colors is not equal\n");
	}
	
	MAGNETA = brighter(MAGNETA);
	printf("Brighter color is = %d %d %d\n", MAGNETA.red, MAGNETA.green, MAGNETA.blue);
	MAGNETA2 = darker (MAGNETA2);
	printf("Darker color is = %d %d %d\n", MAGNETA.red, MAGNETA.green, MAGNETA.blue);
	
	return 0;
}

struct color make_color (int red, int green, int blue)
{
	struct color a;
	
	printf("Enter a rgb parametrs\n");
	scanf("%d%d%d", &red, &green, &blue);
	
	if(red < 0)
	{
		red = 0;
	}
	
	if(green < 0)
	{
		green = 0;
	}
	
	if(blue < 0)
	{
		blue = 0;
	}
	
	if(red > 255)
	{
		red = 255;
	}
	
	if(green > 255)
	{
		green = 255;
	}
	
	if(blue > 255)
	{
		blue = 255;
	}
	
	a.red = red;
	a.green = green;
	a.blue = blue;
	
	return a;
		
}

int getRed (struct color c)
{
	return c.red;
}

int equal_color (struct color color1, struct color color2)
{
	if(color1.blue == color2.blue && color1.green == color2.green && color1.red == color2.red)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

struct color brighter (struct color c)
{
	if(c.blue == 0 && c.green == 0 && c.red == 0)
	{
		c.blue = c.green = c.red = 3;
		return c;
	}
	
	if(c.blue > 0 && c.blue < 3)
	{
		c.blue = 3;
	}
	
	if(c.green > 0 && c.green < 3)
	{
		c.green = 3;
	}
	
	if(c.red > 0 && c.red < 3)
	{
		c.red = 3;
	}
	
	c.blue /= 0.7;
	c.green /= 0.7;
	c.red /= 0.7;
	
	if(c.blue > 255)
	{
		c.blue = 255;
	}
	if(c.green > 255)
	{
		c.green = 255;
	}
	if(c.red > 255)
	{
		c.red = 255;
	}
	
	return c;
}

struct color darker (struct color c)
{
	c.blue *= 0.7;
	c.green *= 0.7;
	c.red *= 0.7;
	
	return c;
}
