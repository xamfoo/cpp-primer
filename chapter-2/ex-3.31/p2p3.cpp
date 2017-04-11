int main()
{
  int i = 0;
  const int v2 = 0;
  int v1 = v2;
  int *p1 = &v1, &r1 = v1;
  const int *p2 = &v2, *const p3 = &i, &r2 = v2;

  // Legal: Assigning non-const int pointer p3 to non-const int pointer p2
  p2 = p3;

  return 0;
}
