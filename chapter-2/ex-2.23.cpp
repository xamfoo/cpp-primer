// Exercise 2.23: Given a pointer p, can you determine whether p points to a
// valid object? If so, how? If not, why not?

#include <cassert>
#include <iostream>

int main()
{
  // We can determine if p is a null pointer by checking its truthiness.
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

  // But we cannot determine if p is pointing to a valid object when it is not
  // a null pointer.

  // An example is when p is an array pointer is pointing beyond the array size.
  // Given just the pointer, we are not sure which element of the array it is
  // pointing to and whether that element is inside the array.
  int arr[] = {1};
  int *arr_ptr = arr + 2;

  std::cout
    << "Indeterminate value of pointer to element out of array bounds: "
    << *arr_ptr
    << std::endl;

  // Another example is p pointing to a variable which is no longer in scope.
  // The pointer will be pointing to an invalid memory location but we are
  // unable to check if that is the case.
  int *ptr = 0;
  for (int i = 42; i == 42; i += 1) {
    ptr = &i;
  }

  std::cout
    << "Indeterminate value of pointer to variable out of scope: "
    << *ptr
    << std::endl;

  return 0;
}
