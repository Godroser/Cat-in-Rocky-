#ifndef Player
#define Player

class player
{
private:
	
public:
	int score_temp;   //本轮得分
	void friend reset_isenter(player&);
	void friend reset_score(player&,int sscore);
	player();       
	int score;     //总得分
	bool isenter;
	bool return_isenter();
	int return_score();
};

#endif