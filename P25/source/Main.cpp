#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int wD[][13]);
void deal(const int wD[][13], const char* wF[], const char* wS[]);

int main()
{
	const char *suit[4] = { "Hearts","Diamonds","Clubs","Spades" };
	const char* face[13] = { 
		"Ace","Deuce","Three","Four","Five","Six","Seven",
		"Eight","Nine","Ten","Jack","Queen","King"
	};
	int d[4][13] = { 0 };
	srand(time(0));
	shuffle(d);
	deal(d, face, suit);
	system("PAUSE");
}

void shuffle(int wD[][13])
{
	int row, col, card;
	for (card = 1; card <= 52; card++)
	{
		do
		{
			row = rand() % 4;
			col = rand() % 13;
		} while (wD[row][col] != 0);
		wD[row][col] = card;
	}
}

void deal(const int wD[][13], const char* wF[], const char* wS[])
{
	int card, row, col;
	for (card = 1; card <= 52; card++)
	{
		for (row = 0; row <= 3; row++)
		{
			for (col = 0; col <= 12; col++)
			{
				if (wD[row][col] == card)
				{
					printf("%5s of %-8s%c", wF[col], wS[row], card % 2 == 0 ? '\n' : '\t');
				}
			}
		}
	}
}