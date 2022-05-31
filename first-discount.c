#include <stdio.h>

float discount(float a, float b);

int main(void)
{
  int sp;
  printf("Kitne ka de rahe ho bhaiya?: ");
  scanf("%i", &sp);
  int d;
  printf("Chhotu, kitna likha hai?: ");
  scanf("%i", &d);
  float Offer_Price = discount(sp, d);
  long c = sp*(.01*d);
  printf("Sirf aapke liye %li discount laga ke iska daam hua %.2f", c, Offer_Price);
}

float discount(float a, float b)
{
  return a * (1 - (0.01*b));
}
