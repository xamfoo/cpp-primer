// Exercise 2.1: What are the differences between int, long, long long, and
// short? Between an unsigned and a signed type? Between a float and a double?

#include <iostream>
#include <limits>

int main()
{
  std::cout << "int " << sizeof(int) << " "
            << std::numeric_limits<int>::min() << " "
            << std::numeric_limits<int>::max() << std::endl;
  std::cout << "long " << sizeof(long) << " "
            << std::numeric_limits<long>::min() << " "
            << std::numeric_limits<long>::max() << std::endl;
  std::cout << "long long " << sizeof(long long) << " "
            << std::numeric_limits<long long>::min() << " "
            << std::numeric_limits<long long>::max() << std::endl;
  std::cout << "short " << sizeof(short) << " "
            << std::numeric_limits<short>::min() << " "
            << std::numeric_limits<short>::max() << std::endl;

  std::cout << "unsigned int " << sizeof(unsigned int) << " "
            << std::numeric_limits<unsigned int>::min() << " "
            << std::numeric_limits<unsigned int>::max() << std::endl;

  std::cout << "float " << sizeof(float) << " "
            << std::numeric_limits<float>::min() << " "
            << std::numeric_limits<float>::max() << std::endl;
  std::cout << "double " << sizeof(double) << " "
            << std::numeric_limits<double>::min() << " "
            << std::numeric_limits<double>::max() << std::endl;

  return 0;
}
