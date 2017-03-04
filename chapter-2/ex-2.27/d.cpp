int main()
{
  int i2;
  const int *const p3 = &i2; // Legal when i2 has an int type

  return 0;
}
