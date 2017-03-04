int main()
{
  int i = 3;
  const int ic = 22;

  i = ic; // Legal to assign const value to non-const i

  return 0;
}
