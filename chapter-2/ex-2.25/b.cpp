#include <cassert>

int main()
{
  int i, *ip = 0;

  // i has an int type
  i = 42;
  assert(i == 42);

  // ip has an int* type
  ip = &i;
  assert(*ip == 42);

  return 0;
}
