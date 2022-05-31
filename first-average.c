#include <stdio.h>

// first-factorial.c

int main(void)
{
  int n;
  printf("Enter amount of subjects: ");
  scanf("%d", &n);
  
  int marks[n], i, sum = 0;
  
  for(i = 0; i < n; i++)
  {
    printf("Enter score#%d: ", i+1);
    scanf("%d", &marks[i]);
    
    sum += marks[i];
  }
  
  printf("Your average score is nothing greater than %.2f\n", (float) sum/n);
  return 0;
}
