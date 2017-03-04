int main()
{
  // Legal since r is reference to a const int
  const int i = -1, &r = 0;

  return 0;
}
