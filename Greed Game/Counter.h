#ifndef Counter
#define Counter
#include "Diceplay.h"

class counter :public diceplay
{
private:
	int ALU;   //�����ۼ���
	
public:
	int num_1, num_2, num_3, num_4, num_5, num_6;
	int score;     //�÷�
	int n;         //��=������ɫ�Ӹ���
	counter();
	void reset_counter();
};

#endif
