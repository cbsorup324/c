
#include<stdio.h>
int checkPalindrome(int number);

int main()
{
  int number_328;

  printf("Enter the number: ");
  scanf("%d", &number_328);

  if(checkPalindrome(number_328) == 1)
  printf("%d is a palindrome number.\n",number_328);
  else
  printf("%d is not a palindrome number.\n",number_328);

  return 0;
}

int checkPalindrome(int a_328)
{
  int temp_328, remainder_328, sum_328=0;
  temp_328 = a_328;

  while( a_328!=0 )
  {
     remainder_328 = a_328 % 10;
     sum_328 = sum_328*10 + remainder_328;
     a_328 = a_328/10;
  }

  if ( sum_328 == temp_328 ) 
    return 1;
  else 
    return 0;
}