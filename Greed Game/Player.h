#ifndef Player
#define Player

class player
{
private:
	
public:
	int score_temp;   //���ֵ÷�
	void friend reset_isenter(player&);
	void friend reset_score(player&,int sscore);
	player();       
	int score;     //�ܵ÷�
	bool isenter;
	bool return_isenter();
	int return_score();
};

#endif