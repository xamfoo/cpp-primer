int main()
{
  int i = 0;

  // Illegal due to assigning int pointer to double pointer
  double* dp = &i;

  return 0;
}
