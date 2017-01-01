#include <iostream>
#include "../Sales_item.h"

int main()
{
  Sales_item prevItem, currItem, nextItem;
  int count = 1;

  if (!(std::cin >> currItem))
    return -1;

  while (std::cin >> nextItem) {
    if (currItem.isbn() == nextItem.isbn()) {
      count += 1;
    }
    else {
      std::cout << count << "x " << currItem.isbn() << std::endl;
      count = 1;
      currItem = nextItem;
    }
  }

  std::cout << count << "x " << currItem.isbn() << std::endl;

  return 0;
}
