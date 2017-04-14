int main()
{
  // Method 1: Use 0 directly instead of referring to null
  int null1 = 0, *p1 = 0;

  // Method 2: Use nullptr instead of referring to null
  int null2 = 0, *p2 = nullptr;

  // Method 3: Assign address of null to p
  int null3 = 0, *p3 = &null3;

  return 0;
}
