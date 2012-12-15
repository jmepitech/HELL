#include "Function.hpp"
#include <iostream>
#include <string>


int	test1(char c)
{
  std::cout <<"test 1 : " <<  c << std::endl; 
}


int main()
{
  Function<int(char)> firstTest = &test1;
  firstTest('c');
  return (0);
}
