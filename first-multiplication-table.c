#include <stdio.h>

void pahada(int a, int b);

int main(void)
{
  int x, y;
  printf("Kiska table chahiye: ");
  scanf("%i", &x);
  printf("Achha, kaha tak ka chahiye: ");
  scanf("%i", &y);
  pahada(x, y);
}

void pahada(int a, int b)
  {
    for(int m = 1; m <= b; m += 1)
    {
      printf("%i\n", a*m);
    }
  }
