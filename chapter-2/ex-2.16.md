Exercise 2.16: Which, if any, of the following assignments are invalid? If they are valid, explain what they do.

int i = 0, &r1 = i; double d = 0, &r2 = d;

(a) r2 = 3.14159;
Valid. Sets r2 = d to 3.14159

(b) r2 = r1;
Valid. Sets r2 = d to r1 = i = 0

(c) i = r2;
Valid. Sets i to r2 = d = 0

(d) r1 = d;
Valid. Sets r1 = i to d = 0
