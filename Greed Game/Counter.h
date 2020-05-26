#ifndef Counter
#define Counter
#include "Diceplay.h"

class counter :public diceplay
{
private:
	int ALU;   //积分累加器
	
public:
	int num_1, num_2, num_3, num_4, num_5, num_6;
	int score;     //得分
	int n;         //可=可以掷色子个数
	counter();
	void reset_counter();
};

#endif
