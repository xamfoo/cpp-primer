// Exercise 1.13: Rewrite the exercises from § 1.4.1 (p. 13) using for loops.
//
// #include <iostream>
// 
// int main()
// {
//     int sum = 0, val = 1;
//     // keep executing the while as long as val is less than or equal to 10
//     while (val <= 10) {
//         sum += val;  // assigns sum + val to sum
//         ++val;       // add 1 to val
//     }
//     std::cout << "Sum of 1 to 10 inclusive is " 
//               << sum << std::endl;
// 
// 	return 0;
// }
#include <iostream>
#include <cassert>

int main()
{
  int sum = 0;

  for (int i = 1; i <= 10; ++i)
    sum += i;

  assert(sum == 55);

  std::cout << "Sum of 1 to 10 inclusive is " 
            << sum << std::endl;
}
