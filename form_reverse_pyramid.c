/*Q.5.WAP to form reverse pyramid of numbers for a given number. Ex. for
 number 4
	1 2 3 4 3 2 1
	    1 2 3 2 1
	       1 2 1
*/
#include <stdio.h>
int main()
{
    int a,b;
    int spaces=0;
        for(a=4; a>=1; a--)
    {
        for(b=1; b<=spaces; b++)
  {
   printf(" ");
  }
        for(b=1; b<=a; b++)
  {
   printf("%d",b);
  }
        for(b=a-1; b>=1; b--)
  {
   printf("%d",b);
  }
  printf("\n");
        spaces++;
    }
    return 0;
}
