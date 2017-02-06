#include <cassert>

bool a(int *p)
{
  // Evaluate if pointer p is not a null reference
  if (p) {
    return true;
  }

  return false;
}

bool b(int *p)
{
  // Evaluate if dereferenced integer value of p is truthy
  if (*p) {
    return true;
  }

  return false;
}

int main()
{
  int i0 = 0;
  int i1 = 1;
  int *p_null = 0;
  int *p0 = &i0;
  int *p1 = &i1;
  
  assert(!a(p_null));
  assert(a(p1));
  assert(!b(p0));
  assert(b(p1));

  return 0;
}
