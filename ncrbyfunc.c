#include <stdio.h>
 
int fact(int);
 
void main()
{
 int n_328,r_328,ncr_328;
 
  	printf("Enter a number n\n");
  	scanf("%d",&n_328);
 printf("Enter a number r\n");
  	scanf("%d",&r_328);
  	ncr_328=fact(n_328)/(fact(r_328)*fact(n_328-r_328));
    printf("Value of %dC%d = %d\n",n_328,r_328,ncr_328);
}
 
int fact(int n_328)
{
    int i_328,f_328=1;
    for(i_328=1;i_328<=n_328;i_328++)
    {
        f_328=f_328*i_328;
    }
    return f_328;
}
