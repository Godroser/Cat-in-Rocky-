#include "Player.h"

player::player()
{
	isenter = false;
	score = 0;
	score_temp = 0;
}  

void reset_isenter(player& play)
{
	play.isenter = true;
}

void reset_score(player& play,int sscore)
{
	play.score += sscore;
}

bool player::return_isenter()
{
	return isenter;
}

int player::return_score()
{
	return score;
}