#include <stdio.h>
// version 2 of putchar-getchar

int main()
{
  int c;

  while ((c = getchar()) != EOF)
    putchar(c);
}
