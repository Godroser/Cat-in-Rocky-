#ifndef Control
#define Control

class control
{
public:
	bool isend;   //游戏是否结束，是否有玩家积分达标
	bool isstop;  //本轮游戏玩家是否停止
	int n;       //可以掷色子的数量
	control();
};

#endif
