#include <stdio.h>
int main()
{
  int a,b;
  int sum_a;
  printf("Enter a -> ");
  scanf("%i", &a);
  printf("Enter b -> ");
  scanf("%i", &b);

  if (a > b)
  {
    sum_a = 0;
    while (a > 0) {
      sum_a += a%10;
      a /= 10;
    }
    printf("Summa chisel: %d\n", sum_a);
  } else
  if (a == b)
  {
    printf("Summa cifr: b");
  } else
  if (a < b)
  {
    sum_a = 0;
    while (a > 0) {
      sum_a += a%10;
      a /= 10;
    }
    sum_a = sum_a * b;
    printf("Znachenie summi = %d\n", sum_a );
  }
}
