/*Q.1. WAP to print the following pattern for n rows.( Ex. for n=5 rows )
1
121
12321
1234321
*/
#include<stdio.h>
int main()
{
    int n_328,i_328,j_328,k_328;
    printf("Enter the no. of rows:");
    scanf("%d",&n_328);
    for(i_328=1;i_328<=n_328;i_328++)
    {
      for(j_328=1;j_328<=n_328-i_328;j_328++)
         printf(" ");
      for(k_328=1;k_328<=i_328;k_328++)
         printf("%d",k_328);
      for(k_328=i_328-1;k_328>0;k_328--)
         printf("%d",k_328);
         printf("\n");
  }
  return 0;
}
