#include <stdio.h>

int main()
{
  int x;
  printf("Chalo ek number bolo: ");
  scanf("%i", &x);
  int y;
  printf("Black scorpio bulaye? Ek aur number bolo: ");
  scanf("%i", &y);
  char kaam[50];
  printf("Bajo mat kaam batao: ");
  scanf("%s", kaam);
  if(strcmp(kaam, "addition") == 0)
  {
    printf("%i", x+y);
  }
  else if(strcmp(kaam, "subtraction") == 0)
  {
    printf("%i", x-y);
  }
  else if(strcmp(kaam, "multiplication") == 0)
  {
    printf("%i", x*y);
  }
  else if(strcmp(kaam, "division") == 0)
  {
    printf("%i", x/y);
  }
  else if(strcmp(kaam, "remainder") == 0)
  {
    printf("%i", x%y);
  }
}
