#include <stdio.h>
#include <math.h>

int main()
{
  double total = 0,price = 0;
  int code,unit;
  for(int i = 0; i < 2;i++)
  {
    scanf("%i",&code);
    scanf("%i",&unit);
    scanf("%lf",&price);
    total = (unit*price)+total;
  }
  printf("VALOR A PAGAR: R$ %.2lf\n",total);
  return 0;
}
