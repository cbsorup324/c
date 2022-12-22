/*Q.9.WAP to convert a decimal number into its equivalent binary number.
 */
#include <stdio.h>
int main()
{
  int n, c, k;
  printf("Enter an integer in decimal number system:");
  scanf("%d", &n);

  printf("%d in binary number system is:", n);

  for (c = 31; c >= 0; c--)
  {
    k = n >> c;

    if (k & 1)
      printf("1");
    else
      printf("0");
  }

  printf("\n");

  return 0;
}
