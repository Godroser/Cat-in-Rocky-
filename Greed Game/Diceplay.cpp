#include <stdlib.h>
#include "Diceplay.h"
#include <time.h>


diceplay::diceplay()
{
	for (int i = 1; i <= 5; i++)
		a[i - 1] = -1;
	n = -1;
}

void diceplay::reset()
{
	for (int i = 1; i <= 5; i++)
		a[i - 1] = -1;
	n = -1;
}

void diceplay::throwdice(int n)
{
	srand((unsigned)time(NULL));
	for (int i = 1; i <= n; i++)
		a[i - 1] = rand() % 6 + 1;
	for (int i = n + 1; i <= 5; i++)
		a[i - 1] = -1;
}