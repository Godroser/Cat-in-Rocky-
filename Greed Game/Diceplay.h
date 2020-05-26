#ifndef Diceplay
#define Diceplay

class diceplay
{
public:
	diceplay();  
	void reset();   //重置筛子
	void throwdice(int n);   //掷色子
	int a[5], n;
	
};

#endif