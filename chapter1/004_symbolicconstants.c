#include <stdio.h>

#define LOWER   0
#define UPPER   300
#define STEP    20

/* symbolic constants are used to
  make editing program files later
  more easy and less cumbersome,
  instead of embedding variables
  deep into functions
*/

int main()
{
  int fahr;
  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
