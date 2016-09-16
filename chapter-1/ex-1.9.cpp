// Exercise 1.9: Write a program that uses a while to sum the
// numbers from 50 to 100.
#include <iostream>
#include <cassert>

int main()
{
  int sum = 0, i = 50;

  while (i <= 100) {
    sum += i;
    ++i;
  }

  assert(sum == 3825);

  std::cout << "Sum of 50 to 100 is " << sum << std::endl;

  return 0;
}
