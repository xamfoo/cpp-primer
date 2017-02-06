#include <iostream>

int main()
{
  // But when a pointer is not null, we cannot determine that it is pointing to
  // a valid object.

  // An example is when an array pointer is pointing beyond the array size.
  // Given just the pointer, we are not sure which element of the array it is
  // pointing to and whether it is an element inside the array.
  int arr[] = {1};
  int *arr_ptr = arr + 2;

  std::cout << *arr_ptr << std::endl;

  // Another example would be a pointer pointing to a variable which is no
  // longer is in scope. The pointer will be pointing to an invalid memory
  // location but we cannot check if that is the case.
  int *ptr = 0;
  for (int i = 42; i == 42; i += 1) {
    ptr = &i;
  }

  std::cout << *ptr << std::endl;

  return 0;
}
