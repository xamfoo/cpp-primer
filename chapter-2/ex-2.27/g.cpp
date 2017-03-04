int main()
{
  int i = 42;
  const int i2 = i, &r = i; // Legal when i has an int type

  return 0;
}
