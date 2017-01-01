Exercise 2.9: Explain the following definitions. For those that are illegal,
explain what’s wrong and how to correct it.

(a) std::cin >> int input_value;
Should be:
int input_value;
std::cin >> input_value;
(b) int i = { 3.14 };
Narrowing using list initializer not allowed.
(c) double salary = wage = 9999.99;
Should be:
double salary, wage;
wage = salary = 9999.99;
(d) int i = 3.14;
3.14 is truncated to 3
