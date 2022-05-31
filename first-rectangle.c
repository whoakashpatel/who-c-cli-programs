#include <stdio.h>

int main(void)
{
  char symbol;
  printf("Koi ek charcter bataiye: ");
  scanf("%c", &symbol);
  int l, b;
  do
  {
    printf("Length bataiye: ");
    scanf("%i", &l);
  }
  while(l<1);
  
  do
  {
    printf("Breadth bhi bata hi dijiye: ");
    scanf("%i", &b);
  }
  while(b<1);
  
  for(int i = 0; i < b; i++)
  {
    for(int j = 0; j < l; j++)
    {
      printf("%c", symbol);
    }
    printf("\n");
  }
}
