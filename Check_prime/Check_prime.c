#include <stdio.h>

int main()
{
  int n, i, l = 0;

  printf("\nEnter the number : ");
  scanf("%d", &n);
  
  i = 2;
  
  for (; i <= n / 2;){
    if (n % i == 0){
      l = 1;
      break;
    }
    i = i + 1;
  }

  if (l == 0){
    printf("\n%d is a prime number.\n\n", n);
  }
  else{
    printf("\n%d is not a prime number.\n\n", n);
  }

  return 0;
}