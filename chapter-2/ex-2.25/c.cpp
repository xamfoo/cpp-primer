#include <cassert>

int main()
{
  int* ip, ip2;

  // ip has an int* type
  int i = 22;
  ip = &i;
  assert(*ip == 22);

  // ip2 has an int type
  ip2 = 33;
  assert(ip2 == 33);

  return 0;
}
