// Exercise 2.23: Given a pointer p, can you determine whether p points to a
// valid object? If so, how? If not, why not?

#include <cassert>

int main()
{
  // We know that we can determine p is a null pointer or not checking its
  // truthiness.
  int i0 = 0;
  int i1 = 1;
  int *p_null1 = 0;
  int *p_null2 = nullptr;
  int *p0 = &i0;
  int *p1 = &i1;

  assert(!p_null1);
  assert(!p_null2);
  assert(p0);
  assert(p1);

  // But when a pointer is not null, we cannot determine that it is pointing to
  // a valid object.
  
  return 0;
}
