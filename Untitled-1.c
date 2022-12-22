/*. Write a C program to print the following character number pyramid as:

1
A B
2 3 4
C D E F
5 6 7 8 9 */
#include<stdio.h>
int main()
{
 int num,r,c;
 static int i=1;
 static char ch='A';
 printf("Enter no. of rows : ");
 scanf("%d", &num);
 for(r=1; r<=num; r++)
 {
  for(c=1; c<=r; c++)
  {
    if(r%2==0)
       printf(" %c",ch++);
    else
       printf(" %d",i++);
  }
  printf("\n");
 }
getch();
}