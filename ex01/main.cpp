#include "iter.hpp"

int main( void )
{
  int intArray[] = {1, 2, 3, 4, 5};
  char charArray[] = {'a', 'b', 'c', 'd', 'e'};
    std::cout << "Int array: ";
    iter(intArray, 5, print<int>);
    std::cout << std::endl;

    std::cout << "Char array: ";
    iter(charArray, 5, print<char>);
    std::cout << std::endl;
  return 0;
}
