int main()
{
  const int *const p3 = 0;
  const int ic = 1;

  p3 = &ic; // Illegal beacuse const p3 cannot be re-assigned

  return 0;
}
