#include <stdio.h>

// copy the input to the output, version 1

int main()
{
  int c;

  c = getchar();
  while (c != EOF) { // != "not equal"
    putchar(c);
    c = getchar();
  }
}
