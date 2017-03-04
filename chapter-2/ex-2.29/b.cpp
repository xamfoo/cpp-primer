int main()
{
  int *p1;
  const int *const p3 = nullptr;

  // Illegal because cannot assign p3 is a pointer to a const int to p1 pointer
  // to a non-const int
  p1 = p3;

  return 0;
}
