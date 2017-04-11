int main()
{
  int i = 0;
  const int v2 = 0;
  int v1 = v2;
  int *p1 = &v1, &r1 = v1;
  const int *p2 = &v2, *const p3 = &i, &r2 = v2;

  // Illegal: Assigning pointer to low-level const int p3 to pointer to
  // non-const int p1
  p1 = p3;

  return 0;
}
