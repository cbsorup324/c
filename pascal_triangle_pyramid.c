/*Q.7.WAP to generate the pascal triangle pyramid of numbers for a given number.Ex. for number 4
	    1
	   1 1
	  1 2 1
	 1 3 3 1
	1 4 6 4 1
*/
#include <stdio.h>
int main()
{
   int n_328,k_328=1,s_328,i_328,j_328;
   printf("Enter the number of rows:");
   scanf("%d",&n_328);
   for (i_328=0;i_328<=n_328;i_328++) 
   {
      for (s_328=1;s_328<=n_328-i_328;s_328++)
         printf(" ");
      for (j_328=0;j_328<=i_328;j_328++)
      {
         if (j_328==0||i_328==0)
            k_328=1;
         else
            k_328=k_328*(i_328-j_328+1)/j_328;
         printf("%4d",k_328);
      }
      printf("\n");
   }
   return 0;
}
