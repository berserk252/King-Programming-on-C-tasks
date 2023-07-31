//poker.c
/* Classifies a poker hand */
#include <stdbool.h> /* C99 only */
#include <stdio.h>
#include <stdlib.h>
#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

int hand[2][5] = {0};

bool straight, flush, four, three;
int pairs; 
void read_cards(void);
void analyze_hand(void);
void print_result(void);

int main(void) {
	
	for (;;)
	{
		read_cards();
		analyze_hand();
		print_result();
	}
}

void read_cards(void){
	char ch, rank_ch, suit_ch;
	int rank, suit;
	bool bad_card;
	int cards_read = 0;
	
	for (rank = 0; rank < 2; rank++) 
	{
		for(suit = 0; suit < 5; suit++)
			hand[rank][suit] = 0;
	}
		
	while (cards_read < NUM_CARDS) {
		bad_card = false;
		printf("Enter a card: ");
		rank_ch = getchar();
		switch (rank_ch) 
		{
			case '0': exit(EXIT_SUCCESS);
			case '2': rank = 0; break;
			case '3': rank = 1; break;
			case '4': rank = 2; break;
			case '5': rank = 3; break;
			case '6': rank = 4; break;
			case '7': rank = 5; break;
			case '8': rank = 6; break;
			case '9': rank = 7; break;
			case 't': case 'T': rank = 8; break;
			case 'j': case 'J': rank = 9; break;
			case 'q': case 'Q': rank = 10; break;
			case 'k': case 'K': rank = 11; break;
			case 'a': case 'A': rank = 12; break;
			default: bad_card = true;
		}
		
	suit_ch = getchar();
	switch (suit_ch) 
	{
		case 'c': case 'C': suit = 0; break;
		case 'd': case 'D': suit = 1; break;
		case 'h': case 'H': suit = 2; break;
		case 's': case 'S': suit = 3; break;
		default: bad_card = true;
	}
	
	while ((ch = getchar()) != '\n')
		if (ch != ' ') bad_card = true;
		
	if (bad_card)
		printf("Bad card; ignored.\n");
	else if (hand[0][cards_read] && hand[1][cards_read])
		printf("Duplicate card; ignored.\n");
	else {
		hand[1][cards_read] = suit;
		hand[0][cards_read] = rank;
		cards_read++;
	}
}
}

void analyze_hand(void){
	int num_consec = 0;
	int rank, suit, counter = 0;
	int pair[12] = {0};
	straight = false;
	flush = false;
	four = false;
	three = false;
	pairs = 0;
	
	for (suit = 0; suit < 5; suit++)
		if (hand[1][suit] == hand[1][0])
			counter++;
			
		if(counter == 5)
		{
			flush = true;
		}	
	/* check for straight */
	rank = 0;

	for (; rank < 4 && hand[0][rank] + 1 == hand[0][rank + 1]; rank++)
		num_consec++;
				
	if (num_consec == NUM_CARDS - 1) {
		straight = true;
		return;
	}
	/* check for 4-of-a-kind, 3-of-a-kind, and pairs */
	counter = 0;
	for (rank = 0; rank < 5; rank++) {
		switch(hand[0][rank])
		{
			case 0: pair[0]++; break;
			case 1: pair[1]++; break;
			case 2: pair[2]++; break;
			case 3: pair[3]++; break;
			case 4: pair[4]++; break;
			case 5: pair[5]++; break;
			case 6: pair[6]++; break;
			case 7: pair[7]++; break;
			case 8: pair[8]++; break;
			case 9: pair[9]++; break;
			case 10: pair[10]++; break;
			case 11: pair[11]++; break;
		}
	}
	
	for(rank = 0; rank < 12; rank++)
	{
		if(pair[rank] == 4)
		{
			four = true;
		}
		
		if(pair[rank] == 3)
		{
			three = true;
		}
		
		if(pair[rank] == 2)
		{
			pairs++;
		}
	}
}

void print_result(void){
	if (straight && flush)
		printf("Straight flush");
	else if (four) 
		printf("Four of a kind");
	else if (three && pairs == 1) 
		printf("Full house");
	else if (flush) 
		printf("Flush");
	else if (straight) 
		printf("Straight");
	else if (three) 
		printf("Three of a kind");
	else if (pairs == 2) 
		printf("Two pairs");
	else if (pairs == 1) 
		printf("Pair");
	else 
		printf("High card");
	printf("\n\n");
}
