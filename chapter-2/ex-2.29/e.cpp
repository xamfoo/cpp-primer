int main()
{
  int *p1, *const p2 = 0;

  p2 = p1; // Illegal because const p2 cannot be re-assigned

  return 0;
}
