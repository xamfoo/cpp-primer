int main()
{
  int *p1;
  const int ic = 0;

  // Illegal: p1 pointer to non-const int cannot be assigned the address of a
  // const int
  p1 = &ic;

  return 0;
}
