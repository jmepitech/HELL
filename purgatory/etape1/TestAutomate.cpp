#include "Machine.hpp"

void	printAction(eAction act)
{
  if (act == MA)
    std::cout << "MOOVE APEND" << std::endl;  
  else if (act == HR)
    std::cout << "HALT RESET" << std::endl;
  else
    std::cout << "STATE_ERROR" << std::endl;
    
}

void	toCompare(const std::string& reference, char *entree)
{
  int		i;
  eState	etat = S0;
  eState       	etatTemp;
  int		alphaPos;

  for (i = 0; entree[i]; i++)
    {
      std::cout << "token read " << entree[i] << std::endl;
      alphaPos = reference.find(entree[i]);
      etatTemp = gStateTable[etat][alphaPos];
      std::cout << "etat suivant = " << etatTemp << std::endl;
      if (etatTemp == STATE_ERROR)
	std::cout << "State error" << std::endl;
      else 
	{
	  printAction(gActionTable[etat][alphaPos]);
	  std::cout << "passage a l etat " << etatTemp << std::endl;
	  etat = etatTemp;
	}
    }
}




int main(int ac, char **av)
{
  std::string alpha("mechant");
  if (ac > 1)
      toCompare(alpha, av[1]);
}

