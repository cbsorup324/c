
//1. WAP to add two numbers using call by reference.
#include<stdio.h>
void Sum(int a[],int num_328,int sum_328);
int main()
{
    int i_328,a[100],num_328,sum_328=0;
    printf("Enter number of Array  Elements\n");
   scanf("%d",&num_328);
   printf("Enter Array Elements\n");
   for(i_328=0;i_328<num_328;i_328++)
   {
    scanf("%d",&a[i_328]);
    }

   Sum(a,num_328-1,sum_328); 
}
void Sum(int a[],int num_328,int sum_328)
{
 
 if(num_328>=0)
 {
   sum_328+=(a[num_328]); 
  
  Sum(a,num_328-1,sum_328);
 }
 else
 {
    printf("Sum=%d\n",sum_328); 
  return;
 }
}