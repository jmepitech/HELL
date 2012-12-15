
enum eState
{
	S0,
	S1,
	S2,
	S3,
	S4,
	S5,
	S6,
	S7,
	STATE_ERROR
};

enum eAction
{
	MA,
	HR,
	ACTION_ERROR
};

extern eState 		gStateTable[7][7];
extern eAction		gActionTable[7][7];
