#include <iostream>
#include "Machine.hpp"

eState gStateTable[8][8] = { 
    {S1, STATE_ERROR, STATE_ERROR, STATE_ERROR, STATE_ERROR, STATE_ERROR, STATE_ERROR, STATE_ERROR},
    {STATE_ERROR, S2, STATE_ERROR, STATE_ERROR, STATE_ERROR, STATE_ERROR, STATE_ERROR, STATE_ERROR},
    {STATE_ERROR, STATE_ERROR, S3, STATE_ERROR, STATE_ERROR, STATE_ERROR, STATE_ERROR, STATE_ERROR},
    {STATE_ERROR, STATE_ERROR, STATE_ERROR, S4, STATE_ERROR, STATE_ERROR, STATE_ERROR, STATE_ERROR},
    {STATE_ERROR, STATE_ERROR, STATE_ERROR, STATE_ERROR, S5, STATE_ERROR, STATE_ERROR, STATE_ERROR},
    {STATE_ERROR, STATE_ERROR, STATE_ERROR, STATE_ERROR, STATE_ERROR, S6, STATE_ERROR, STATE_ERROR},
    {STATE_ERROR, STATE_ERROR, STATE_ERROR, STATE_ERROR, STATE_ERROR, STATE_ERROR, S7, STATE_ERROR},
    {STATE_ERROR, STATE_ERROR, STATE_ERROR, STATE_ERROR, STATE_ERROR, STATE_ERROR, STATE_ERROR, STATE_ERROR},
  };

eAction  gActionTable[8][8] = { 
    {MA, ACTION_ERROR, ACTION_ERROR, ACTION_ERROR, ACTION_ERROR, ACTION_ERROR, ACTION_ERROR, ACTION_ERROR},
    {ACTION_ERROR, MA, ACTION_ERROR, ACTION_ERROR, ACTION_ERROR, ACTION_ERROR, ACTION_ERROR, ACTION_ERROR},
    {ACTION_ERROR, ACTION_ERROR, MA, ACTION_ERROR, ACTION_ERROR, ACTION_ERROR, ACTION_ERROR, ACTION_ERROR},
    {ACTION_ERROR, ACTION_ERROR, ACTION_ERROR, MA, ACTION_ERROR, ACTION_ERROR, ACTION_ERROR, ACTION_ERROR},
    {ACTION_ERROR, ACTION_ERROR, ACTION_ERROR, ACTION_ERROR, MA, ACTION_ERROR, ACTION_ERROR, ACTION_ERROR},
    {ACTION_ERROR, ACTION_ERROR, ACTION_ERROR, ACTION_ERROR, ACTION_ERROR, MA, ACTION_ERROR, ACTION_ERROR},
    {ACTION_ERROR, ACTION_ERROR, ACTION_ERROR, ACTION_ERROR, ACTION_ERROR, ACTION_ERROR, MA, ACTION_ERROR},
    {HR,           HR,           HR,           HR,           HR,           HR,           HR, HR},
};


void	printAction(eAction act)
{
  if (act == MA)
    std::cout << "MOOVE APEND" << std::endl;  
  else if (act == HR)
    std::cout << "HALT RESET" << std::endl;
  else
    std::cout << "STATE_ERROR" << std::endl;
    
}

void	toCompare(char *reference, char *entree)
{
  int	i;
  eState etat = S0;
  eAction action;

  for (i = 0; entree[i] && reference[etat]; i++)
    {
      std::cout << "Token lut ===> < " << entree[i] << " >" << std::endl;
      if (entree[i] == reference[etat])
	{ 
      	  action = gActionTable[etat][etat];
	  printAction(action);
	  std::cout << "=== passage a l etat suivant === " << std::endl;
	  etat = gStateTable[etat][etat];
	}
      else
	{
	  std::cout << "-----------------" << std::endl;
	  std::cout << "token non valide" << std::endl;
	  action = ACTION_ERROR;
	  printAction(action);
	  std::cout << "-----------------" << std::endl;
	}
    }
}




int main(int ac, char **av)
{
  char reference[7] = {'m', 'e', 'c','h','a', 'n','t'};
  if (ac > 1)
    {
      toCompare(reference, av[1]);
    }

}
