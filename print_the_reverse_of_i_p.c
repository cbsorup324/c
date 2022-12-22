//8. WAP to print the the reverse of i/p


#include <stdio.h>
int main()
{
  int n_328, r_328 = 0;

  printf("Enter a number to reverse\n");
  scanf("%d", &n_328);

  while (n_328 != 0)
  {
    r_328 = r_328 * 10;
    r_328 = r_328 + n_328%10;
    n_328 = n_328/10;
  }

  printf("Reverse of the number %d", r_328);

  return 0;
}
