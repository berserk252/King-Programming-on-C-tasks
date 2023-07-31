#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>
#define DWORD unsigned long
#define WORD short
#define BYTE char

union {
	
	struct{
		DWORD EAX, EBX, ECX, EDX;
	}dword;
	
	struct {
		WORD ax, bx, cx, dx;
	}word;
	
	struct{
		BYTE al, ah, bl, bh, cl, ch, dl, dh;
	}byte;
}regs;

int main( void )
{
	union regs;
	
	
	regs.byte.ah = 0x12;
	regs.byte.al = 0x34;
	
	printf("%hx", regs.dword.EAX);
	return 0;
}

