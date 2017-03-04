int main()
{
  int i2;
  const int *p1 = &i2; // Legal when i2 has int type

  return 0;
}
