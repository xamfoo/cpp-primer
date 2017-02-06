// Exercise 2.20: What does the following program do?

// Answer: Creates a pointer to i = 42 and assigns the square of it via the
// pointer.

#include <iostream>

int main ()
{
  int i = 42;
  int *p1 = &i;
  *p1 = *p1 * *p1;

  std::cout << *p1 << '\n'
            << i << std::endl;

  return 0;
}
