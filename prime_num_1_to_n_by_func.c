/*1.WAP to generate all the prime numbers between 1 and n by using a user
defined function (say isPRIME) to be used for prime number testing, where n
is a value supplied by the user*/
#include <stdio.h>
int checkPrimeNumber(int n); 
int main() 
{
    int n1, n2, i041, number041; 
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
       if (n1 > n2) 
       {
           n1 = n1 + n2; n2 = n1 - n2; n1 = n1 - n2; 
       }
           printf("Prime numbers between %d and %d are: ", n1, n2); 
           for (i041 = n1 + 1; i041 < n2; ++i041) 
           {
               number041 = checkPrimeNumber(i041); 
               if (number041 == 1)
                { 
                    printf("%d ", i041); 
                }
            }return 0;
 }
 int checkPrimeNumber(int n)
  {
      int j, number = 1; 
      for (j = 2; j <= n / 2; ++j) 
      {
          if (n % j == 0) 
          {
              number = 0; break; 
          }
       }
       return number; 
   }