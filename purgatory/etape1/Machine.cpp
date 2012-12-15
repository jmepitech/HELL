#include <iostream>
#include "Machine.hpp"

void initGStateTable()
{
  gStateTable[S0][0] = S1;
  gStateTable[S0][1] = STATE_ERROR;
  gStateTable[S1][2] = STATE_ERROR;
  gStateTable[S1][3] = STATE_ERROR;
  gStateTable[S1][4] = STATE_ERROR;
  gStateTable[S1][5] = STATE_ERROR;
  gStateTable[S1][6] = STATE_ERROR;
  gStateTable[S1][7] = STATE_ERROR;
 
  gStateTable[S1][0] = STATE_ERROR;
  gStateTable[S1][1] = S2;
  gStateTable[S1][2] = STATE_ERROR;
  gStateTable[S1][3] = STATE_ERROR;
  gStateTable[S1][4] = STATE_ERROR;
  gStateTable[S1][5] = STATE_ERROR;
  gStateTable[S1][6] = STATE_ERROR;
  gStateTable[S1][7] = STATE_ERROR;

  gStateTable[S2][0] = STATE_ERROR;
  gStateTable[S2][1] = STATE_ERROR;
  gStateTable[S2][2] = S3;
  gStateTable[S2][3] = STATE_ERROR;
  gStateTable[S2][4] = STATE_ERROR;
  gStateTable[S2][5] = STATE_ERROR;
  gStateTable[S2][6] = STATE_ERROR;
  gStateTable[S2][7] = STATE_ERROR;

  gStateTable[S3][0] = STATE_ERROR;
  gStateTable[S3][1] = STATE_ERROR;
  gStateTable[S3][2] = STATE_ERROR;
  gStateTable[S3][3] = S4;
  gStateTable[S3][4] = STATE_ERROR;
  gStateTable[S3][5] = STATE_ERROR;
  gStateTable[S3][6] = STATE_ERROR;
  gStateTable[S3][7] = STATE_ERROR;

  gStateTable[S4][0] = STATE_ERROR;
  gStateTable[S4][1] = STATE_ERROR;
  gStateTable[S4][2] = STATE_ERROR;
  gStateTable[S4][3] = STATE_ERROR;
  gStateTable[S4][4] = S5;
  gStateTable[S4][5] = STATE_ERROR;
  gStateTable[S4][6] = STATE_ERROR;
  gStateTable[S4][7] = STATE_ERROR;

  gStateTable[S5][0] = STATE_ERROR;
  gStateTable[S5][1] = STATE_ERROR;
  gStateTable[S5][2] = STATE_ERROR;
  gStateTable[S5][3] = STATE_ERROR;
  gStateTable[S5][4] = STATE_ERROR;
  gStateTable[S5][5] = S6;
  gStateTable[S5][6] = STATE_ERROR;
  gStateTable[S5][7] = STATE_ERROR;

  gStateTable[S6][0] = STATE_ERROR;
  gStateTable[S6][1] = STATE_ERROR;
  gStateTable[S6][2] = STATE_ERROR;
  gStateTable[S6][3] = STATE_ERROR;
  gStateTable[S6][4] = STATE_ERROR;
  gStateTable[S6][5] = S7;
  gStateTable[S6][6] = STATE_ERROR;
  gStateTable[S6][7] = STATE_ERROR;

  gStateTable[S7][0] = STATE_ERROR;
  gStateTable[S7][1] = STATE_ERROR;
  gStateTable[S7][2] = STATE_ERROR;
  gStateTable[S7][3] = STATE_ERROR;
  gStateTable[S7][4] = STATE_ERROR;
  gStateTable[S7][5] = STATE_ERROR;
  gStateTable[S7][6] = STATE_ERROR;
  gStateTable[S7][7] = STATE_ERROR;
}

void initGActionTable()
{

  gActionTable[S0][0] = MA;
  gActionTable[S0][1] = ACTION_ERROR;
  gActionTable[S1][2] = ACTION_ERROR;
  gActionTable[S1][3] = ACTION_ERROR;
  gActionTable[S1][4] = ACTION_ERROR;
  gActionTable[S1][5] = ACTION_ERROR;
  gActionTable[S1][6] = ACTION_ERROR;
  gActionTable[S1][7] = ACTION_ERROR;
 
  gActionTable[S1][0] = ACTION_ERROR;
  gActionTable[S1][1] = MA;
  gActionTable[S1][2] = ACTION_ERROR;
  gActionTable[S1][3] = ACTION_ERROR;
  gActionTable[S1][4] = ACTION_ERROR;
  gActionTable[S1][5] = ACTION_ERROR;
  gActionTable[S1][6] = ACTION_ERROR;
  gActionTable[S1][7] = ACTION_ERROR;

  gActionTable[S2][0] = ACTION_ERROR;
  gActionTable[S2][1] = ACTION_ERROR;
  gActionTable[S2][2] = MA;
  gActionTable[S2][3] = ACTION_ERROR;
  gActionTable[S2][4] = ACTION_ERROR;
  gActionTable[S2][5] = ACTION_ERROR;
  gActionTable[S2][6] = ACTION_ERROR;
  gActionTable[S2][7] = ACTION_ERROR;

  gActionTable[S3][0] = ACTION_ERROR;
  gActionTable[S3][1] = ACTION_ERROR;
  gActionTable[S3][2] = ACTION_ERROR;
  gActionTable[S3][3] = MA;
  gActionTable[S3][4] = ACTION_ERROR;
  gActionTable[S3][5] = ACTION_ERROR;
  gActionTable[S3][6] = ACTION_ERROR;
  gActionTable[S3][7] = ACTION_ERROR;

  gActionTable[S4][0] = ACTION_ERROR;
  gActionTable[S4][1] = ACTION_ERROR;
  gActionTable[S4][2] = ACTION_ERROR;
  gActionTable[S4][3] = ACTION_ERROR;
  gActionTable[S4][4] = MA;
  gActionTable[S4][5] = ACTION_ERROR;
  gActionTable[S4][6] = ACTION_ERROR;
  gActionTable[S4][7] = ACTION_ERROR;

  gActionTable[S5][0] = ACTION_ERROR;
  gActionTable[S5][1] = ACTION_ERROR;
  gActionTable[S5][2] = ACTION_ERROR;
  gActionTable[S5][3] = ACTION_ERROR;
  gActionTable[S5][4] = ACTION_ERROR;
  gActionTable[S5][5] = MA;
  gActionTable[S5][6] = ACTION_ERROR;
  gActionTable[S5][7] = ACTION_ERROR;

  gActionTable[S6][0] = ACTION_ERROR;
  gActionTable[S6][1] = ACTION_ERROR;
  gActionTable[S6][2] = ACTION_ERROR;
  gActionTable[S6][3] = ACTION_ERROR;
  gActionTable[S6][4] = ACTION_ERROR;
  gActionTable[S6][5] = MA;
  gActionTable[S6][6] = ACTION_ERROR;
  gActionTable[S6][7] = ACTION_ERROR;

  gActionTable[S7][0] = HR;
  gActionTable[S7][1] = HR;
  gActionTable[S7][2] = HR;
  gActionTable[S7][3] = HR;
  gActionTable[S7][4] = HR;
  gActionTable[S7][5] = HR;
  gActionTable[S7][6] = HR;
  gActionTable[S7][7] = HR;
}


void	toCompare(char *reference, char *entree)
{
  int	i;
  int	pos;
  eState etat = S0;
  eAction action;

  for (i = 0, pos = 0; entree[i] && reference[pos]; i++)
    {
      std::cout << "Token lut ===> < " <<entree[i] << " >"<< std::endl;
      if (entree[i] == reference[pos])
	{
	  etat = gStateTable[etat][pos];
	  if (etat == STATE_ERROR)
	    {
	      std::cout << "error" << std::endl;
	      etat = S0;
	      pos = 0;
	    }
	  else
	    {
	      std::cout << "=== passage a l etat suivant === " << std::endl;
	      pos++;
	    }
	  action = gActionTable[etat][pos];
	  std::cout << "L action ::" << action << std::endl;
	}
      else
	{
	  std::cout << "-----------------" << std::endl;
	  std::cout << "token non valide" << std::endl;
	  std::cout << "-----------------" << std::endl;
	}
    }
}




int main(int ac, char **av)
{
  char reference[7] = {'m', 'e', 'c','h','a', 'n','t'};
  initGStateTable();  
  initGActionTable();
  if (ac > 1)
    {
      toCompare(reference, av[1]);
    }

}
