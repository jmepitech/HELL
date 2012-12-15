#include <iostream>
#include <string>
#include "FunctionSignature.hpp"

void	test1(std::string  Test1)
{
  std::cout <<"le premier test : " << Test1 << std::endl;
}

void    test2(std::string  Test2, int intTest2)
{
  std::cout <<"le deuxieme test : " << Test2 << "avec un int : "<< intTest2 << std::endl;
}

void    test3(std::string  Test3, std::string lala, int pouet)
{
  std::cout <<"le troisieme test avec une string : " << Test3 << " une autre string : " << lala << " puis un int " << pouet << std::endl;
}

int    test4(std::string  Test1, std::string  Test2, std::string  Test3, std::string  Test4)
{
  std::cout <<"le dernier  test avec que des strings mais renvoi un int ^^ : " << Test1 << Test2 << Test3 << Test4 << std::endl;
  return (4242);
}


int main(int ac, char **av)
{
  int ret;
  FunctionSignature<void (std::string)>::type monTest1 = &test1;
  FunctionSignature<void (std::string, int)>::type monTest2 = &test2;
  FunctionSignature<void (std::string, std::string, int)>::type monTest3 = &test3;
  FunctionSignature<int (std::string, std::string, std::string, std::string)>::type monTest4 = &test4;
  monTest1("coucou");
  monTest2("wesh wesh", 666);
  monTest3("hahahaha","c est rigolo",  42);
  ret = monTest4("vive","les","rush","pouri");
  std::cout << "le retour du test4 : " << ret << std::endl; 
  
  return (0);
}
