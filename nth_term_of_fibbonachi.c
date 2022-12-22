/*4. WAP to generate the first n terms of the sequence by writing a suitable
user defined function (say fib) to be used to get nth term Fibonacci value */

#include<stdio.h>
int fib(int); 
int main() 
{
    int n_328; 
    printf("\nEnter term number :"); 
    scanf("%d",&n_328); 
    printf("\nThe value of the term-%d of Fibonacci sequence is %d.", n_328, fib(n_328));
    return 0;
 }
    int fib(int n_328)
     {
         int i_328,f1_328=0,f2_328=1,f_328; 
         if (n_328==0 || n_328==1) 
         return (n_328-1);
         else 
         {
             for(i_328=1; i_328<=n_328-2; i_328++)
              {
                  f_328=f1_328+f2_328; f1_328=f2_328; f2_328=f_328; 
              }
              return f_328; 
         }
     }