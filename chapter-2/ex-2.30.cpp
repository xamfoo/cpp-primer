int main()
{
  int i = 0;

  // v2: top-level const int
  const int v2 = 0;

  // v1: non-const int
  int v1 = v2;

  // p1: non-const int pointer
  // r1: non-const int reference
  int *p1 = &v1, &r1 = v1;

  // p2: non-const pointer to low-level const int
  // p3: top-level const pointer to low-level const int
  // r2: top-level const int reference
  const int *p2 = &v2, *const p3 = &i, &r2 = v2;

  return 0;
}
