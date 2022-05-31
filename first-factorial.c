#include <stdio.h>

int main(void)
{
  int n;
  printf("Kiska factorial chahiye: ");
  scanf("%d", &n);
  
  int level[n], i, product = 1;
  
  for(i = 0; i < n; i++)
  {
    level[i] = i+1;
    product *= level [i];
  }
  printf("Lo ji, aapke factorial ka value hua: %d", product);
}
