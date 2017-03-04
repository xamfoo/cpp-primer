// Exercise 2.24: Why is the initiailization of p legal but that of lp illegal?

int main()
{
  int i = 42;
  void *p = &i;
  long *lp = &i; // Cannot initialize pointer of the wrong type

  return 0;
}
