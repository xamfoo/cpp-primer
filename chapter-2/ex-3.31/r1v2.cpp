int main()
{
  int i = 0;
  const int v2 = 0;
  int v1 = v2;
  int *p1 = &v1, &r1 = v1;
  const int *p2 = &v2, *const p3 = &i, &r2 = v2;

  // Legal: r1 reference v1 non-const int which can be assigned value
  // of v2 const int
  r1 = v2;

  return 0;
}
