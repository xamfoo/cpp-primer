#include <iostream>

int main()
{
  int num1, num2, tmp;

  std::cout << "Enter 2 numbers: ";
  std::cin >> num1 >> num2;

  if (num2 < num1) {
    tmp = num2;
    num2 = num1;
    num1 = tmp;
  }

  while (num2 >= num1) {
    std::cout << num1 << std::endl;
    ++num1;
  }

  std::cout << std::endl;

  return 0;
}
