int main()
{
  const int ic, &r = ic; // Illegal because const int ic must be initialized

  return 0;
}
