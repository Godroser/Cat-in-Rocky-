#include "Counter.h"

counter::counter()
{
	score = 0;
	n = 5;
	num_1 = num_2 = num_3 = num_4 = num_5 = num_6 = 0;
}

void counter::reset_counter()
{
	score = 0;
	num_1 = num_2 = num_3 = num_4 = num_5 = num_6 = 0;
}