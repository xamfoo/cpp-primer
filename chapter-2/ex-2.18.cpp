#include <iostream>

int main ()
{
  int a = 1, b = 3, *ptr = &a;

  std::cout << "1 = " << *ptr << std::endl;

  ptr = &b;
  std::cout << "3 = " << *ptr << std::endl;

  *ptr = 42;
  std::cout << "42 = " << *ptr << std::endl;

  return 0;
}
