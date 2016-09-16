// Exercise 1.11: Write a program that prompts the user for two integers. Print
// each number in the range specified by those two integers.
#include <iostream>

int main()
{
  int num1, num2;

  std::cout << "Enter 2 numbers: ";
  std::cin >> num1 >> num2;

  while (num2 >= num1) {
    std::cout << num1 << std::endl;
    ++num1;
  }

  std::cout << std::endl;

  return 0;
}
