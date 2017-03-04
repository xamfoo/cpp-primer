int main()
{
  const int ic = 1;
  const int *const p3 = 0;

  ic = *p3; // Illegal because const ic cannot be re-assigned

  return 0;
}
