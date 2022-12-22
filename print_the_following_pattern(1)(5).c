/*Q.6WAP to print the following pattern for n rows. Ex. for n=6 rows
	0
	1 0
	0 1 0
	1 0 1 0
	0 1 0 1 0
	1 0 1 0 1 0
	*/
#include<stdio.h>
int main()
{
  int i_328,j_328,n_328;
  printf("Enter the number of rows:");
  scanf("%d",&n_328);
  
  for(i_328=1;i_328<=n_328;i_328++)
  {
    if(i_328%2 != 0)
    {
      for(j_328=1;j_328<=i_328;j_328++)
      {
        if(j_328%2 != 0)
        printf("0");
        else
        printf("1");
      }
    }
    else
    {
      for(j_328=1;j_328<=i_328;j_328++)
      {
        if(j_328%2 != 0)
        printf("1");
        else
        printf("0");
      
    }
  }
  printf("\n");
  }
  return 0;
}
