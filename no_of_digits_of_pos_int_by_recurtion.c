//3. WAP to count number of digits of a positive integer n by using recursion.
#include <stdio.h>
int countDigits(int num) 
{ 
    static int count041 = 0; 
      if (num > 0) 
        { 
            count041++; countDigits(num / 10); 
        } 
        else 
        { 
            return count041; 
        }
}
int main() 
{ int number; 
  int count041 = 0; 
     printf("Enter a positive multi degit number: "); 
     scanf("%d", &number); count041 = countDigits(number); 
     printf("Total digits in number %d is: %d\n", number, count041); 
     return 0; 
} 