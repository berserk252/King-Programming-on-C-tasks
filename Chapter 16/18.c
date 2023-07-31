#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>

enum Piece{
	SPACE,
	PAWN,
	ROOK,
	KNIGHT,
	BISHOP,
	QUEEN,
	KING	
};

enum Color{
	WHITE,
	BLACK
};

struct Square{
	enum Piece;
	enum Color;
};

int main( void )
{
	struct Square board[8][8] = {
		{
			BISHOP,
			WHITE	
		},
		{
			KNIGHT,
			WHITE	
		},
		{
			ROOK,
			WHITE	
		},
		{
			KING,
			WHITE	
		},
		{
			QUEEN,
			WHITE	
		},
		{
			ROOK,
			WHITE	
		},
		{
			KNIGHT,
			WHITE	
		},
		{
			BISHOP,
			WHITE	
		},	
		[1][0] = {
			PAWN,
			WHITE	
		},
		{
			PAWN,
			WHITE	
		},
		{
			PAWN,
			WHITE	
		},
		{
			PAWN,
			WHITE	
		},
		{
			PAWN,
			WHITE	
		},
		{
			PAWN,
			WHITE	
		},
		{
			PAWN,
			WHITE	
		},
		{
			PAWN,
			WHITE	
		},
		[6][0] = {
			PAWN,
			BLACK	
		},
		{
			PAWN,
			BLACK	
		},
		{
			PAWN,
			BLACK	
		},
		{
			PAWN,
			BLACK	
		},
		{
			PAWN,
			BLACK	
		},
		{
			PAWN,
			BLACK	
		},
		{
			PAWN,
			BLACK	
		},
		{
			PAWN,
			BLACK	
		},
		[7][0] = {
			BISHOP,
			BLACK	
		},
		{
			KNIGHT,
			BLACK	
		},
		{
			ROOK,
			BLACK	
		},
		{
			KING,
			BLACK	
		},
		{
			QUEEN,
			BLACK	
		},
		{
			ROOK,
			BLACK	
		},
		{
			KNIGHT,
			BLACK	
		},
		{
			BISHOP,
			BLACK	
		}	
	};
	
	return 0;
}

