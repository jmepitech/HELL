#ifndef __MACHINE_HPP__
#define __MACHINE_HPP__
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

eState 		gStateTable[7][7];
eAction		gActionTable[7][7];

#endif
