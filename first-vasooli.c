#include <stdio.h>

int main(void)
{
  int a, b;
  printf("Kitna vasoole?: ");
  scanf("%i", &a);
  if(a<10000)
  {
    do
    {
      printf("Fir se puchh rahe kitna vasoole be?: ");
      scanf("%i", &b);
    }
    while(b<10000);
    
    printf("Inhe dekhiye humaare naam pe %li vasool liye, aish karwate hai aapka rukiye thoda😤!", b);
  }
  else
  {
    printf("Inhe dekhiye humaare naam pe %li vasool liye, aish karwate hai aapka rukiye thoda😤!", a);
  }
}
