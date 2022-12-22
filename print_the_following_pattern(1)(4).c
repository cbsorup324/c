/*Q.3.WAP to print the following pattern for n rows. Ex. for n=5 rows
	A
	B A
	C B A
	D C B A
	E D C B A
*/
#include<stdio.h>
int main()
{
int i_328,j_328,n_328;
char ch_328;
printf("\nHow many rows:");
scanf("%d",&n_328); 
for(i_328=1;i_328<=n_328;i_328++)
{ 
  ch_328='A';
  for(j_328=i_328;j_328>=1;j_328--)
{ 
  printf("%c",ch_328+j_328-1);
}
 printf("\n");
}
return 0;
}
